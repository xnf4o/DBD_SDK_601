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
	 * Enum TheClown.EBombType
	 */
	enum class EBombType : uint8_t
	{
		Toxin    = 0,
		Antidote = 1,
		MAX      = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
