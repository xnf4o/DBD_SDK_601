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
	 * BlueprintGeneratedClass BP_Menu_Slasher28.BP_Menu_Slasher28_C
	 * Size -> 0x0028 (FullSize[0x06E0] - InheritedSize[0x06B8])
	 */
	class ABP_Menu_Slasher28_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_28_C*                                  BP_Audio_KLR_29;                                         // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              MoriArmes;                                               // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HorseHead;                                               // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              GrabArmes;                                               // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void FX_K28_NightBegins();
		void FX_K28_NightEnds();
		void FX_K28_ExitingLocker();
		void FX_K28_ShowKiller();
		void FX_K28_HideKiller();
		void RemoveAssetsBeforeDestroy();
		void ExecuteUbergraph_BP_Menu_Slasher28(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
