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
	 * BlueprintGeneratedClass PounceAttackOpenSubstateCosmetic_BP.PounceAttackOpenSubstateCosmetic_BP_C
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPounceAttackOpenSubstateCosmetic_BP_C : public UPounceAttackOpenSubstateCosmetic
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0030(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnLungeAttackEndCosmetic(class ADBDPlayer* SlasherPlayer);
		void OnLocallyObservedChangedCosmetic(class ADBDPlayer* SlasherPlayer);
		void OnLungeAttackStartCosmetic(class ADBDPlayer* SlasherPlayer);
		void ExecuteUbergraph_PounceAttackOpenSubstateCosmetic_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
