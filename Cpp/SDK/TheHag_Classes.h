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
	 * Class TheHag.HagAnimInstance
	 * Size -> 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
	 */
	class UHagAnimInstance : public UKillerAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TheHag.HagScoreComponent
	 * Size -> 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
	 */
	class UHagScoreComponent : public UActorComponent
	{
	public:
		struct FDBDTunableRowHandle                                _trapAttackDuration;                                     // 0x00B8(0x0028) Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5U7O[0x80];                                  // 0x00E0(0x0080) MISSED OFFSET (PADDING)

	public:
		void Authority_OnActorEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		static UClass* StaticClass();
	};

	/**
	 * Class TheHag.PhantomTrapBurnable
	 * Size -> 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
	 */
	class UPhantomTrapBurnable : public ULightBurnable
	{
	public:
		float                                                      _traceZOffset;                                           // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9WKD[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
