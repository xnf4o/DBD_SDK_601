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
	 * Enum Halloween2021.EPumpkinType
	 */
	enum class EPumpkinType : uint8_t
	{
		None    = 0,
		Trick   = 1,
		Treat   = 2,
		Neutral = 3,
		MAX     = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
