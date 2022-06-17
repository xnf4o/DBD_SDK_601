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
	 * Enum StatSystem.EModifierCompoundStrategy
	 */
	enum class EModifierCompoundStrategy : uint8_t
	{
		Add                              = 0,
		AddPlusOne                       = 1,
		Min                              = 2,
		Max                              = 3,
		Mult                             = 4,
		MultWithCompoundNegative         = 5,
		MultWithCompoundNegativeMinusOne = 6,
		MAX                              = 7
	};

	/**
	 * Enum StatSystem.EModifierOperationStrategy
	 */
	enum class EModifierOperationStrategy : uint8_t
	{
		Add  = 0,
		Subs = 1,
		Mult = 2,
		Div  = 3,
		MAX  = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct StatSystem.StatModifier
	 * Size -> 0x0030
	 */
	struct FStatModifier
	{
	public:
		EModifierOperationStrategy                                 OperationStrategy;                                       // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_66FA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ModifierTag;                                             // 0x0004(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModifierCompoundStrategy                                  CompoundStrategy;                                        // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FF69[0x1F];                                  // 0x0011(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StatSystem.BaseStat
	 * Size -> 0x0058
	 */
	struct FBaseStat
	{
	public:
		unsigned char                                              UnknownData_YD9C[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStatModifier>                               _statModifiers;                                          // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IYD4[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StatSystem.TunableStat
	 * Size -> 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
	 */
	struct FTunableStat : public FBaseStat
	{
	public:
		struct FDBDTunableRowHandle                                _baseValue;                                              // 0x0058(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct StatSystem.NonTunableStat
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	struct FNonTunableStat : public FBaseStat
	{
	public:
		float                                                      _baseValue;                                              // 0x0058(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LJAL[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct StatSystem.StatProperty
	 * Size -> 0x0030 (FullSize[0x0088] - InheritedSize[0x0058])
	 */
	struct FStatProperty : public FBaseStat
	{
	public:
		bool                                                       _useTunable;                                             // 0x0058(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KGCQ[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _nonTunableValue;                                        // 0x005C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDBDTunableRowHandle                                _tunableValue;                                           // 0x0060(0x0028) Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
