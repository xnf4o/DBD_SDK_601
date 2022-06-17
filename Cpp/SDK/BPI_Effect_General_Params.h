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
	 * Function BPI_Effect_General.BPI_Effect_General_C.Boon_Unbound
	 */
	struct UBPI_Effect_General_C_Boon_Unbound_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Survivor_BoonRadius_Exit
	 */
	struct UBPI_Effect_General_C_Survivor_BoonRadius_Exit_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Survivor_BoonRadius_Enter
	 */
	struct UBPI_Effect_General_C_Survivor_BoonRadius_Enter_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ReturnOniToNormal
	 */
	struct UBPI_Effect_General_C_ReturnOniToNormal_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.AddBloodDrippingGKMoriMale
	 */
	struct UBPI_Effect_General_C_AddBloodDrippingGKMoriMale_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K23_HideKnifeLT
	 */
	struct UBPI_Effect_General_C_K23_HideKnifeLT_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K23_HideKnifeRT
	 */
	struct UBPI_Effect_General_C_K23_HideKnifeRT_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K23_HideBat
	 */
	struct UBPI_Effect_General_C_K23_HideBat_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K23_ShowBat
	 */
	struct UBPI_Effect_General_C_K23_ShowBat_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K23_ShowKnifeRT
	 */
	struct UBPI_Effect_General_C_K23_ShowKnifeRT_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K23_ShowKnifeLT
	 */
	struct UBPI_Effect_General_C_K23_ShowKnifeLT_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_IsAttachedLocker
	 */
	struct UBPI_Effect_General_C_K22_IsAttachedLocker_Params
	{
	public:
		bool                                                       IsAttachedLocker;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K23_CamperHitByKnife
	 */
	struct UBPI_Effect_General_C_K23_CamperHitByKnife_Params
	{
	public:
		bool                                                       IsLocallyObserved;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      lacerationPercent;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isDangerous;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightMissJump_Stop
	 */
	struct UBPI_Effect_General_C_K22_HighlightMissJump_Stop_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_BrotherDissolveLocker
	 */
	struct UBPI_Effect_General_C_K22_BrotherDissolveLocker_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Camper_AntidoteBoostVignette_End
	 */
	struct UBPI_Effect_General_C_Camper_AntidoteBoostVignette_End_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Camper_AntidoteBoostVignette_Start
	 */
	struct UBPI_Effect_General_C_Camper_AntidoteBoostVignette_Start_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Killer_LungeAttack_End
	 */
	struct UBPI_Effect_General_C_Killer_LungeAttack_End_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Killer_LungeAttack_Start
	 */
	struct UBPI_Effect_General_C_Killer_LungeAttack_Start_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_QuickDissolveBrother
	 */
	struct UBPI_Effect_General_C_K22_QuickDissolveBrother_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_PlaceVignette
	 */
	struct UBPI_Effect_General_C_K12_Killer_PlaceVignette_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_RemoveVignette
	 */
	struct UBPI_Effect_General_C_K12_Killer_RemoveVignette_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_BombSmokeColor
	 */
	struct UBPI_Effect_General_C_K12_Killer_BombSmokeColor_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_AntidoteBegin
	 */
	struct UBPI_Effect_General_C_K12_Killer_AntidoteBegin_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K12_Killer_AntidoteEnd
	 */
	struct UBPI_Effect_General_C_K12_Killer_AntidoteEnd_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K12_GetAntidoteVignette
	 */
	struct UBPI_Effect_General_C_K12_GetAntidoteVignette_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K12_GetToxinVignette
	 */
	struct UBPI_Effect_General_C_K12_GetToxinVignette_Params
	{
	public:
		EBombType                                                  Bomb_Type;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_WrongLandingVignette
	 */
	struct UBPI_Effect_General_C_K22_WrongLandingVignette_Params
	{
	public:
		bool                                                       WrongLanding;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_DetachedFromSurvivor_VFX
	 */
	struct UBPI_Effect_General_C_K22_DetachedFromSurvivor_VFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_AttachedToSurvivor_VFX
	 */
	struct UBPI_Effect_General_C_K22_AttachedToSurvivor_VFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_WrongLanding
	 */
	struct UBPI_Effect_General_C_K22_WrongLanding_Params
	{
	public:
		bool                                                       Wrong_Landing;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K04_TelekinesisOff
	 */
	struct UBPI_Effect_General_C_K04_TelekinesisOff_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K04_TelekinesisOn
	 */
	struct UBPI_Effect_General_C_K04_TelekinesisOn_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K04_InvisibleOff
	 */
	struct UBPI_Effect_General_C_K04_InvisibleOff_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K04_InvisibleOn
	 */
	struct UBPI_Effect_General_C_K04_InvisibleOn_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K07_TreatmentStart
	 */
	struct UBPI_Effect_General_C_K07_TreatmentStart_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K05_BloodDrops
	 */
	struct UBPI_Effect_General_C_K05_BloodDrops_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K05_TrapImpactOff
	 */
	struct UBPI_Effect_General_C_K05_TrapImpactOff_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K05_TrapImpact
	 */
	struct UBPI_Effect_General_C_K05_TrapImpact_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K05_SetTrap
	 */
	struct UBPI_Effect_General_C_K05_SetTrap_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.On Execution
	 */
	struct UBPI_Effect_General_C_On_Execution_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_Jump_Inactive
	 */
	struct UBPI_Effect_General_C_K22_Jump_Inactive_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_Jump_Active
	 */
	struct UBPI_Effect_General_C_K22_Jump_Active_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_BabyRespawn
	 */
	struct UBPI_Effect_General_C_K22_BabyRespawn_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_BabyBloodDissolve
	 */
	struct UBPI_Effect_General_C_K22_BabyBloodDissolve_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_MembraneDelete
	 */
	struct UBPI_Effect_General_C_K22_MembraneDelete_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_MembraneRecovery
	 */
	struct UBPI_Effect_General_C_K22_MembraneRecovery_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_ReleaseBrother
	 */
	struct UBPI_Effect_General_C_K22_ReleaseBrother_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_JumpTrail_Deactivate
	 */
	struct UBPI_Effect_General_C_K22_JumpTrail_Deactivate_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_JumpTrail_Activate
	 */
	struct UBPI_Effect_General_C_K22_JumpTrail_Activate_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_DormantAttachedSlasher
	 */
	struct UBPI_Effect_General_C_K22_DormantAttachedSlasher_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightMissJump
	 */
	struct UBPI_Effect_General_C_K22_HighlightMissJump_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightDormant
	 */
	struct UBPI_Effect_General_C_K22_HighlightDormant_Params
	{
	public:
		bool                                                       IsDormant_;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_HighlightDormantMain
	 */
	struct UBPI_Effect_General_C_K22_HighlightDormantMain_Params
	{
	public:
		bool                                                       IsDormantMain_;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.K22_SpawnWipeVFX
	 */
	struct UBPI_Effect_General_C_K22_SpawnWipeVFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.HideSyringeOnStun
	 */
	struct UBPI_Effect_General_C_HideSyringeOnStun_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ActivateVignetteOnWallCollision
	 */
	struct UBPI_Effect_General_C_ActivateVignetteOnWallCollision_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.AnimateLiquidSyringe
	 */
	struct UBPI_Effect_General_C_AnimateLiquidSyringe_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.HideSyringe
	 */
	struct UBPI_Effect_General_C_HideSyringe_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ShowSyringe
	 */
	struct UBPI_Effect_General_C_ShowSyringe_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ActivateAttemptEscapeVFX
	 */
	struct UBPI_Effect_General_C_ActivateAttemptEscapeVFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.StartDeathBedRelocateVignette
	 */
	struct UBPI_Effect_General_C_StartDeathBedRelocateVignette_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.SpawnFullScreenBlood
	 */
	struct UBPI_Effect_General_C_SpawnFullScreenBlood_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ActivateKnockoutVFX
	 */
	struct UBPI_Effect_General_C_ActivateKnockoutVFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.DeactivateKnockoutVFX
	 */
	struct UBPI_Effect_General_C_DeactivateKnockoutVFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.StartDeathBedDissolve
	 */
	struct UBPI_Effect_General_C_StartDeathBedDissolve_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ActivateSacrificeCamBlood
	 */
	struct UBPI_Effect_General_C_ActivateSacrificeCamBlood_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.SpawnFakeBullet
	 */
	struct UBPI_Effect_General_C_SpawnFakeBullet_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.HideGunBullet
	 */
	struct UBPI_Effect_General_C_HideGunBullet_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ShowGunBullet
	 */
	struct UBPI_Effect_General_C_ShowGunBullet_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Hide Oni Katana_TPV
	 */
	struct UBPI_Effect_General_C_Hide_Oni_Katana_TPV_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ReturnToDemonMode
	 */
	struct UBPI_Effect_General_C_ReturnToDemonMode_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.DisableDemonMode
	 */
	struct UBPI_Effect_General_C_DisableDemonMode_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.HideDemonCosmetic
	 */
	struct UBPI_Effect_General_C_HideDemonCosmetic_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ShowDemonCosmetic
	 */
	struct UBPI_Effect_General_C_ShowDemonCosmetic_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Switch Oni Weapons To Normal
	 */
	struct UBPI_Effect_General_C_Switch_Oni_Weapons_To_Normal_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Destroy Blood Orb
	 */
	struct UBPI_Effect_General_C_Destroy_Blood_Orb_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Show Oni Katana
	 */
	struct UBPI_Effect_General_C_Show_Oni_Katana_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Hide Oni Katana
	 */
	struct UBPI_Effect_General_C_Hide_Oni_Katana_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Switch Kanobo to Normal Mode
	 */
	struct UBPI_Effect_General_C_Switch_Kanobo_to_Normal_Mode_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Switch Kanobo To Demon Mode
	 */
	struct UBPI_Effect_General_C_Switch_Kanobo_To_Demon_Mode_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ActivatePounceStateVFX
	 */
	struct UBPI_Effect_General_C_ActivatePounceStateVFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Stop Travelling PP
	 */
	struct UBPI_Effect_General_C_Stop_Travelling_PP_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Stop Saliva VFX
	 */
	struct UBPI_Effect_General_C_Stop_Saliva_VFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Start Saliva VFX
	 */
	struct UBPI_Effect_General_C_Start_Saliva_VFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Stop Pounce VFX
	 */
	struct UBPI_Effect_General_C_Stop_Pounce_VFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Start Pounce VFX
	 */
	struct UBPI_Effect_General_C_Start_Pounce_VFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Stop Travelling Dissolve
	 */
	struct UBPI_Effect_General_C_Stop_Travelling_Dissolve_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Start Travelling Dissolve
	 */
	struct UBPI_Effect_General_C_Start_Travelling_Dissolve_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.Start Travelling PP
	 */
	struct UBPI_Effect_General_C_Start_Travelling_PP_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerGlitchVFX
	 */
	struct UBPI_Effect_General_C_ActivatePlayerGlitchVFX_Params
	{
	public:
		class UMaterialInstanceDynamic*                            GlitchFX;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Face;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Madness;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       killer;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerLightningVFX
	 */
	struct UBPI_Effect_General_C_ActivatePlayerLightningVFX_Params
	{
	public:
		class UMaterialInstanceDynamic*                            LightningFX;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       intense;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.SetHighlightedVFX
	 */
	struct UBPI_Effect_General_C_SetHighlightedVFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.SetPlayerExposedVFX
	 */
	struct UBPI_Effect_General_C_SetPlayerExposedVFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ActivateLocalPlayerExposedVFX
	 */
	struct UBPI_Effect_General_C_ActivateLocalPlayerExposedVFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerExposedVFX
	 */
	struct UBPI_Effect_General_C_ActivatePlayerExposedVFX_Params
	{	};

	/**
	 * Function BPI_Effect_General.BPI_Effect_General_C.ActivateEndGameVignette
	 */
	struct UBPI_Effect_General_C_ActivateEndGameVignette_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
