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
	 * BlueprintGeneratedClass BP_AfterImageComponent.BP_AfterImageComponent_C
	 * Size -> 0x0020 (FullSize[0x01A0] - InheritedSize[0x0180])
	 */
	class UBP_AfterImageComponent_C : public UOnryoAfterImageComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0180(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class ABP_Effect_K27_AfterImage_01_C*>              AfterImages;                                             // 0x0188(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		int32_t                                                    PassivePhaseWalkHuskCurrentIndex;                        // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmountOfHusksToSpawn;                                    // 0x019C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InOtherWorld(bool* InPhysicalWorld);
		void GetRandomLocationNearKillerMesh(struct FTransform* Transform);
		void SpawnAfterImage(const struct FTransform& huskTransform, float opacityValue, float speedValue);
		void ReceiveBeginPlay();
		void AfterImagesSpawningLoop();
		void OnLevelReadyToPlay();
		void ShouldShowAfterImageChanged(bool shouldBeVisible);
		void UpdateCustomization();
		void ExecuteUbergraph_BP_AfterImageComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
