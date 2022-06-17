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
	 * BlueprintGeneratedClass BP_Menu_Slasher25.BP_Menu_Slasher25_C
	 * Size -> 0x0030 (FullSize[0x06E8] - InheritedSize[0x06B8])
	 */
	class ABP_Menu_Slasher25_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              LamentConfMesh;                                          // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ChainsMesh;                                              // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_Audio_KLR_25_C*                                  BP_Audio_KLR_26;                                         // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      TM_LamentBoxVisibility_Dissolve_A56755B4431C0BE684B0688D2A09C847; // 0x06D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TM_LamentBoxVisibility__Direction_A56755B4431C0BE684B0688D2A09C847; // 0x06DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XUIW[0x3];                                   // 0x06DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TM_LamentBoxVisibility;                                  // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TM_LamentBoxVisibility__FinishedFunc();
		void TM_LamentBoxVisibility__UpdateFunc();
		void ReceiveBeginPlay();
		void MakeLamentBoxDisappear();
		void MakeLamentBoxAppear();
		void ExecuteUbergraph_BP_Menu_Slasher25(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
