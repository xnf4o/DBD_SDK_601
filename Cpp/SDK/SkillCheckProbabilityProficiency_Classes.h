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
	 * BlueprintGeneratedClass SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class USkillCheckProbabilityProficiency_C : public UInteractionProficiency
	{
	public:
		bool GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);
		EStatusEffectType GetType(float value);
		float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
