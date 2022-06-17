#pragma once

/**
 * Name: DBD
 * Version: 601
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum PlatformsProviders.EProviderFlag
	 */
	enum class EProviderFlag : uint8_t
	{
		None     = 0,
		Google   = 1,
		DMM      = 2,
		Facebook = 3,
		Nintendo = 4,
		PSN      = 5,
		Steam    = 6,
		WinGDK   = 7,
		Xbox     = 8,
		Apple    = 9,
		Kraken   = 10,
		Stadia   = 11,
		GAS3     = 12,
		Epic     = 13,
		MAX      = 14
	};

	/**
	 * Enum PlatformsProviders.EPlatformFlag
	 */
	enum class EPlatformFlag : uint8_t
	{
		None    = 0,
		Android = 1,
		DMM     = 2,
		IOS     = 3,
		Switch  = 4,
		PS4     = 5,
		Steam   = 6,
		WinGDK  = 7,
		Xbox    = 8,
		Stadia  = 9,
		PS5     = 10,
		XSX     = 11,
		Epic    = 12,
		MAX     = 13
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
