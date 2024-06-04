#pragma once

#ifdef RM_PLATFORM_WINDOWS
	#ifdef RM_BUILD_DLL
		#define ROMAKI_API __declspec(dllexport)
	#else
		#define ROMAKI_API __declspec(dllimport)
	#endif
#else
	#error Romaki Engine is only supported on Windows
#endif
	