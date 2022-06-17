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
	 * Enum TheK24.EContaminator
	 */
	enum class EContaminator : uint8_t
	{
		Zombie = 0,
		Killer = 1,
		Mori   = 2,
		MAX    = 3
	};

	/**
	 * Enum TheK24.EBlastMineRemovedReason
	 */
	enum class EBlastMineRemovedReason : uint8_t
	{
		Exploded         = 0,
		LifetimeExpired  = 1,
		BlastMineEndPlay = 2,
		MAX              = 3
	};

	/**
	 * Enum TheK24.EZombieState
	 */
	enum class EZombieState : uint8_t
	{
		InPool         = 0,
		Spawn          = 1,
		Patrolling     = 2,
		Searching      = 3,
		Chase          = 4,
		Attack         = 5,
		Dying          = 6,
		Dead           = 7,
		ChaseSearching = 8,
		InPlaceIdle    = 9,
		Stunned        = 10,
		FallSmash      = 11,
		AttackCooldown = 12,
		Stop           = 13,
		MAX            = 14
	};

	/**
	 * Enum TheK24.EZombieGender
	 */
	enum class EZombieGender : uint8_t
	{
		Male   = 0,
		Female = 1,
		MAX    = 2
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
