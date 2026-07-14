#include "config.h"
#include "hooks.h"
#include "dinput.h"

void InitializeDebugConsole()
{
   AllocConsole();

   FILE * file;

   freopen_s(&file, "CONOUT$", "w", stdout);
}

void Initialize()
{
   ds3Config::initialize();

   if(ds3Config::enableDebugConsole)
      InitializeDebugConsole();

   InitializeSystemDinput8DLL();
   InitializeHooks();
}

void FreeEverything()
{
   FreeSystemDinput8DLL();
   FreeHooks();
}

BOOL APIENTRY DllMain(HMODULE Module, DWORD  ReasonForCall, LPVOID Reserved)
{
   switch(ReasonForCall)
   {
   case DLL_PROCESS_ATTACH:
      Initialize();
      break;
   case DLL_THREAD_ATTACH:
      break;
   case DLL_THREAD_DETACH:
      break;
   case DLL_PROCESS_DETACH:
      FreeEverything();
      break;
   }

   return TRUE;
}