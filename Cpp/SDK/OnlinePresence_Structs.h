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
	 * Enum OnlinePresence.ERichPresenceUserType
	 */
	enum class ERichPresenceUserType : uint8_t
	{
		Player = 0,
		Server = 1,
		MAX    = 2
	};

	/**
	 * Enum OnlinePresence.ERichPresenceStatus
	 */
	enum class ERichPresenceStatus : uint8_t
	{
		Offline       = 0,
		Connected     = 1,
		InMenus       = 2,
		InPartyLobby  = 3,
		InOnlineLobby = 4,
		InMatch       = 5,
		MAX           = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
