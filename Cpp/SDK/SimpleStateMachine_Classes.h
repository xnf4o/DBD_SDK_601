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
	 * Class SimpleStateMachine.SimpleStateMachineBaseState
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class USimpleStateMachineBaseState : public UObject
	{
	public:
		unsigned char                                              UnknownData_RNBH[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USimpleStateMachine*                                 _stateMachine;                                           // 0x0040(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleStateMachine.SimpleStateMachineBaseTransition
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class USimpleStateMachineBaseTransition : public UObject
	{
	public:
		unsigned char                                              UnknownData_GOF7[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USimpleStateMachine*                                 _stateMachine;                                           // 0x0048(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SimpleStateMachine.SimpleStateMachine
	 * Size -> 0x0320 (FullSize[0x03D8] - InheritedSize[0x00B8])
	 */
	class USimpleStateMachine : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_ISY1[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _defaultStateClass;                                      // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              _stateClasses[0x50];                                     // 0x00D8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              _transitionsClasses[0x50];                               // 0x0128(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_G42A[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USimpleStateMachineBaseState*                        _defaultState;                                           // 0x0180(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USimpleStateMachineBaseState*                        _currentState;                                           // 0x0188(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5YIZ[0x190];                                 // 0x0190(0x0190) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class USimpleStateMachineBaseState*>     _states;                                                 // 0x0320(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_62V7[0x60];                                  // 0x0370(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       _debugPrintState;                                        // 0x03D0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S0I3[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
