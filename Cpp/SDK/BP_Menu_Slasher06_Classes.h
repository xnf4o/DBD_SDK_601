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
	 * BlueprintGeneratedClass BP_Menu_Slasher06.BP_Menu_Slasher06_C
	 * Size -> 0x0010 (FullSize[0x06C8] - InheritedSize[0x06B8])
	 */
	class ABP_Menu_Slasher06_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		class UBP_Audio_KLR_06_C*                                  BP_Audio_KLR_06;                                         // 0x06B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDBDPlayerPositionOffsetComponent*                   DBDPlayerPositionOffset;                                 // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
