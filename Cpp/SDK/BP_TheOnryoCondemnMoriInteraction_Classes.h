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
	 * BlueprintGeneratedClass BP_TheOnryoCondemnMoriInteraction.BP_TheOnryoCondemnMoriInteraction_C
	 * Size -> 0x000C (FullSize[0x077C] - InheritedSize[0x0770])
	 */
	class UBP_TheOnryoCondemnMoriInteraction_C : public UCondemnMoriInteraction
	{
	public:
		class FName                                                CondemnMoriMontageID;                                    // 0x0770(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FAnimationMontageDescriptor GetExitMontage(class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
