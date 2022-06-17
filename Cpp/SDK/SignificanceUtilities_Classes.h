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
	 * Class SignificanceUtilities.SignificanceStrategy
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USignificanceStrategy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SignificanceUtilities.CharacterOptimizer
	 * Size -> 0x00B8 (FullSize[0x0170] - InheritedSize[0x00B8])
	 */
	class UCharacterOptimizer : public UActorComponent
	{
	public:
		struct FBHVRPerDetailModeFloat                             _distance;                                               // 0x00B8(0x00A0) Edit, NativeAccessSpecifierPrivate
		float                                                      _characterMovementTickRateWhenInsignificant;             // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _skeletalMeshTickRateWhenInsignificant;                  // 0x015C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      _dependentActorsToCheckSignficance;                      // 0x0160(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SignificanceUtilities.DistanceBasedTickDisabler
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class UDistanceBasedTickDisabler : public UActorComponent
	{
	public:
		bool                                                       _autoRegisterOwner;                                      // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _autoRegisterTimelines;                                  // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7Y06[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBHVRPerDetailModeFloat                             _tickDisableDistance;                                    // 0x00C0(0x00A0) Edit, NativeAccessSpecifierPrivate
		bool                                                       _insignificantWhenBehindTheCamera;                       // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KZST[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UActorComponent*>                             _components;                                             // 0x0168(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P1BX[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnregisterComponent(class UActorComponent* Component);
		void RegisterComponent(class UActorComponent* Component);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
