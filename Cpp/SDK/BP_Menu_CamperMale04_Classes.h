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
	 * BlueprintGeneratedClass BP_Menu_CamperMale04.BP_Menu_CamperMale04_C
	 * Size -> 0x001F (FullSize[0x06B0] - InheritedSize[0x0691])
	 */
	class ABP_Menu_CamperMale04_C : public ABP_Menu_Base_Camper_C
	{
	public:
		unsigned char                                              UnknownData_7PVJ[0x7];                                   // 0x0691(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0698(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Cigarette_NewTrack_0_97E71C104E36EF0B3195F484D090F427;   // 0x06A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Cigarette__Direction_97E71C104E36EF0B3195F484D090F427;   // 0x06A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G2QL[0x3];                                   // 0x06A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Cigarette;                                               // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Cigarette__FinishedFunc();
		void Cigarette__UpdateFunc();
		void ReceiveBeginPlay();
		void BeginDestroySequence_Internal();
		void ExecuteUbergraph_BP_Menu_CamperMale04(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
