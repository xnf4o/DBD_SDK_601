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
	 * BlueprintGeneratedClass BP_Menu_Slasher27.BP_Menu_Slasher27_C
	 * Size -> 0x0030 (FullSize[0x06E8] - InheritedSize[0x06B8])
	 */
	class ABP_Menu_Slasher27_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Audio_KLR_27_C*                                  BP_Audio_KLR_28;                                         // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_k27_IdleInterrupt_01_C*                          Actor_PostProcessInterupt_01;                            // 0x06C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_k27_MenuIdleInterrupt_02_C*                      Actor_PostProcessInterupt_02;                            // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IdleInterrupt_01_IsPlaying;                              // 0x06D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IdleInterrupt_02_IsPlaying;                              // 0x06D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JJQZ[0x6];                                   // 0x06DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Well_C*                                          WellActor;                                               // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnNotifyEnd_2D489A3641E154EF5C2CBFA84C773EFE(const class FName& NotifyName);
		void OnNotifyBegin_2D489A3641E154EF5C2CBFA84C773EFE(const class FName& NotifyName);
		void OnInterrupted_2D489A3641E154EF5C2CBFA84C773EFE(const class FName& NotifyName);
		void OnBlendOut_2D489A3641E154EF5C2CBFA84C773EFE(const class FName& NotifyName);
		void OnCompleted_2D489A3641E154EF5C2CBFA84C773EFE(const class FName& NotifyName);
		void PlayWeaponInterupt();
		void Play_K27_PostProcess_Interupt_02();
		void Play_K27_PostProcess_Interrupt_01();
		void Destroy_K27_PostProcess_IdleInterrupt_02();
		void Destroy_K27_PostProcess_IdleInterrupt_01();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void RemoveAssetsBeforeDestroy();
		void DisableCloth();
		void EnableCloth();
		void BeginSmokeIn();
		void ExecuteUbergraph_BP_Menu_Slasher27(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
