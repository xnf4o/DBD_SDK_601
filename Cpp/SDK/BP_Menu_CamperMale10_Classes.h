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
	 * BlueprintGeneratedClass BP_Menu_CamperMale10.BP_Menu_CamperMale10_C
	 * Size -> 0x0010 (FullSize[0x06A1] - InheritedSize[0x0691])
	 */
	class ABP_Menu_CamperMale10_C : public ABP_Menu_Base_Camper_C
	{
	public:
		unsigned char                                              UnknownData_2IK6[0x7];                                   // 0x0691(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0698(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       ShouldPlaySecondVoiceline;                               // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void OnIsReadyChanged(bool IsReady);
		void ExecuteUbergraph_BP_Menu_CamperMale10(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
