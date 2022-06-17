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
	 * Class UnitTestUtilities.TestInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTestInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UnitTestUtilities.TestActor
	 * Size -> 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
	 */
	class ATestActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UnitTestUtilities.TestActorComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UTestActorComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UnitTestUtilities.TestActorComponentImplementingTestInterface
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UTestActorComponentImplementingTestInterface : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_WW1U[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UnitTestUtilities.TestActorImplementingTestInterface
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class ATestActorImplementingTestInterface : public AActor
	{
	public:
		unsigned char                                              UnknownData_SENH[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UnitTestUtilities.TestMovableActor
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class ATestMovableActor : public AActor
	{
	public:
		class UBoxComponent*                                       BoxComponent;                                            // 0x0230(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
