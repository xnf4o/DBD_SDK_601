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
	 * Class ReversibleActionSystem.BaseReversibleInstantActionHandler
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBaseReversibleInstantActionHandler : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReversibleActionSystem.ReversibleActionSystemComponent
	 * Size -> 0x00F0 (FullSize[0x01A8] - InheritedSize[0x00B8])
	 */
	class UReversibleActionSystemComponent : public UActorComponent
	{
	public:
		TMap<struct FActionPredictionKey, struct FPendingInstantActionList> _pendingInstantActionHandlers;                           // 0x00B8(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<struct FActionPredictionKey, struct FInstantActionList> _predictedInstantActionHandlers;                         // 0x0108(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M79S[0x50];                                  // 0x0158(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
