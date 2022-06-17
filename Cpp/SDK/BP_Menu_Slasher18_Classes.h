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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Menu_Slasher18.BP_Menu_Slasher18_C
	 * Size -> 0x00C8 (FullSize[0x0780] - InheritedSize[0x06B8])
	 */
	class ABP_Menu_Slasher18_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_18_C*                                  BP_Audio_KLR_19;                                         // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              rings;                                                   // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDemonModeMenuComponent*                             DemonModeMenu;                                           // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SKWS01_REF;                                              // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TML_DemonModeCusto_Color_4A028AF64D8C75B37ACB968AFFF999A6; // 0x06E0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_DemonModeCusto_Demon_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6; // 0x06F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_DemonModeCusto_Normal_Custo_Dissolve_4A028AF64D8C75B37ACB968AFFF999A6; // 0x06F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_DemonModeCusto__Direction_4A028AF64D8C75B37ACB968AFFF999A6; // 0x06F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3YDU[0x7];                                   // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_DemonModeCusto;                                      // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_KatanaDissolve_Dissolve_E350E1F74AF3386DE5C9E7A92E1CFCA4; // 0x0708(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_KatanaDissolve__Direction_E350E1F74AF3386DE5C9E7A92E1CFCA4; // 0x070C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZT8P[0x3];                                   // 0x070D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_KatanaDissolve;                                      // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsKatanaVisible;                                         // 0x0718(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6M3A[0x7];                                   // 0x0719(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USkeletalMeshComponent*>                      NormalModeCustoParts;                                    // 0x0720(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UParticleSystemComponent*>                    DemonModeVFX;                                            // 0x0730(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USkeletalMeshComponent*>                      DemonModeCustoParts;                                     // 0x0740(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FLinearColor>                                SKOniEmissiveDefault;                                    // 0x0750(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsInDemonMode;                                           // 0x0760(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GD9I[0x7];                                   // 0x0761(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                SM_OniEmissiveDefault;                                   // 0x0768(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      MaxSwordDissolveValue;                                   // 0x0778(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinDissolvevalue;                                        // 0x077C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SM_SetOniEmissiveParameter(const struct FLinearColor& Emissive);
		void SK_SetOniEmissiveParameter(const struct FLinearColor& Emissive);
		void ShowDemonModeCusto(bool IsInDemonMode, bool IsInNormalMode);
		void SaveOniEmissiveParameter();
		void GetDemonModeCusto();
		void TML_KatanaDissolve__FinishedFunc();
		void TML_KatanaDissolve__UpdateFunc();
		void TML_DemonModeCusto__FinishedFunc();
		void TML_DemonModeCusto__UpdateFunc();
		void TML_DemonModeCusto__Switch_Normal__EventFunc();
		void TML_DemonModeCusto__Switch_Demon__EventFunc();
		void ActivateEndGameVignette(bool IsActive);
		void ActivatePlayerExposedVFX();
		void ActivateLocalPlayerExposedVFX();
		void SetPlayerExposedVFX();
		void SetHighlightedVFX();
		void ActivatePlayerLightningVFX(class UMaterialInstanceDynamic* LightningFX, bool intense);
		void ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic* GlitchFX, bool Face, bool Madness, bool killer);
		void Start_Travelling_PP();
		void Start_Travelling_Dissolve();
		void Stop_Travelling_Dissolve();
		void Start_Pounce_VFX();
		void Stop_Pounce_VFX();
		void Start_Saliva_VFX();
		void Stop_Saliva_VFX();
		void Stop_Travelling_PP();
		void ActivatePounceStateVFX();
		void Destroy_Blood_Orb();
		void Switch_Oni_Weapons_To_Normal();
		void DisableDemonMode();
		void ReturnToDemonMode();
		void Hide_Oni_Katana_TPV();
		void ShowGunBullet();
		void HideGunBullet();
		void SpawnFakeBullet();
		void ActivateSacrificeCamBlood();
		void StartDeathBedDissolve();
		void DeactivateKnockoutVFX();
		void ActivateKnockoutVFX();
		void SpawnFullScreenBlood();
		void StartDeathBedRelocateVignette();
		void ActivateAttemptEscapeVFX();
		void ShowSyringe();
		void HideSyringe();
		void AnimateLiquidSyringe();
		void ActivateVignetteOnWallCollision();
		void HideSyringeOnStun();
		void K22_SpawnWipeVFX();
		void K22_HighlightDormantMain(bool IsDormantMain_);
		void K22_HighlightDormant(bool IsDormant_);
		void K22_HighlightMissJump();
		void K22_DormantAttachedSlasher();
		void K22_JumpTrail_Activate();
		void K22_JumpTrail_Deactivate();
		void K22_ReleaseBrother();
		void K22_MembraneRecovery();
		void K22_MembraneDelete();
		void K22_BabyBloodDissolve();
		void K22_BabyRespawn();
		void K22_Jump_Active();
		void K22_Jump_Inactive();
		void On_Execution();
		void K05_SetTrap();
		void K05_TrapImpact();
		void K05_TrapImpactOff();
		void K05_BloodDrops();
		void K07_TreatmentStart();
		void K04_InvisibleOn();
		void K04_InvisibleOff();
		void K04_TelekinesisOn();
		void K04_TelekinesisOff();
		void K22_WrongLanding(bool Wrong_Landing);
		void K22_AttachedToSurvivor_VFX();
		void K22_DetachedFromSurvivor_VFX();
		void K22_WrongLandingVignette(bool WrongLanding);
		void K12_GetToxinVignette(EBombType Bomb_Type);
		void K12_GetAntidoteVignette();
		void K12_Killer_AntidoteEnd();
		void K12_Killer_AntidoteBegin();
		void K12_Killer_BombSmokeColor();
		void K12_Killer_RemoveVignette();
		void K12_Killer_PlaceVignette();
		void K22_QuickDissolveBrother();
		void Killer_LungeAttack_Start();
		void Killer_LungeAttack_End();
		void Camper_AntidoteBoostVignette_Start();
		void Camper_AntidoteBoostVignette_End();
		void K22_BrotherDissolveLocker();
		void K22_HighlightMissJump_Stop();
		void K23_CamperHitByKnife(bool IsLocallyObserved, float lacerationPercent, bool isDangerous);
		void K22_IsAttachedLocker(bool IsAttachedLocker);
		void K23_ShowKnifeLT();
		void K23_ShowKnifeRT();
		void K23_ShowBat();
		void K23_HideBat();
		void K23_HideKnifeRT();
		void K23_HideKnifeLT();
		void AddBloodDrippingGKMoriMale();
		void Survivor_BoonRadius_Enter();
		void Survivor_BoonRadius_Exit();
		void Boon_Unbound();
		void ReceiveBeginPlay();
		void Switch_Kanobo_To_Demon_Mode();
		void Switch_Kanobo_to_Normal_Mode();
		void Show_Oni_Katana();
		void Hide_Oni_Katana();
		void On_Customisation_Updated();
		void ShowDemonCosmetic();
		void HideDemonCosmetic();
		void ReturnOniToNormal();
		void StopTransformation();
		void ExecuteUbergraph_BP_Menu_Slasher18(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
