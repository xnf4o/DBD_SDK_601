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
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SM_SetOniEmissiveParameter
	 */
	struct ABP_Menu_Slasher18_C_SM_SetOniEmissiveParameter_Params
	{
	public:
		struct FLinearColor                                        Emissive;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SK_SetOniEmissiveParameter
	 */
	struct ABP_Menu_Slasher18_C_SK_SetOniEmissiveParameter_Params
	{
	public:
		struct FLinearColor                                        Emissive;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonModeCusto
	 */
	struct ABP_Menu_Slasher18_C_ShowDemonModeCusto_Params
	{
	public:
		bool                                                       IsInDemonMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsInNormalMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SaveOniEmissiveParameter
	 */
	struct ABP_Menu_Slasher18_C_SaveOniEmissiveParameter_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.GetDemonModeCusto
	 */
	struct ABP_Menu_Slasher18_C_GetDemonModeCusto_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__FinishedFunc
	 */
	struct ABP_Menu_Slasher18_C_TML_KatanaDissolve__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_KatanaDissolve__UpdateFunc
	 */
	struct ABP_Menu_Slasher18_C_TML_KatanaDissolve__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__FinishedFunc
	 */
	struct ABP_Menu_Slasher18_C_TML_DemonModeCusto__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__UpdateFunc
	 */
	struct ABP_Menu_Slasher18_C_TML_DemonModeCusto__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Normal__EventFunc
	 */
	struct ABP_Menu_Slasher18_C_TML_DemonModeCusto__Switch_Normal__EventFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.TML_DemonModeCusto__Switch Demon__EventFunc
	 */
	struct ABP_Menu_Slasher18_C_TML_DemonModeCusto__Switch_Demon__EventFunc_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateEndGameVignette
	 */
	struct ABP_Menu_Slasher18_C_ActivateEndGameVignette_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerExposedVFX
	 */
	struct ABP_Menu_Slasher18_C_ActivatePlayerExposedVFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateLocalPlayerExposedVFX
	 */
	struct ABP_Menu_Slasher18_C_ActivateLocalPlayerExposedVFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetPlayerExposedVFX
	 */
	struct ABP_Menu_Slasher18_C_SetPlayerExposedVFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SetHighlightedVFX
	 */
	struct ABP_Menu_Slasher18_C_SetHighlightedVFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerLightningVFX
	 */
	struct ABP_Menu_Slasher18_C_ActivatePlayerLightningVFX_Params
	{
	public:
		class UMaterialInstanceDynamic*                            LightningFX;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       intense;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePlayerGlitchVFX
	 */
	struct ABP_Menu_Slasher18_C_ActivatePlayerGlitchVFX_Params
	{
	public:
		class UMaterialInstanceDynamic*                            GlitchFX;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Face;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Madness;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       killer;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling PP
	 */
	struct ABP_Menu_Slasher18_C_Start_Travelling_PP_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Travelling Dissolve
	 */
	struct ABP_Menu_Slasher18_C_Start_Travelling_Dissolve_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling Dissolve
	 */
	struct ABP_Menu_Slasher18_C_Stop_Travelling_Dissolve_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Pounce VFX
	 */
	struct ABP_Menu_Slasher18_C_Start_Pounce_VFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Pounce VFX
	 */
	struct ABP_Menu_Slasher18_C_Stop_Pounce_VFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Start Saliva VFX
	 */
	struct ABP_Menu_Slasher18_C_Start_Saliva_VFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Saliva VFX
	 */
	struct ABP_Menu_Slasher18_C_Stop_Saliva_VFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Stop Travelling PP
	 */
	struct ABP_Menu_Slasher18_C_Stop_Travelling_PP_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivatePounceStateVFX
	 */
	struct ABP_Menu_Slasher18_C_ActivatePounceStateVFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Destroy Blood Orb
	 */
	struct ABP_Menu_Slasher18_C_Destroy_Blood_Orb_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Oni Weapons To Normal
	 */
	struct ABP_Menu_Slasher18_C_Switch_Oni_Weapons_To_Normal_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.DisableDemonMode
	 */
	struct ABP_Menu_Slasher18_C_DisableDemonMode_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReturnToDemonMode
	 */
	struct ABP_Menu_Slasher18_C_ReturnToDemonMode_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana_TPV
	 */
	struct ABP_Menu_Slasher18_C_Hide_Oni_Katana_TPV_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowGunBullet
	 */
	struct ABP_Menu_Slasher18_C_ShowGunBullet_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideGunBullet
	 */
	struct ABP_Menu_Slasher18_C_HideGunBullet_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SpawnFakeBullet
	 */
	struct ABP_Menu_Slasher18_C_SpawnFakeBullet_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateSacrificeCamBlood
	 */
	struct ABP_Menu_Slasher18_C_ActivateSacrificeCamBlood_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StartDeathBedDissolve
	 */
	struct ABP_Menu_Slasher18_C_StartDeathBedDissolve_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.DeactivateKnockoutVFX
	 */
	struct ABP_Menu_Slasher18_C_DeactivateKnockoutVFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateKnockoutVFX
	 */
	struct ABP_Menu_Slasher18_C_ActivateKnockoutVFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.SpawnFullScreenBlood
	 */
	struct ABP_Menu_Slasher18_C_SpawnFullScreenBlood_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StartDeathBedRelocateVignette
	 */
	struct ABP_Menu_Slasher18_C_StartDeathBedRelocateVignette_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateAttemptEscapeVFX
	 */
	struct ABP_Menu_Slasher18_C_ActivateAttemptEscapeVFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowSyringe
	 */
	struct ABP_Menu_Slasher18_C_ShowSyringe_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideSyringe
	 */
	struct ABP_Menu_Slasher18_C_HideSyringe_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.AnimateLiquidSyringe
	 */
	struct ABP_Menu_Slasher18_C_AnimateLiquidSyringe_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ActivateVignetteOnWallCollision
	 */
	struct ABP_Menu_Slasher18_C_ActivateVignetteOnWallCollision_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideSyringeOnStun
	 */
	struct ABP_Menu_Slasher18_C_HideSyringeOnStun_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_SpawnWipeVFX
	 */
	struct ABP_Menu_Slasher18_C_K22_SpawnWipeVFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightDormantMain
	 */
	struct ABP_Menu_Slasher18_C_K22_HighlightDormantMain_Params
	{
	public:
		bool                                                       IsDormantMain_;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightDormant
	 */
	struct ABP_Menu_Slasher18_C_K22_HighlightDormant_Params
	{
	public:
		bool                                                       IsDormant_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightMissJump
	 */
	struct ABP_Menu_Slasher18_C_K22_HighlightMissJump_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_DormantAttachedSlasher
	 */
	struct ABP_Menu_Slasher18_C_K22_DormantAttachedSlasher_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_JumpTrail_Activate
	 */
	struct ABP_Menu_Slasher18_C_K22_JumpTrail_Activate_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_JumpTrail_Deactivate
	 */
	struct ABP_Menu_Slasher18_C_K22_JumpTrail_Deactivate_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_ReleaseBrother
	 */
	struct ABP_Menu_Slasher18_C_K22_ReleaseBrother_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_MembraneRecovery
	 */
	struct ABP_Menu_Slasher18_C_K22_MembraneRecovery_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_MembraneDelete
	 */
	struct ABP_Menu_Slasher18_C_K22_MembraneDelete_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BabyBloodDissolve
	 */
	struct ABP_Menu_Slasher18_C_K22_BabyBloodDissolve_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BabyRespawn
	 */
	struct ABP_Menu_Slasher18_C_K22_BabyRespawn_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_Jump_Active
	 */
	struct ABP_Menu_Slasher18_C_K22_Jump_Active_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_Jump_Inactive
	 */
	struct ABP_Menu_Slasher18_C_K22_Jump_Inactive_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.On Execution
	 */
	struct ABP_Menu_Slasher18_C_On_Execution_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_SetTrap
	 */
	struct ABP_Menu_Slasher18_C_K05_SetTrap_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_TrapImpact
	 */
	struct ABP_Menu_Slasher18_C_K05_TrapImpact_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_TrapImpactOff
	 */
	struct ABP_Menu_Slasher18_C_K05_TrapImpactOff_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K05_BloodDrops
	 */
	struct ABP_Menu_Slasher18_C_K05_BloodDrops_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K07_TreatmentStart
	 */
	struct ABP_Menu_Slasher18_C_K07_TreatmentStart_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_InvisibleOn
	 */
	struct ABP_Menu_Slasher18_C_K04_InvisibleOn_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_InvisibleOff
	 */
	struct ABP_Menu_Slasher18_C_K04_InvisibleOff_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_TelekinesisOn
	 */
	struct ABP_Menu_Slasher18_C_K04_TelekinesisOn_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K04_TelekinesisOff
	 */
	struct ABP_Menu_Slasher18_C_K04_TelekinesisOff_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_WrongLanding
	 */
	struct ABP_Menu_Slasher18_C_K22_WrongLanding_Params
	{
	public:
		bool                                                       Wrong_Landing;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_AttachedToSurvivor_VFX
	 */
	struct ABP_Menu_Slasher18_C_K22_AttachedToSurvivor_VFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_DetachedFromSurvivor_VFX
	 */
	struct ABP_Menu_Slasher18_C_K22_DetachedFromSurvivor_VFX_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_WrongLandingVignette
	 */
	struct ABP_Menu_Slasher18_C_K22_WrongLandingVignette_Params
	{
	public:
		bool                                                       WrongLanding;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_GetToxinVignette
	 */
	struct ABP_Menu_Slasher18_C_K12_GetToxinVignette_Params
	{
	public:
		EBombType                                                  Bomb_Type;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_GetAntidoteVignette
	 */
	struct ABP_Menu_Slasher18_C_K12_GetAntidoteVignette_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_AntidoteEnd
	 */
	struct ABP_Menu_Slasher18_C_K12_Killer_AntidoteEnd_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_AntidoteBegin
	 */
	struct ABP_Menu_Slasher18_C_K12_Killer_AntidoteBegin_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_BombSmokeColor
	 */
	struct ABP_Menu_Slasher18_C_K12_Killer_BombSmokeColor_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_RemoveVignette
	 */
	struct ABP_Menu_Slasher18_C_K12_Killer_RemoveVignette_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K12_Killer_PlaceVignette
	 */
	struct ABP_Menu_Slasher18_C_K12_Killer_PlaceVignette_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_QuickDissolveBrother
	 */
	struct ABP_Menu_Slasher18_C_K22_QuickDissolveBrother_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Killer_LungeAttack_Start
	 */
	struct ABP_Menu_Slasher18_C_Killer_LungeAttack_Start_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Killer_LungeAttack_End
	 */
	struct ABP_Menu_Slasher18_C_Killer_LungeAttack_End_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Camper_AntidoteBoostVignette_Start
	 */
	struct ABP_Menu_Slasher18_C_Camper_AntidoteBoostVignette_Start_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Camper_AntidoteBoostVignette_End
	 */
	struct ABP_Menu_Slasher18_C_Camper_AntidoteBoostVignette_End_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_BrotherDissolveLocker
	 */
	struct ABP_Menu_Slasher18_C_K22_BrotherDissolveLocker_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_HighlightMissJump_Stop
	 */
	struct ABP_Menu_Slasher18_C_K22_HighlightMissJump_Stop_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_CamperHitByKnife
	 */
	struct ABP_Menu_Slasher18_C_K23_CamperHitByKnife_Params
	{
	public:
		bool                                                       IsLocallyObserved;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      lacerationPercent;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isDangerous;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K22_IsAttachedLocker
	 */
	struct ABP_Menu_Slasher18_C_K22_IsAttachedLocker_Params
	{
	public:
		bool                                                       IsAttachedLocker;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowKnifeLT
	 */
	struct ABP_Menu_Slasher18_C_K23_ShowKnifeLT_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowKnifeRT
	 */
	struct ABP_Menu_Slasher18_C_K23_ShowKnifeRT_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_ShowBat
	 */
	struct ABP_Menu_Slasher18_C_K23_ShowBat_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideBat
	 */
	struct ABP_Menu_Slasher18_C_K23_HideBat_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideKnifeRT
	 */
	struct ABP_Menu_Slasher18_C_K23_HideKnifeRT_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.K23_HideKnifeLT
	 */
	struct ABP_Menu_Slasher18_C_K23_HideKnifeLT_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.AddBloodDrippingGKMoriMale
	 */
	struct ABP_Menu_Slasher18_C_AddBloodDrippingGKMoriMale_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Survivor_BoonRadius_Enter
	 */
	struct ABP_Menu_Slasher18_C_Survivor_BoonRadius_Enter_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Survivor_BoonRadius_Exit
	 */
	struct ABP_Menu_Slasher18_C_Survivor_BoonRadius_Exit_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Boon_Unbound
	 */
	struct ABP_Menu_Slasher18_C_Boon_Unbound_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReceiveBeginPlay
	 */
	struct ABP_Menu_Slasher18_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo To Demon Mode
	 */
	struct ABP_Menu_Slasher18_C_Switch_Kanobo_To_Demon_Mode_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Switch Kanobo to Normal Mode
	 */
	struct ABP_Menu_Slasher18_C_Switch_Kanobo_to_Normal_Mode_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Show Oni Katana
	 */
	struct ABP_Menu_Slasher18_C_Show_Oni_Katana_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.Hide Oni Katana
	 */
	struct ABP_Menu_Slasher18_C_Hide_Oni_Katana_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.On Customisation Updated
	 */
	struct ABP_Menu_Slasher18_C_On_Customisation_Updated_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ShowDemonCosmetic
	 */
	struct ABP_Menu_Slasher18_C_ShowDemonCosmetic_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.HideDemonCosmetic
	 */
	struct ABP_Menu_Slasher18_C_HideDemonCosmetic_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ReturnOniToNormal
	 */
	struct ABP_Menu_Slasher18_C_ReturnOniToNormal_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.StopTransformation
	 */
	struct ABP_Menu_Slasher18_C_StopTransformation_Params
	{	};

	/**
	 * Function BP_Menu_Slasher18.BP_Menu_Slasher18_C.ExecuteUbergraph_BP_Menu_Slasher18
	 */
	struct ABP_Menu_Slasher18_C_ExecuteUbergraph_BP_Menu_Slasher18_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
