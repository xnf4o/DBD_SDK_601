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
	 * ScriptStruct ReversibleActionSystem.ActionPredictionKey
	 * Size -> 0x0004
	 */
	struct FActionPredictionKey
	{
	public:
		int32_t                                                    _keyValue;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ReversibleActionSystem.PendingInstantAction
	 * Size -> 0x0020
	 */
	struct FPendingInstantAction
	{
	public:
		class UBaseReversibleInstantActionHandler*                 Handler;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0FH[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerHandle;                                             // 0x0018(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReversibleActionSystem.PendingInstantActionList
	 * Size -> 0x0010
	 */
	struct FPendingInstantActionList
	{
	public:
		TArray<struct FPendingInstantAction>                       Actions;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReversibleActionSystem.InstantActionList
	 * Size -> 0x0010
	 */
	struct FInstantActionList
	{
	public:
		TArray<class UBaseReversibleInstantActionHandler*>         Actions;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ReversibleActionSystem.ExecuteInstantActionParams
	 * Size -> 0x0008
	 */
	struct FExecuteInstantActionParams
	{
	public:
		struct FActionPredictionKey                                PredictionKey;                                           // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PredictionDelay;                                         // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
