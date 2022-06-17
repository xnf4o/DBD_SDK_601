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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackStartCosmetic
	 */
	struct UPounceAttackOpenSubstateCosmetic_OnLungeAttackStartCosmetic_Params
	{
	public:
		class ADBDPlayer*                                          SlasherPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackEndCosmetic
	 */
	struct UPounceAttackOpenSubstateCosmetic_OnLungeAttackEndCosmetic_Params
	{
	public:
		class ADBDPlayer*                                          SlasherPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChangedCosmetic
	 */
	struct UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChangedCosmetic_Params
	{
	public:
		class ADBDPlayer*                                          SlasherPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChanged
	 */
	struct UPounceAttackOpenSubstateCosmetic_OnLocallyObservedChanged_Params
	{
	public:
		class ADBDPlayer*                                          SlasherPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAttack.PounceAttackOpenSubstateCosmetic.IsLungeAttackAugmented
	 */
	struct UPounceAttackOpenSubstateCosmetic_IsLungeAttackAugmented_Params
	{
	public:
		class ADBDPlayer*                                          SlasherPlayer;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
