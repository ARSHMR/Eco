#pragma once

#ifdef ECO_PLATFORM_WINDOWS
  #ifdef ECO_BUILD_DLL
    #define ECO_API __declspec(dllexport)
  #else
    #define ECO_API __declspec(dllimport)
  #endif
#else
  #error Eco only supports windows.
#endif
