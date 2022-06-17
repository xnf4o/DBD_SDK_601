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
	 * BlueprintGeneratedClass PounceAttackOpenSubstate_BP.PounceAttackOpenSubstate_BP_C
	 * Size -> 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
	 */
	class UPounceAttackOpenSubstate_BP_C : public UPounceAttackOpenSubstate
	{
	public:
		void IsLungeAttackAugmented(class ADBDPlayer* Slasher_Player, bool* IsLungeAttackAugmented);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
