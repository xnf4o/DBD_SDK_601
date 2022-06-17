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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct Aset_Slasher_BaseAttack.Aset_Slasher_BaseAttack
	 * Size -> 0x0078
	 */
	struct FAset_Slasher_BaseAttack
	{
	public:
		struct FAnimSequenceSelector                               Attack_In_2_F1088CF94CB5CD5805E3C5A5297C24E8;            // 0x0000(0x0018) Edit, BlueprintVisible
		struct FAnimSequenceSelector                               Attack_Swing_4_C44C1EBF4AF6D526D301BF8E66D9768A;         // 0x0018(0x0018) Edit, BlueprintVisible
		struct FAnimSequenceSelector                               Attack_Miss_6_B0913CA54BD2768CC1EB77A8D84376B1;          // 0x0030(0x0018) Edit, BlueprintVisible
		struct FAnimSequenceSelector                               Attack_Hit_8_8D9337BA4F10337CBF0521BE85A5DE67;           // 0x0048(0x0018) Edit, BlueprintVisible
		struct FAnimSequenceSelector                               Attack_BounceOnWall_10_6CE8D7714C443E321DA9EFA40A13CB1F; // 0x0060(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
