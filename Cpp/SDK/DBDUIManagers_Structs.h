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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DBDUIManagers.EDPIScaleCurveRatio
	 */
	enum class EDPIScaleCurveRatio : uint8_t
	{
		Default       = 0,
		SmallerEqual4 = 1,
		Mobile        = 2,
		MAX           = 3
	};

	/**
	 * Enum DBDUIManagers.EScaleType
	 */
	enum class EScaleType : uint8_t
	{
		None       = 0,
		Menu       = 1,
		Hud        = 2,
		SkillCheck = 3,
		MAX        = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DBDUIManagers.DPIScaleCurveForRatio
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FDPIScaleCurveForRatio : public FDBDTableRowBase
	{
	public:
		EDPIScaleCurveRatio                                        Ratio;                                                   // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ERLD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DPIScaleCurve[0x30];                                     // 0x0009(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
