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
	 * BlueprintGeneratedClass BP_Menu_Base_Camper.BP_Menu_Base_Camper_C
	 * Size -> 0x0041 (FullSize[0x0691] - InheritedSize[0x0650])
	 */
	class ABP_Menu_Base_Camper_C : public ADBDMenuPlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0650(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_SurvivorRightFootGroundDetector_C*               RightFootGroundDetector;                                 // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_SurvivorLeftFootGroundDetector_C*                LeftFootGroundDetector;                                  // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCharmSpawnerComponent*                              CharmSpawner;                                            // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCustomizedAudioComponent*                           CustomizedAudio;                                         // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkComponent*                                        Ak_Audio_Menu_Base_Camper;                               // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Dissolve_Dissolve_596272B14FBF23BFE861F687F86F9EB1;      // 0x0680(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Dissolve__Direction_596272B14FBF23BFE861F687F86F9EB1;    // 0x0684(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KO4I[0x3];                                   // 0x0685(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Dissolve;                                                // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Destroying;                                              // 0x0690(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsPlayingMenuInterrupt(bool IsPlayingAnimation);
		void Set_Height();
		class UCharmSpawnerComponent* GetCharmSpawnerComponent();
		void UserConstructionScript();
		void Dissolve__FinishedFunc();
		void Dissolve__UpdateFunc();
		void BndEvt__BP_Menu_Base_Camper_CustomizedAudio_K2Node_ComponentBoundEvent_1_OutfitCustomizedAudioChangedDelegate__DelegateSignature(const class FName& outfitAudioStateCollection);
		void ReceiveBeginPlay();
		void BeginDestroySequence_Internal();
		void BeginSmokeIn();
		void RestartInSequence_Internal();
		void BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& switchState);
		void ExecuteUbergraph_BP_Menu_Base_Camper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
