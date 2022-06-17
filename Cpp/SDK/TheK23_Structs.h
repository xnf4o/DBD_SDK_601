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
	 * Enum TheK23.EFlurryOfKnivesInteractionState
	 */
	enum class EFlurryOfKnivesInteractionState : uint8_t
	{
		Charging = 0,
		Aiming   = 1,
		Throwing = 2,
		Finished = 3,
		MAX      = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
