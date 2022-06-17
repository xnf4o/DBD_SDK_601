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
	 * ScriptStruct DBDGameplay.AimDirection
	 * Size -> 0x0024
	 */
	struct FAimDirection
	{
	public:
		unsigned char                                              UnknownData_0XJV[0x24];                                  // 0x0000(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDGameplay.BlindTargetViewData
	 * Size -> 0x0040
	 */
	struct FBlindTargetViewData
	{
	public:
		unsigned char                                              UnknownData_L9RS[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDGameplay.LocalPlayerViewTargetTracker
	 * Size -> 0x0040
	 */
	struct FLocalPlayerViewTargetTracker
	{
	public:
		unsigned char                                              UnknownData_R96E[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADBDPlayerController*                                _playerController;                                       // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KQK8[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DBDGameplay.TestableStatModifier
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FTestableStatModifier : public FStatModifier
	{	};

	/**
	 * ScriptStruct DBDGameplay.TestableStat
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	struct FTestableStat : public FTunableStat
	{
	public:
		unsigned char                                              UnknownData_XWUQ[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
