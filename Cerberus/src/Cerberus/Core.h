#pragma once
#ifdef CB_PLATFORM_WINDOWS
	#ifdef CB_BUILD_DLL
		#define CERBERUS_API __declspec(dllexport)
	#else
		#define CERBERUS_API __declspec(dllimport)
	#endif // CB_BUILD_DLL
#else
#error Cerberus only supports Windows!
#endif // CB_PLATFORM_WINDOWS
