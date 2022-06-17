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
	 * BlueprintGeneratedClass BP_Slasher_Character_28.BP_Slasher_Character_27_C
	 * Size -> 0x015C (FullSize[0x1AF9] - InheritedSize[0x199D])
	 */
	class ABP_Slasher_Character_27_C : public ABP_Slasher_Character_C
	{
	public:
		unsigned char                                              UnknownData_ZGQY[0x3];                                   // 0x199D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x19A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAkComponent*                                        Ak_Audio_Killer_NoOcclusion;                             // 0x19A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_AfterImageComponent_C*                           BP_AfterImageComponent;                                  // 0x19B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_Audio_KLR_27_C*                                  BP_Audio_KLR_28;                                         // 0x19B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USlashAttack_BP_C*                                   SlashAttack_BP_C;                                        // 0x19C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPounceAttack_BP_C*                                  PounceAttack_BP_C;                                       // 0x19C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TML_VignetteIntensityOnInteraction_InteractionVignetteVanish_19417BB8491889DE9FDC42BE330FFFDD; // 0x19D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_VignetteIntensityOnInteraction__Direction_19417BB8491889DE9FDC42BE330FFFDD; // 0x19D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SOB8[0x3];                                   // 0x19D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_VignetteIntensityOnInteraction;                      // 0x19D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_TeleportHideMesh_NewTrack_0_00E7BDF14A0844E3B8BCBDB228CC22D8; // 0x19E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_TeleportHideMesh__Direction_00E7BDF14A0844E3B8BCBDB228CC22D8; // 0x19E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FQGO[0x3];                                   // 0x19E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_TeleportHideMesh;                                    // 0x19E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_TeleportFeet_VaultOpacityDissolveLvl_2155BA49426F5ED7364FE88DDA5883B4; // 0x19F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_TeleportFeet__Direction_2155BA49426F5ED7364FE88DDA5883B4; // 0x19F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7255[0x3];                                   // 0x19F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_TeleportFeet;                                        // 0x19F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Unmanifest_PowerScaling_5390BF654162A90BA43CDCB423451EBF; // 0x1A00(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Unmanifest_Vignette_Intensity_5390BF654162A90BA43CDCB423451EBF; // 0x1A04(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_Unmanifest__Direction_5390BF654162A90BA43CDCB423451EBF; // 0x1A08(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B7JM[0x7];                                   // 0x1A09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_Unmanifest;                                          // 0x1A10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Manifest_PowerScaling_C8B2EF204D929F27887891B9BEA446ED; // 0x1A18(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Manifest_Vignette_Intensity_C8B2EF204D929F27887891B9BEA446ED; // 0x1A1C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_Manifest__Direction_C8B2EF204D929F27887891B9BEA446ED; // 0x1A20(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EXFQ[0x7];                                   // 0x1A21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_Manifest;                                            // 0x1A28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Opacity_Opacity_Hair_98033A1B44F8FE679812E7804399EB22; // 0x1A30(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TML_Opacity_Opacity_Body_98033A1B44F8FE679812E7804399EB22; // 0x1A34(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_Opacity__Direction_98033A1B44F8FE679812E7804399EB22; // 0x1A38(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B5RE[0x7];                                   // 0x1A39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_Opacity;                                             // 0x1A40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeToBlackTimeline_FadeToBlack_Use_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1A48(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeToBlackTimeline_Vignette_Intensity_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1A4C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeToBlackTimeline_Outline_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1A50(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeToBlackTimeline_FadeIntensity_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1A54(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         FadeToBlackTimeline__Direction_5BE29A02433314C96C4BBFA8BFBA26EA; // 0x1A58(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3WVY[0x7];                                   // 0x1A59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FadeToBlackTimeline;                                     // 0x1A60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PP_Vignette_Basic___FadeToBlack;                         // 0x1A68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      prevFadeToBlackBasicSize;                                // 0x1A70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsForwardFade;                                           // 0x1A74(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BE61[0x3];                                   // 0x1A75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            PP_Vignette_K27_Manifest;                                // 0x1A78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedBlendable                                  Manifest_WeightedBlendable;                              // 0x1A80(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<struct FWeightedBlendable>                          Manifest_WeightedBlendables;                             // 0x1A90(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UNiagaraComponent*>                           NS_FX_Manifest_Charge;                                   // 0x1AA0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       IsTeleporting_;                                          // 0x1AB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q9AI[0x7];                                   // 0x1AB1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraComponent*                                   NS_FX_Manifest_Charge_02;                                // 0x1AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FWeightedBlendable                                  FadeToBlack_WeightedBlendable;                           // 0x1AC0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<struct FWeightedBlendable>                          FadeToBlack_WeightedBlendables;                          // 0x1AD0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAB_Slasher_27_C*                                    AB_Slasher_28;                                           // 0x1AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Teleport_VeinsColor;                                     // 0x1AE8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsManifested_;                                           // 0x1AF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WantsVisible;                                            // 0x1AF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInTeleportInteraction;                                 // 0x1AF6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsVisible;                                               // 0x1AF7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFlickeringStopped;                                     // 0x1AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OtherWorldVignetteIntensity();
		void TryRestartFlickerAfterTeleportation();
		void SetCastShadow(bool NewCastShadow);
		bool CanUpdateFlicker();
		void FinishHideMesh();
		void StopFlicker();
		void RandomLocationAfterImage(struct FTransform* NewParam);
		void UserConstructionScript();
		void FadeToBlackTimeline__FinishedFunc();
		void FadeToBlackTimeline__UpdateFunc();
		void TML_Opacity__FinishedFunc();
		void TML_Opacity__UpdateFunc();
		void TML_Opacity__Event_Hide_VFX__EventFunc();
		void TML_Opacity__Event_Shadow__EventFunc();
		void TML_Manifest__FinishedFunc();
		void TML_Manifest__UpdateFunc();
		void TML_Unmanifest__FinishedFunc();
		void TML_Unmanifest__UpdateFunc();
		void TML_TeleportHideMesh__FinishedFunc();
		void TML_TeleportHideMesh__UpdateFunc();
		void TML_TeleportFeet__FinishedFunc();
		void TML_TeleportFeet__UpdateFunc();
		void TML_VignetteIntensityOnInteraction__FinishedFunc();
		void TML_VignetteIntensityOnInteraction__UpdateFunc();
		void FX_K27_CondemnedStatusFull(float currentStacks);
		void FX_K27_CondemnedStatusStop(float currentStacks);
		void FX_K27_CondemnedAddToken(float currentStacks);
		void FX_K27_Teleport_HideMesh();
		void FX_K27_Teleport_ShowMesh();
		void FX_K27_HoldingTape();
		void FX_K27_InsertTape();
		void FX_K27_SpawnMiniMoriVignette();
		void FX_K27_Camper_RetrieveTapeExit();
		void FX_K27_Camper_TapeInHand();
		void FX_K27_TapeInteractionFinished();
		void FX_K27_Camper_End_Tape_In_Hand();
		void FX_K27_Camper_StartRetrievingTape();
		void FX_K27_Camper_Tape_InsertTransfer();
		void FX_K27_Camper_Tape_StartInsert();
		void FX_K27_Camper_TapeInserted();
		void FX_K27_Camper_InsertTapeExit();
		void FX_K27_Camper_TapeRetrieved();
		void FX_K27_Camper_Tape_InsertEnd();
		void FX_FadeCondemnedStatus();
		void Cosmetic_OnTeleportSuccess();
		void Cosmetic_OnTeleportStart();
		void Cosmetic_OnTeleportFinished();
		void Cosmetic_OnTeleportCancelled();
		void SpawnAfterImage();
		void ReceiveBeginPlay();
		void Cosmetic_OnChargeManifestSuccess();
		void Cosmetic_OnChargeManifestStart();
		void Cosmetic_OnManifestStateChanged(bool isManifested, bool isImmediateManifest);
		void Cosmetic_OnKillerVisibilityChanged(bool IsVisible, bool isFlickering, bool isManifested, bool isInvisibleDueToOutOfVisibiltyRange, bool force);
		void Cosmetic_OnChargeManifestCancelled();
		void Cosmetic_OnChargeUnmanifestStart();
		void Cosmetic_OnChargeUnmanifestSuccess();
		void Cosmetic_OnChargeUnmanifestCancelled();
		void CosmeticOnUnmanifestChargeChanged(float Charge_Percent);
		void CosmeticOnManifestChargeChanged(float Charge_Percent);
		void ManifestCancelCharge();
		void UnmanifestCancelCharge();
		void ReceiveTick(float DeltaSeconds);
		void FX_K27_InteractionStart_Vignette();
		void Hide_Mesh();
		void Update_Visibility_On_Teleport_success();
		void Event_On_Manifested_Through_Interaction();
		void Unhide_Mesh();
		void OnLevelReadyToPlay();
		void CE_OnSoundbankLoaded();
		void ExecuteUbergraph_BP_Slasher_Character_28(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
