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
	 * Enum TheBlight.EWallGrabState
	 */
	enum class EWallGrabState : uint8_t
	{
		None            = 0,
		Charging        = 1,
		Charged         = 2,
		NonLethalCharge = 3,
		Adjusting       = 4,
		Holding         = 5,
		LethalCharge    = 6,
		Cooldown        = 7,
		Sliding         = 8,
		Attacking       = 9,
		MAX             = 10
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
