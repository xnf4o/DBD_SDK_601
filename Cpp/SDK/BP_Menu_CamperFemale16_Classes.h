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
	 * BlueprintGeneratedClass BP_Menu_CamperFemale16.BP_Menu_CamperFemale16_C
	 * Size -> 0x0027 (FullSize[0x06B8] - InheritedSize[0x0691])
	 */
	class ABP_Menu_CamperFemale16_C : public ABP_Menu_Base_Camper_C
	{
	public:
		unsigned char                                              UnknownData_0FK9[0x7];                                   // 0x0691(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0698(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              S31Radio;                                                // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAB_S31_Radio_C*                                     As_AB_S31_Radio;                                         // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAB_Menu_S31_C*                                      As_AB_Menu_S31;                                          // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Menu_CamperFemale16(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
