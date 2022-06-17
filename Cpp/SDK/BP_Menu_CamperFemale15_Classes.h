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
	 * BlueprintGeneratedClass BP_Menu_CamperFemale15.BP_Menu_CamperFemale15_C
	 * Size -> 0x0027 (FullSize[0x06B8] - InheritedSize[0x0691])
	 */
	class ABP_Menu_CamperFemale15_C : public ABP_Menu_Base_Camper_C
	{
	public:
		unsigned char                                              UnknownData_7TG9[0x7];                                   // 0x0691(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0698(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              S28Book;                                                 // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAB_S28_Book_C*                                      AB_S28_Book;                                             // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAB_Menu_S28_C*                                      AB_Menu_S28;                                             // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GoToAddMoriVomitStain();
		void GoToAddVomitDecal();
		void StartEndGameDissolve();
		void CK_StartSacrificeDissolve();
		void AddBloodOnCamper();
		void ReceiveBeginPlay();
		void ShowProps();
		void HideProps();
		void IsPlayingMenuInterrupt(bool IsPlayingAnimation);
		void ExecuteUbergraph_BP_Menu_CamperFemale15(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
