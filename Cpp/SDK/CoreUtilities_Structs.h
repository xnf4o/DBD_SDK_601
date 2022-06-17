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
	 * Enum CoreUtilities.RealCaseGapEnum
	 */
	enum class ERealCaseGapEnum : uint8_t
	{
		RealCaseGapEnum__None                           = 0,
		RealCaseGapEnum__SavefileDeserializationFailure = 1,
		RealCaseGapEnum__EarnPlayerXpParamError         = 2,
		RealCaseGapEnum__RealCaseGapEnum_MAX            = 3
	};

	/**
	 * Enum CoreUtilities.OutOfOrderEnum
	 */
	enum class EOutOfOrderEnum : uint8_t
	{
		OutOfOrderEnum__Value1             = 0,
		OutOfOrderEnum__Value2             = 1,
		OutOfOrderEnum__Value3             = 2,
		OutOfOrderEnum__OutOfOrderEnum_MAX = 3
	};

	/**
	 * Enum CoreUtilities.GapEnum
	 */
	enum class EGapEnum : uint8_t
	{
		GapEnum__Value1      = 0,
		GapEnum__Value2      = 1,
		GapEnum__Value3      = 2,
		GapEnum__GapEnum_MAX = 3
	};

	/**
	 * Enum CoreUtilities.SimpleEnum
	 */
	enum class ESimpleEnum : uint8_t
	{
		SimpleEnum__Value1         = 0,
		SimpleEnum__Value2         = 1,
		SimpleEnum__Value3         = 2,
		SimpleEnum__SimpleEnum_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct CoreUtilities.DelegateHandleWrapper
	 * Size -> 0x0008
	 */
	struct FDelegateHandleWrapper
	{
	public:
		unsigned char                                              UnknownData_70AQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
