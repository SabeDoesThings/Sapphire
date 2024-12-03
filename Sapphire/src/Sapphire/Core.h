#pragma once

#ifdef SP_PLATFORM_WINDOWS
	#ifdef SP_BUILD_DLL
		#define SAPPHIRE_API __declspec(dllexport)
	#else
		#define SAPPHIRE_API __declspec(dllimport)
	#endif // SP_BUILD_DLL
#else
	#error Sapphire only supports Windows!
#endif
