#pragma once
#include <string>

HMODULE DINPUT8DLL = nullptr;

HRESULT WINAPI DirectInput8CreateWrapper(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID * ppvOut, LPUNKNOWN punkOuter)
{
   typedef HRESULT(WINAPI * DirectInput8Create_t)(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID * ppvOut, LPUNKNOWN punkOuter);

   DirectInput8Create_t OriginalDirectInput8Create = (DirectInput8Create_t)GetProcAddress(DINPUT8DLL, "DirectInput8Create");
   HRESULT result = S_FALSE;

   if(OriginalDirectInput8Create)
   {
      printf("DirectInput8Create was found in the system's dinput8.dll.\n");

      result = OriginalDirectInput8Create(hinst, dwVersion, riidltf, ppvOut, punkOuter);
   }
   else
   {
      printf("DirectInput8Create was not found in the system's dinput8.dll.\n");
   }

   printf("DirectInput8CreateWrapper is returning %d.\n", result);

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

void FreeSystemDinput8DLL()
{
   if(DINPUT8DLL)
      FreeLibrary(DINPUT8DLL);
}