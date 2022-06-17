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
	 * ScriptStruct QueryService.ActorPairQueryHeightRange
	 * Size -> 0x0008
	 */
	struct FActorPairQueryHeightRange
	{
	public:
		float                                                      _lower;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      _upper;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct QueryService.DistanceTrackerCase
	 * Size -> 0x0028
	 */
	struct FDistanceTrackerCase
	{
	public:
		unsigned char                                              UnknownData_U3KM[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _distanceToTrackSquared;                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FActorPairQueryHeightRange                          _heightRange;                                            // 0x001C(0x0008) NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       _inRange;                                                // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UU9S[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct QueryService.ActorPairQuery
	 * Size -> 0x0068
	 */
	struct FActorPairQuery
	{
	public:
		unsigned char                                              UnknownData_BMJA[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint32_t, struct FDistanceTrackerCase>                _distanceTrackerCases;                                   // 0x0010(0x0050) NativeAccessSpecifierPrivate
		uint32_t                                                   _caseIndex;                                              // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _usePlanarDistance;                                      // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _isHeightRangeLimited;                                   // 0x0065(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CPLY[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct QueryService.ActorsInRangeBool
	 * Size -> 0x0040
	 */
	struct FActorsInRangeBool
	{
	public:
		class UActorPairQueryEvaluatorComponent*                   _actorPairQueryComponent;                                // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              _sourceActor;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              _otherActor;                                             // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _range;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       _inRange;                                                // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8VUB[0x23];                                  // 0x001D(0x0023) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
