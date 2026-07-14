#pragma once
#include <fstream>
#include <string>
#include "SCL.h"

namespace ds3Config
{
   const std::string CONFIG_FILE_NAME = "ds3_mouse_fix.config";
   const std::string ENABLE_DEBUG_CONSOLE_KEY = "ENABLE_DEBUG_CONSOLE";
   const std::string ENABLE_VERTICAL_AUTO_CENTERING_KEY = "ENABLE_VERTICAL_AUTO_CENTERING";

#ifdef _DEBUG
   bool enableDebugConsole = true;
#else
   bool enableDebugConsole = false;
#endif
   bool enableVerticalAutoCentering = false;

   bool configFileExists()
   {
      std::ifstream file(CONFIG_FILE_NAME);

      return file.good();
   }

   void createDefaultConfigFile()
   {
      scl::config_file configFile(CONFIG_FILE_NAME, scl::config_file::WRITE);

      configFile.put(scl::comment("Set this to 1 to enable the debug console."));
      configFile.put(ENABLE_DEBUG_CONSOLE_KEY, enableDebugConsole);
      configFile.put(scl::empty_lines(1));

      configFile.put(scl::comment("By default, the game automatically centers the camera vertically after around 3 seconds,"));
      configFile.put(scl::comment("and also when Isaac walks on stairs. This feature does not feel right when using mouse,"));
      configFile.put(scl::comment("therefore I disabled it. Set the following config to 1 to re-enable it."));
      configFile.put(ENABLE_VERTICAL_AUTO_CENTERING_KEY, enableVerticalAutoCentering);


      configFile.write_changes();
      configFile.close();
   }

   void readConfigFile()
   {
      scl::config_file configFile(CONFIG_FILE_NAME, scl::config_file::READ);

      enableDebugConsole = configFile.get<bool>(ENABLE_DEBUG_CONSOLE_KEY);
   }

   void initialize()
   {
      if(!configFileExists())
         createDefaultConfigFile();

      readConfigFile();
   }
}