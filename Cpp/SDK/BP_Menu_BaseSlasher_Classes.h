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
	 * BlueprintGeneratedClass BP_Menu_BaseSlasher.BP_Menu_BaseSlasher_C
	 * Size -> 0x0068 (FullSize[0x06B8] - InheritedSize[0x0650])
	 */
	class ABP_Menu_BaseSlasher_C : public ADBDMenuPlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0650(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_KillerRightFootGroundDetector_C*                 RightFootGroundDetector;                                 // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_KillerLeftFootGroundDetector_C*                  LeftFootGroundDetector;                                  // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCustomizedAudioComponent*                           CustomizedAudio;                                         // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        Ak_Audio_Menu_Base_Slasher;                              // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TML_DissolveSlasher_Dissolve_6A8353EF46DC9749463CE0935534B1A4; // 0x0678(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TML_DissolveSlasher__Direction_6A8353EF46DC9749463CE0935534B1A4; // 0x067C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZQ85[0x3];                                   // 0x067D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TML_DissolveSlasher;                                     // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInMenu;                                                // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D0T4[0x7];                                   // 0x0689(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              RequiredSoundBanks[0x10];                                // 0x0689(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class UObject*>                                     AssignedSoundBanks;                                      // 0x06A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      SlasherHeight;                                           // 0x06B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      SlasherHeightBase;                                       // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool IsInMenuPlayer();
		void UpdateHeight();
		void TML_DissolveSlasher__FinishedFunc();
		void TML_DissolveSlasher__UpdateFunc();
		void BndEvt__BP_Menu_BaseSlasher_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature(const class FName& outfitAudioStateCollection);
		void ReceiveBeginPlay();
		void BeginDestroySequence_Internal();
		void BeginSmokeIn();
		void RestartInSequence_Internal();
		void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& switchState);
		void RemoveAssetsBeforeDestroy();
		void ExecuteUbergraph_BP_Menu_BaseSlasher(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
