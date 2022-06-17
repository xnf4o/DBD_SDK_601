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
	 * Enum TheTwins.EPerkInteractionObjectType
	 */
	enum class EPerkInteractionObjectType : uint8_t
	{
		Item        = 0,
		ChestClosed = 1,
		ChestOpen   = 2,
		MAX         = 3
	};

	/**
	 * Enum TheTwins.EPossessionState
	 */
	enum class EPossessionState : uint8_t
	{
		NotPossessed   = 0,
		BeingPossessed = 1,
		Possessed      = 2,
		MAX            = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
