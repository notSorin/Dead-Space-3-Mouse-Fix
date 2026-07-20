#pragma once
#include <Windows.h>
#include <string>

HMODULE DINPUT8DLL = nullptr;
typedef HRESULT(WINAPI * DirectInput8Create_t)(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID * ppvOut, LPUNKNOWN punkOuter);
DirectInput8Create_t OriginalDirectInput8Create = nullptr;

HRESULT WINAPI DirectInput8CreateWrapper(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID * ppvOut, LPUNKNOWN punkOuter)
{
   HRESULT result = S_FALSE;

   if(OriginalDirectInput8Create)
   {
      result = OriginalDirectInput8Create(hinst, dwVersion, riidltf, ppvOut, punkOuter);

      if(result == S_OK)
         printf("DirectInput8CreateWrapper OK\n");
      else
         printf("DirectInput8CreateWrapper failed (result %d)\n", result);
   }
   else
      printf("DirectInput8CreateWrapper does not have a pointer to OriginalDirectInput8Create.");

   return result;
}

std::string CreatePathToSystemDinput8DLL()
{
   char path[MAX_PATH];

   GetSystemDirectoryA(path, MAX_PATH);
   strcat_s(path, "\\dinput8.dll");

   return std::string(path);
}

void InitializeSystemDinput8DLL()
{
   std::string systemDinput8Path = CreatePathToSystemDinput8DLL();
   DINPUT8DLL = LoadLibrary(systemDinput8Path.c_str());

   if(DINPUT8DLL)
      printf("System dinput8.dll loaded successfully.\n");
   else
      printf("Failed to load system dinput8.dll.\n");
}

void InitializeOriginaDirectInput8Create()
{
   if(DINPUT8DLL)
   {
      OriginalDirectInput8Create = (DirectInput8Create_t)GetProcAddress(DINPUT8DLL, "DirectInput8Create");

      if(OriginalDirectInput8Create)
         printf("OriginalDirectInput8Create has been initialized.\n");
      else
         printf("OriginalDirectInput8Create was not found in the system's dinput8.dll.\n");
   }
   else
      printf("Cannot initialize OriginaDirectInput8Create because DINPUT8DLL is not loaded.\n");
}

void InitializeDInput()
{
   InitializeSystemDinput8DLL();
   InitializeOriginaDirectInput8Create();
}

void FreeSystemDinput8DLL()
{
   if(DINPUT8DLL)
      FreeLibrary(DINPUT8DLL);
}