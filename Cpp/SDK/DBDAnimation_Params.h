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
	 * Function DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay
	 */
	struct UPlayerAnimInstance_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function DBDAnimation.PlayerAnimInstance.OnIntroCompleted
	 */
	struct UPlayerAnimInstance_OnIntroCompleted_Params
	{	};

	/**
	 * Function DBDAnimation.PlayerAnimInstance.HasBeenNotified
	 */
	struct UPlayerAnimInstance_HasBeenNotified_Params
	{
	public:
		class FName                                                AnimNotify;                                              // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.PlayerAnimInstance.GetOwningPlayer
	 */
	struct UPlayerAnimInstance_GetOwningPlayer_Params
	{
	public:
		class ADBDPlayer*                                          ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor
	 */
	struct UBaseSurvivorAnimInstance_GetOwningSurvivor_Params
	{
	public:
		class ACamperPlayer*                                       ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode
	 */
	struct UArmIKSurvivorSubAnimInstance_ChangeMode_Params
	{
	public:
		EArmIkMode                                                 newMode;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.BaseKillerAnimInstance.GetOwningKiller
	 */
	struct UBaseKillerAnimInstance_GetOwningKiller_Params
	{
	public:
		class ASlasherPlayer*                                      ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV
	 */
	struct UBaseKillerAnimInstance_DBD_ForceAnimPOV_Params
	{
	public:
		int32_t                                                    animPOV;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller
	 */
	struct UBaseKillerAttackSubAnimInstance_GetOwningKiller_Params
	{
	public:
		class ASlasherPlayer*                                      ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.BaseMenuAnimInstance.OnCustomizationChanged
	 */
	struct UBaseMenuAnimInstance_OnCustomizationChanged_Params
	{
	public:
		TArray<class FName>                                        customizationArray;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer
	 */
	struct UBaseMenuAnimInstance_GetOwningMenuPlayer_Params
	{
	public:
		class ADBDMenuPlayer*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.BaseMenuAnimInstance.GetCurrentMenu
	 */
	struct UBaseMenuAnimInstance_GetCurrentMenu_Params
	{
	public:
		EGameFlowStep                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.ChestAnimInstance.OnSearchedChanged
	 */
	struct UChestAnimInstance_OnSearchedChanged_Params
	{
	public:
		bool                                                       searched;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess
	 */
	struct UGeneratorAnimInstance_SetSkillCheckSuccess_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed
	 */
	struct UHealSurvivorSubAnimInstance_ResetHealerSkillCheckFailed_Params
	{	};

	/**
	 * Function DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic
	 */
	struct UHealSurvivorSubAnimInstance_OnHealerSkillCheckResponseAesthetic_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ADBDPlayer*                                          healer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.KillerAnimInstance.GetWeaponCustomizationId
	 */
	struct UKillerAnimInstance_GetWeaponCustomizationId_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted
	 */
	struct ULookAtTargetKillerSubAnimInstance_OnChaseStarted_Params
	{
	public:
		class ADBDPlayer*                                          Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded
	 */
	struct ULookAtTargetKillerSubAnimInstance_OnChaseEnded_Params
	{
	public:
		class ADBDPlayer*                                          Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      chaseTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.PalletAnimInstance.OnKillerSet
	 */
	struct UPalletAnimInstance_OnKillerSet_Params
	{
	public:
		class ASlasherPlayer*                                      killer;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger
	 */
	struct UScreamSurvivorSubAnimInstance_ResetScreamTrigger_Params
	{	};

	/**
	 * Function DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed
	 */
	struct USkillCheckFailureTracker_ResetSkillCheckFailed_Params
	{	};

	/**
	 * Function DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed
	 */
	struct USkillCheckFailureTracker_OnSkillCheckFailed_Params
	{
	public:
		struct FGameplayTag                                        gameEventType;                                           // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameEventData                                      GameEventData;                                           // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent
	 */
	struct USurvivorAnimInstance_SetAudioRummageAkEvent_Params
	{
	public:
		class FName                                                Distance;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream
	 */
	struct USurvivorAnimInstance_OnInfectiousFrightScream_Params
	{	};

	/**
	 * Function DBDAnimation.SurvivorAnimInstance.IsPlayingMontageByName
	 */
	struct USurvivorAnimInstance_IsPlayingMontageByName_Params
	{
	public:
		class FName                                                MontageID;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius
	 */
	struct USurvivorAnimInstance_AddAudioRepairRateRadius_Params
	{
	public:
		int32_t                                                    Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.Turn180Component.Server_SetSettings
	 */
	struct UTurn180Component_Server_SetSettings_Params
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTurn180Settings                                    Settings;                                                // 0x0000(0x0001)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer
	 */
	struct UWakerObjectAnimInstance_ResetReappearTimer_Params
	{	};

	/**
	 * Function DBDAnimation.WakerObjectAnimInstance.OnReappear
	 */
	struct UWakerObjectAnimInstance_OnReappear_Params
	{	};

	/**
	 * Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted
	 */
	struct UWakerObjectAnimInstance_GetWakerObjectStarted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete
	 */
	struct UWakerObjectAnimInstance_GetWakerObjectChargeComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge
	 */
	struct UWakerObjectAnimInstance_GetWakerObjectCharge_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDAnimation.WakerObjectAnimInstance.GetWakerObject
	 */
	struct UWakerObjectAnimInstance_GetWakerObject_Params
	{
	public:
		class AWakerObject*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
