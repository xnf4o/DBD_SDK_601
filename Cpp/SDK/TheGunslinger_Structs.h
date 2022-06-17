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
	 * Enum TheGunslinger.EFireHarpoonRifleAimingInteractionSubState
	 */
	enum class EFireHarpoonRifleAimingInteractionSubState : uint8_t
	{
		None         = 0,
		Warmup       = 1,
		ReadyToShoot = 2,
		Cooldown     = 3,
		MAX          = 4
	};

	/**
	 * Enum TheGunslinger.EFireHarpoonRifleInteractionState
	 */
	enum class EFireHarpoonRifleInteractionState : uint8_t
	{
		None           = 0,
		Aiming         = 1,
		FirePhase      = 2,
		MissPhase      = 3,
		SuccessPhase   = 4,
		EndResult      = 5,
		CanceledAiming = 6,
		MAX            = 7
	};

	/**
	 * Enum TheGunslinger.ESkillCheckType
	 */
	enum class ESkillCheckType : uint8_t
	{
		NONE              = 0,
		GOOD_SKILL_CHECK  = 1,
		GREAT_SKILL_CHECK = 2,
		BOTH              = 3,
		MAX               = 4
	};

	/**
	 * Enum TheGunslinger.EHarpoonPositionState
	 */
	enum class EHarpoonPositionState : uint8_t
	{
		None                = 0,
		LoadedInRifle       = 1,
		FollowingProjectile = 2,
		ReelBackToRifle     = 3,
		AttachedToPlayer    = 4,
		Animated            = 5,
		MAX                 = 6
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
