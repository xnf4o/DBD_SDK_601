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
	 * BlueprintGeneratedClass BP_Menu_Slasher10.BP_Menu_Slasher10_C
	 * Size -> 0x0010 (FullSize[0x06C8] - InheritedSize[0x06B8])
	 */
	class ABP_Menu_Slasher10_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_10_C*                                  BP_Audio_KLR_11;                                         // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Menu_Slasher10(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
