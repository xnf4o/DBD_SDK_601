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
	 * BlueprintGeneratedClass BP_Menu_Slasher19.BP_Menu_Slasher19_C
	 * Size -> 0x0018 (FullSize[0x06D0] - InheritedSize[0x06B8])
	 */
	class ABP_Menu_Slasher19_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_19_C*                                  BP_Audio_KLR_20;                                         // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              HarpoonMesh;                                             // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateHarpoonOnRifle(class USkeletalMeshComponent* Rifle_Mesh);
		void ReceiveBeginPlay();
		void OnMeshSwitchBP(ECustomizationCategory Category, class USkeletalMeshComponent* Mesh);
		void ExecuteUbergraph_BP_Menu_Slasher19(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
