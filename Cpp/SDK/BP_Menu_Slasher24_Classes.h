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
	 * BlueprintGeneratedClass BP_Menu_Slasher24.BP_Menu_Slasher24_C
	 * Size -> 0x0020 (FullSize[0x06D8] - InheritedSize[0x06B8])
	 */
	class ABP_Menu_Slasher24_C : public ABP_Menu_BaseSlasher_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UK24_KillerAudioMenuReaction_C*                      K24_KillerAudioMenuReaction;                             // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              _tentacle;                                               // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_Audio_KLR_24_C*                                  BP_Audio_KLR_25;                                         // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnNotifyEnd_699133144A8A4CBB65233EA538E5F3E6(const class FName& NotifyName);
		void OnNotifyBegin_699133144A8A4CBB65233EA538E5F3E6(const class FName& NotifyName);
		void OnInterrupted_699133144A8A4CBB65233EA538E5F3E6(const class FName& NotifyName);
		void OnBlendOut_699133144A8A4CBB65233EA538E5F3E6(const class FName& NotifyName);
		void OnCompleted_699133144A8A4CBB65233EA538E5F3E6(const class FName& NotifyName);
		void ReceiveBeginPlay();
		void ShowTentacle();
		void HideTentacle();
		void ExecuteUbergraph_BP_Menu_Slasher24(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
