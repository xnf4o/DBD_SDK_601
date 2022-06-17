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
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.GetTrapPlacementLocation_World
	 */
	struct ABP_Slasher_Character_C_GetTrapPlacementLocation_World_Params
	{
	public:
		struct FVector                                             World_Location;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.GetSlasherAudioComponent
	 */
	struct ABP_Slasher_Character_C_GetSlasherAudioComponent_Params
	{
	public:
		class UAkComponent*                                        Audio_Component;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.IsTrapPlacementValid
	 */
	struct ABP_Slasher_Character_C_IsTrapPlacementValid_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.SetAudioSwitchSubKillerState
	 */
	struct ABP_Slasher_Character_C_SetAudioSwitchSubKillerState_Params
	{
	public:
		class FString                                              switchState;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Initialize Blinding FX Component
	 */
	struct ABP_Slasher_Character_C_Initialize_Blinding_FX_Component_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.PlayAudioKillerGameStart
	 */
	struct ABP_Slasher_Character_C_PlayAudioKillerGameStart_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.CreateSlasherBloodPP
	 */
	struct ABP_Slasher_Character_C_CreateSlasherBloodPP_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.IsActivePhaseWalking
	 */
	struct ABP_Slasher_Character_C_IsActivePhaseWalking_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ShouldShowBlackVignette
	 */
	struct ABP_Slasher_Character_C_ShouldShowBlackVignette_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.IsPassivePhaseWalking
	 */
	struct ABP_Slasher_Character_C_IsPassivePhaseWalking_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.LocallyObservedCharacterIsShowingFakeKillerStain
	 */
	struct ABP_Slasher_Character_C_LocallyObservedCharacterIsShowingFakeKillerStain_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.GetCustomizedSkeletalMesh
	 */
	struct ABP_Slasher_Character_C_GetCustomizedSkeletalMesh_Params
	{
	public:
		class UCustomizedSkeletalMesh*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.GetPlayerDropOffPoint
	 */
	struct ABP_Slasher_Character_C_GetPlayerDropOffPoint_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.IsCloaking
	 */
	struct ABP_Slasher_Character_C_IsCloaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.GetCurrentStalkTier
	 */
	struct ABP_Slasher_Character_C_GetCurrentStalkTier_Params
	{
	public:
		float                                                      currentTier;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateStalkModeEffect
	 */
	struct ABP_Slasher_Character_C_UpdateStalkModeEffect_Params
	{
	public:
		float                                                      StalkModePercent;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.SetDetectionZones
	 */
	struct ABP_Slasher_Character_C_SetDetectionZones_Params
	{
	public:
		EAttackZoneSet                                             Attack_Zones;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.isFirstPerson
	 */
	struct ABP_Slasher_Character_C_isFirstPerson_Params
	{
	public:
		bool                                                       First_Person;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.IsUncloaking
	 */
	struct ABP_Slasher_Character_C_IsUncloaking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.SetMacheteCustomDepth
	 */
	struct ABP_Slasher_Character_C_SetMacheteCustomDepth_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ResetMaterials
	 */
	struct ABP_Slasher_Character_C_ResetMaterials_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ApplyFirstPersonShaders
	 */
	struct ABP_Slasher_Character_C_ApplyFirstPersonShaders_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.UserConstructionScript
	 */
	struct ABP_Slasher_Character_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke__FinishedFunc
	 */
	struct ABP_Slasher_Character_C_TML_BlackSmoke__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke__UpdateFunc
	 */
	struct ABP_Slasher_Character_C_TML_BlackSmoke__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Timeline_1__FinishedFunc
	 */
	struct ABP_Slasher_Character_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Timeline_1__UpdateFunc
	 */
	struct ABP_Slasher_Character_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Bloodlust Timeline__FinishedFunc
	 */
	struct ABP_Slasher_Character_C_Bloodlust_Timeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Bloodlust Timeline__UpdateFunc
	 */
	struct ABP_Slasher_Character_C_Bloodlust_Timeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke_Atlanta__FinishedFunc
	 */
	struct ABP_Slasher_Character_C_TML_BlackSmoke_Atlanta__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke_Atlanta__UpdateFunc
	 */
	struct ABP_Slasher_Character_C_TML_BlackSmoke_Atlanta__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.TML_LungeAttack__FinishedFunc
	 */
	struct ABP_Slasher_Character_C_TML_LungeAttack__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.TML_LungeAttack__UpdateFunc
	 */
	struct ABP_Slasher_Character_C_TML_LungeAttack__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterOpacityAnim__FinishedFunc
	 */
	struct ABP_Slasher_Character_C_BloodSplatterOpacityAnim__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterOpacityAnim__UpdateFunc
	 */
	struct ABP_Slasher_Character_C_BloodSplatterOpacityAnim__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterFrameAnim__FinishedFunc
	 */
	struct ABP_Slasher_Character_C_BloodSplatterFrameAnim__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterFrameAnim__UpdateFunc
	 */
	struct ABP_Slasher_Character_C_BloodSplatterFrameAnim__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Travelling Dissolve
	 */
	struct ABP_Slasher_Character_C_Stop_Travelling_Dissolve_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Start Pounce VFX
	 */
	struct ABP_Slasher_Character_C_Start_Pounce_VFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Pounce VFX
	 */
	struct ABP_Slasher_Character_C_Stop_Pounce_VFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Start Saliva VFX
	 */
	struct ABP_Slasher_Character_C_Start_Saliva_VFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Saliva VFX
	 */
	struct ABP_Slasher_Character_C_Stop_Saliva_VFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Travelling PP
	 */
	struct ABP_Slasher_Character_C_Stop_Travelling_PP_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePounceStateVFX
	 */
	struct ABP_Slasher_Character_C_ActivatePounceStateVFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Kanobo To Demon Mode
	 */
	struct ABP_Slasher_Character_C_Switch_Kanobo_To_Demon_Mode_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Kanobo to Normal Mode
	 */
	struct ABP_Slasher_Character_C_Switch_Kanobo_to_Normal_Mode_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Hide Oni Katana
	 */
	struct ABP_Slasher_Character_C_Hide_Oni_Katana_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Show Oni Katana
	 */
	struct ABP_Slasher_Character_C_Show_Oni_Katana_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Destroy Blood Orb
	 */
	struct ABP_Slasher_Character_C_Destroy_Blood_Orb_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Oni Weapons To Normal
	 */
	struct ABP_Slasher_Character_C_Switch_Oni_Weapons_To_Normal_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ShowDemonCosmetic
	 */
	struct ABP_Slasher_Character_C_ShowDemonCosmetic_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.HideDemonCosmetic
	 */
	struct ABP_Slasher_Character_C_HideDemonCosmetic_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.DisableDemonMode
	 */
	struct ABP_Slasher_Character_C_DisableDemonMode_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Hide Oni Katana_TPV
	 */
	struct ABP_Slasher_Character_C_Hide_Oni_Katana_TPV_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ShowGunBullet
	 */
	struct ABP_Slasher_Character_C_ShowGunBullet_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.HideGunBullet
	 */
	struct ABP_Slasher_Character_C_HideGunBullet_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.SpawnFakeBullet
	 */
	struct ABP_Slasher_Character_C_SpawnFakeBullet_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateSacrificeCamBlood
	 */
	struct ABP_Slasher_Character_C_ActivateSacrificeCamBlood_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.StartDeathBedDissolve
	 */
	struct ABP_Slasher_Character_C_StartDeathBedDissolve_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.DeactivateKnockoutVFX
	 */
	struct ABP_Slasher_Character_C_DeactivateKnockoutVFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateKnockoutVFX
	 */
	struct ABP_Slasher_Character_C_ActivateKnockoutVFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.SpawnFullScreenBlood
	 */
	struct ABP_Slasher_Character_C_SpawnFullScreenBlood_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.StartDeathBedRelocateVignette
	 */
	struct ABP_Slasher_Character_C_StartDeathBedRelocateVignette_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateAttemptEscapeVFX
	 */
	struct ABP_Slasher_Character_C_ActivateAttemptEscapeVFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ShowSyringe
	 */
	struct ABP_Slasher_Character_C_ShowSyringe_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.HideSyringe
	 */
	struct ABP_Slasher_Character_C_HideSyringe_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.AnimateLiquidSyringe
	 */
	struct ABP_Slasher_Character_C_AnimateLiquidSyringe_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateVignetteOnWallCollision
	 */
	struct ABP_Slasher_Character_C_ActivateVignetteOnWallCollision_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.HideSyringeOnStun
	 */
	struct ABP_Slasher_Character_C_HideSyringeOnStun_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_SpawnWipeVFX
	 */
	struct ABP_Slasher_Character_C_K22_SpawnWipeVFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightDormantMain
	 */
	struct ABP_Slasher_Character_C_K22_HighlightDormantMain_Params
	{
	public:
		bool                                                       IsDormantMain_;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightDormant
	 */
	struct ABP_Slasher_Character_C_K22_HighlightDormant_Params
	{
	public:
		bool                                                       IsDormant_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightMissJump
	 */
	struct ABP_Slasher_Character_C_K22_HighlightMissJump_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_DormantAttachedSlasher
	 */
	struct ABP_Slasher_Character_C_K22_DormantAttachedSlasher_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_JumpTrail_Activate
	 */
	struct ABP_Slasher_Character_C_K22_JumpTrail_Activate_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_JumpTrail_Deactivate
	 */
	struct ABP_Slasher_Character_C_K22_JumpTrail_Deactivate_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_ReleaseBrother
	 */
	struct ABP_Slasher_Character_C_K22_ReleaseBrother_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_MembraneRecovery
	 */
	struct ABP_Slasher_Character_C_K22_MembraneRecovery_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_MembraneDelete
	 */
	struct ABP_Slasher_Character_C_K22_MembraneDelete_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BabyBloodDissolve
	 */
	struct ABP_Slasher_Character_C_K22_BabyBloodDissolve_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BabyRespawn
	 */
	struct ABP_Slasher_Character_C_K22_BabyRespawn_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_Jump_Active
	 */
	struct ABP_Slasher_Character_C_K22_Jump_Active_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_Jump_Inactive
	 */
	struct ABP_Slasher_Character_C_K22_Jump_Inactive_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.On Execution
	 */
	struct ABP_Slasher_Character_C_On_Execution_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_WrongLanding
	 */
	struct ABP_Slasher_Character_C_K22_WrongLanding_Params
	{
	public:
		bool                                                       Wrong_Landing;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_AttachedToSurvivor_VFX
	 */
	struct ABP_Slasher_Character_C_K22_AttachedToSurvivor_VFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_DetachedFromSurvivor_VFX
	 */
	struct ABP_Slasher_Character_C_K22_DetachedFromSurvivor_VFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_WrongLandingVignette
	 */
	struct ABP_Slasher_Character_C_K22_WrongLandingVignette_Params
	{
	public:
		bool                                                       WrongLanding;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K12_GetToxinVignette
	 */
	struct ABP_Slasher_Character_C_K12_GetToxinVignette_Params
	{
	public:
		EBombType                                                  Bomb_Type;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K12_GetAntidoteVignette
	 */
	struct ABP_Slasher_Character_C_K12_GetAntidoteVignette_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_AntidoteEnd
	 */
	struct ABP_Slasher_Character_C_K12_Killer_AntidoteEnd_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_AntidoteBegin
	 */
	struct ABP_Slasher_Character_C_K12_Killer_AntidoteBegin_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_BombSmokeColor
	 */
	struct ABP_Slasher_Character_C_K12_Killer_BombSmokeColor_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_RemoveVignette
	 */
	struct ABP_Slasher_Character_C_K12_Killer_RemoveVignette_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_PlaceVignette
	 */
	struct ABP_Slasher_Character_C_K12_Killer_PlaceVignette_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_QuickDissolveBrother
	 */
	struct ABP_Slasher_Character_C_K22_QuickDissolveBrother_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Camper_AntidoteBoostVignette_Start
	 */
	struct ABP_Slasher_Character_C_Camper_AntidoteBoostVignette_Start_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Camper_AntidoteBoostVignette_End
	 */
	struct ABP_Slasher_Character_C_Camper_AntidoteBoostVignette_End_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BrotherDissolveLocker
	 */
	struct ABP_Slasher_Character_C_K22_BrotherDissolveLocker_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightMissJump_Stop
	 */
	struct ABP_Slasher_Character_C_K22_HighlightMissJump_Stop_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_CamperHitByKnife
	 */
	struct ABP_Slasher_Character_C_K23_CamperHitByKnife_Params
	{
	public:
		bool                                                       IsLocallyObserved;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      lacerationPercent;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isDangerous;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K22_IsAttachedLocker
	 */
	struct ABP_Slasher_Character_C_K22_IsAttachedLocker_Params
	{
	public:
		bool                                                       IsAttachedLocker;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowKnifeLT
	 */
	struct ABP_Slasher_Character_C_K23_ShowKnifeLT_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowKnifeRT
	 */
	struct ABP_Slasher_Character_C_K23_ShowKnifeRT_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowBat
	 */
	struct ABP_Slasher_Character_C_K23_ShowBat_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideBat
	 */
	struct ABP_Slasher_Character_C_K23_HideBat_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideKnifeRT
	 */
	struct ABP_Slasher_Character_C_K23_HideKnifeRT_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideKnifeLT
	 */
	struct ABP_Slasher_Character_C_K23_HideKnifeLT_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.AddBloodDrippingGKMoriMale
	 */
	struct ABP_Slasher_Character_C_AddBloodDrippingGKMoriMale_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ReturnOniToNormal
	 */
	struct ABP_Slasher_Character_C_ReturnOniToNormal_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Survivor_BoonRadius_Enter
	 */
	struct ABP_Slasher_Character_C_Survivor_BoonRadius_Enter_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Survivor_BoonRadius_Exit
	 */
	struct ABP_Slasher_Character_C_Survivor_BoonRadius_Exit_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Boon_Unbound
	 */
	struct ABP_Slasher_Character_C_Boon_Unbound_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature
	 */
	struct ABP_Slasher_Character_C_BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature_Params
	{
	public:
		class UFlashlightComponent*                                Flashlight;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature
	 */
	struct ABP_Slasher_Character_C_BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature_Params
	{
	public:
		class UFlashlightComponent*                                Flashlight;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Start Travelling Dissolve
	 */
	struct ABP_Slasher_Character_C_Start_Travelling_Dissolve_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Start Travelling PP
	 */
	struct ABP_Slasher_Character_C_Start_Travelling_PP_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature
	 */
	struct ABP_Slasher_Character_C_BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       IsLit;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	 */
	struct ABP_Slasher_Character_C_BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature_Params
	{
	public:
		EAudioCustomizationCategory                                Category;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              switchState;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerGlitchVFX
	 */
	struct ABP_Slasher_Character_C_ActivatePlayerGlitchVFX_Params
	{
	public:
		class UMaterialInstanceDynamic*                            GlitchFX;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Face;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Madness;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       killer;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerLightningVFX
	 */
	struct ABP_Slasher_Character_C_ActivatePlayerLightningVFX_Params
	{
	public:
		class UMaterialInstanceDynamic*                            LightningFX;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       intense;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.SetHighlightedVFX
	 */
	struct ABP_Slasher_Character_C_SetHighlightedVFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Dissolve
	 */
	struct ABP_Slasher_Character_C_Dissolve_Params
	{
	public:
		bool                                                       Dissolve;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.SetPlayerExposedVFX
	 */
	struct ABP_Slasher_Character_C_SetPlayerExposedVFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Telekinesis On
	 */
	struct ABP_Slasher_Character_C_Telekinesis_On_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Telekinesis Off
	 */
	struct ABP_Slasher_Character_C_Telekinesis_Off_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateLocalPlayerExposedVFX
	 */
	struct ABP_Slasher_Character_C_ActivateLocalPlayerExposedVFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.NurseInvisible On
	 */
	struct ABP_Slasher_Character_C_NurseInvisible_On_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.NurseInvisible Off
	 */
	struct ABP_Slasher_Character_C_NurseInvisible_Off_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.FX_SetTrap
	 */
	struct ABP_Slasher_Character_C_FX_SetTrap_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.FX_TrapImpact
	 */
	struct ABP_Slasher_Character_C_FX_TrapImpact_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.FX_TrapImpact Off
	 */
	struct ABP_Slasher_Character_C_FX_TrapImpact_Off_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.FX_BloodDrops
	 */
	struct ABP_Slasher_Character_C_FX_BloodDrops_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerExposedVFX
	 */
	struct ABP_Slasher_Character_C_ActivatePlayerExposedVFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateRageTierEffect
	 */
	struct ABP_Slasher_Character_C_UpdateRageTierEffect_Params
	{
	public:
		int32_t                                                    previousTier;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    currentTier;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.FX_TreatmentStart
	 */
	struct ABP_Slasher_Character_C_FX_TreatmentStart_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.FX_BloodDropWipe
	 */
	struct ABP_Slasher_Character_C_FX_BloodDropWipe_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.FX_WI_BloodDrops
	 */
	struct ABP_Slasher_Character_C_FX_WI_BloodDrops_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateEndGameVignette
	 */
	struct ABP_Slasher_Character_C_ActivateEndGameVignette_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_StunnedByPallet
	 */
	struct ABP_Slasher_Character_C_K23_StunnedByPallet_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.EvaluateBlackVignetteVisibility
	 */
	struct ABP_Slasher_Character_C_EvaluateBlackVignetteVisibility_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.OnStealthChanged
	 */
	struct ABP_Slasher_Character_C_OnStealthChanged_Params
	{
	public:
		bool                                                       stealth;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Hide_LTKnife
	 */
	struct ABP_Slasher_Character_C_K23_Hide_LTKnife_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Hide_RTKnife
	 */
	struct ABP_Slasher_Character_C_K23_Hide_RTKnife_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ReturnToDemonMode
	 */
	struct ABP_Slasher_Character_C_ReturnToDemonMode_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.PlayBloodHitsEffects
	 */
	struct ABP_Slasher_Character_C_PlayBloodHitsEffects_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.PostProcessBloodFX
	 */
	struct ABP_Slasher_Character_C_PostProcessBloodFX_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Show_LTKnife
	 */
	struct ABP_Slasher_Character_C_K23_Show_LTKnife_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Show_RTKnife
	 */
	struct ABP_Slasher_Character_C_K23_Show_RTKnife_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K05_BloodDrops
	 */
	struct ABP_Slasher_Character_C_K05_BloodDrops_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K05_TrapImpactOff
	 */
	struct ABP_Slasher_Character_C_K05_TrapImpactOff_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K05_TrapImpact
	 */
	struct ABP_Slasher_Character_C_K05_TrapImpact_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K05_SetTrap
	 */
	struct ABP_Slasher_Character_C_K05_SetTrap_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Exit_SuperMode
	 */
	struct ABP_Slasher_Character_C_K23_Exit_SuperMode_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K07_TreatmentStart
	 */
	struct ABP_Slasher_Character_C_K07_TreatmentStart_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K04_InvisibleOff
	 */
	struct ABP_Slasher_Character_C_K04_InvisibleOff_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K04_InvisibleOn
	 */
	struct ABP_Slasher_Character_C_K04_InvisibleOn_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K04_TelekinesisOff
	 */
	struct ABP_Slasher_Character_C_K04_TelekinesisOff_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K04_TelekinesisOn
	 */
	struct ABP_Slasher_Character_C_K04_TelekinesisOn_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Enter_SuperMode
	 */
	struct ABP_Slasher_Character_C_K23_Enter_SuperMode_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Killer_LungeAttack_Start
	 */
	struct ABP_Slasher_Character_C_Killer_LungeAttack_Start_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Killer_LungeAttack_End
	 */
	struct ABP_Slasher_Character_C_Killer_LungeAttack_End_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.EventK23Camper
	 */
	struct ABP_Slasher_Character_C_EventK23Camper_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.StopBloodSplatter
	 */
	struct ABP_Slasher_Character_C_StopBloodSplatter_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.PlayBloodSplatter
	 */
	struct ABP_Slasher_Character_C_PlayBloodSplatter_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ReceiveBeginPlay
	 */
	struct ABP_Slasher_Character_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.OnDestroyed_Event_Machete_Copy
	 */
	struct ABP_Slasher_Character_C_OnDestroyed_Event_Machete_Copy_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.OnClientRestart
	 */
	struct ABP_Slasher_Character_C_OnClientRestart_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.OnEscapeDoorActivated
	 */
	struct ABP_Slasher_Character_C_OnEscapeDoorActivated_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.OnFirecrackerInRangeBegin
	 */
	struct ABP_Slasher_Character_C_OnFirecrackerInRangeBegin_Params
	{
	public:
		struct FFirecrackerEffectData                              effectData;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.OnLocallyObservedChanged
	 */
	struct ABP_Slasher_Character_C_OnLocallyObservedChanged_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.SetAttackDetectionZoneSet
	 */
	struct ABP_Slasher_Character_C_SetAttackDetectionZoneSet_Params
	{
	public:
		EAttackZoneSet                                             attackZoneSet;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.OnIntroCompletedBP
	 */
	struct ABP_Slasher_Character_C_OnIntroCompletedBP_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.SetAnimationCrouchState
	 */
	struct ABP_Slasher_Character_C_SetAnimationCrouchState_Params
	{
	public:
		bool                                                       crouched;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.DisplayAttackZones
	 */
	struct ABP_Slasher_Character_C_DisplayAttackZones_Params
	{
	public:
		bool                                                       Display;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.MergeLockOnDamageZones
	 */
	struct ABP_Slasher_Character_C_MergeLockOnDamageZones_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.OnLevelReadyToPlay
	 */
	struct ABP_Slasher_Character_C_OnLevelReadyToPlay_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnPickUpEnd
	 */
	struct ABP_Slasher_Character_C_Cosmetic_OnPickUpEnd_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnDropCamperEnd
	 */
	struct ABP_Slasher_Character_C_Cosmetic_OnDropCamperEnd_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature
	 */
	struct ABP_Slasher_Character_C_BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature
	 */
	struct ABP_Slasher_Character_C_BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.OnIntroCompleted
	 */
	struct ABP_Slasher_Character_C_OnIntroCompleted_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateDOF
	 */
	struct ABP_Slasher_Character_C_UpdateDOF_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnCancelCarry
	 */
	struct ABP_Slasher_Character_C_Cosmetic_OnCancelCarry_Params
	{	};

	/**
	 * Function BP_Slasher_Character.BP_Slasher_Character_C.ExecuteUbergraph_BP_Slasher_Character
	 */
	struct ABP_Slasher_Character_C_ExecuteUbergraph_BP_Slasher_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
