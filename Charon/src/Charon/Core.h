#pragma once

#ifdef CH_PLATFORM_WINDOWS
	#ifdef CH_BUILD_DLL
		#define CHARON_API __declspec(dllexport)
	#else
		#define CHARON_API __declspec(dllimport)
	#endif
#else
	#error Charon only supports Windows!
#endif
