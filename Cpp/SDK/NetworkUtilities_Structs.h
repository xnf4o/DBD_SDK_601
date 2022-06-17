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
	 * Enum NetworkUtilities.ETimerState
	 */
	enum class ETimerState : uint8_t
	{
		Cleared = 0,
		Started = 1,
		Paused  = 2,
		MAX     = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NetworkUtilities.Float_NetQuantize8
	 * Size -> 0x0008
	 */
	struct FFloat_NetQuantize8
	{
	public:
		float                                                      _value;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GYXS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetworkUtilities.ReplicationTimerData
	 * Size -> 0x0014
	 */
	struct FReplicationTimerData
	{
	public:
		float                                                      Timestamp;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloat_NetQuantize8                                 RemainingTimePercent;                                    // 0x0008(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETimerState                                                State;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2X4[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetworkUtilities.YawAndPitchRotator_NetQuantize16
	 * Size -> 0x000C
	 */
	struct FYawAndPitchRotator_NetQuantize16
	{
	public:
		struct FRotator                                            _value;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct NetworkUtilities.AssetNetIdRow
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAssetNetIdRow : public FTableRowBase
	{
	public:
		int32_t                                                    NetId;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5I1E[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetworkUtilities.ObjectFastArrayEntry
	 * Size -> 0x000C (FullSize[0x0018] - InheritedSize[0x000C])
	 */
	struct FObjectFastArrayEntry : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_LE5X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             Object;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NetworkUtilities.ObjectFastArray
	 * Size -> 0x0040 (FullSize[0x0148] - InheritedSize[0x0108])
	 */
	struct FObjectFastArray : public FFastArraySerializer
	{
	public:
		unsigned char                                              UnknownData_YGMB[0x30];                                  // 0x0108(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FObjectFastArrayEntry>                       Objects;                                                 // 0x0138(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct NetworkUtilities.SpeedBasedNetSyncedValue
	 * Size -> 0x0038
	 */
	struct FSpeedBasedNetSyncedValue
	{
	public:
		unsigned char                                              UnknownData_KO19[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _replicatedValue;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F80M[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _replicatedSpeed;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BMFP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _replicatedLastUpdateTimestamp;                          // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4PCJ[0xC];                                   // 0x002C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct NetworkUtilities.YawAndPitchRotator_NetQuantize32
	 * Size -> 0x000C
	 */
	struct FYawAndPitchRotator_NetQuantize32
	{
	public:
		struct FRotator                                            _value;                                                  // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
