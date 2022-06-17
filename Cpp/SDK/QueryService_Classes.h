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
	 * Class QueryService.ActorPairQueryEvaluatorComponent
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UActorPairQueryEvaluatorComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_G727[0x58];                                  // 0x00B8(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class QueryService.ActorPairQueryEvaluatorSubscriberTest
	 * Size -> 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
	 */
	class AActorPairQueryEvaluatorSubscriberTest : public AActor
	{
	public:
		unsigned char                                              UnknownData_MLK0[0x28];                                  // 0x0230(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnRangeChanged(bool InRange);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
