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
	 * Class ThePig.Addon_ThePig_JigsawSketch
	 * Size -> 0x0050 (FullSize[0x0310] - InheritedSize[0x02C0])
	 */
	class UAddon_ThePig_JigsawSketch : public UItemAddon
	{
	public:
		TMap<class ACamperPlayer*, class AGenerator*>              _trackedGeneratorRepairs;                                // 0x02C0(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.DetectivesHunch
	 * Size -> 0x0268 (FullSize[0x0638] - InheritedSize[0x03D0])
	 */
	class UDetectivesHunch : public UPerk
	{
	public:
		unsigned char                                              _interactableClasses[0x50];                              // 0x03D0(0x0050) UNKNOWN PROPERTY: SetProperty
		float                                                      _revealRanges[0x3];                                      // 0x0420(0x000C) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      _revealDuration;                                         // 0x042C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class AActor*, struct FTimerHandle>                   _actorToTimerMap;                                        // 0x0430(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LT71[0x50];                                  // 0x0480(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FObjectFastArray                                    _revealedActors;                                         // 0x04D0(0x0148) Net, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T4O0[0x20];                                  // 0x0618(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttack
	 * Size -> 0x0010 (FullSize[0x0390] - InheritedSize[0x0380])
	 */
	class UPigAmbushAttack : public UPounceAttack
	{
	public:
		unsigned char                                              UnknownData_720T[0x10];                                  // 0x0380(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttackOpenSubstate
	 * Size -> 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
	 */
	class UPigAmbushAttackOpenSubstate : public UPounceAttackOpenSubstate
	{
	public:
		unsigned char                                              UnknownData_4JM2[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttackHittingSubstate
	 * Size -> 0x0000 (FullSize[0x01A0] - InheritedSize[0x01A0])
	 */
	class UPigAmbushAttackHittingSubstate : public UPounceAttackHittingSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttackSuccessSubstate
	 * Size -> 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
	 */
	class UPigAmbushAttackSuccessSubstate : public UPounceAttackSuccessSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttackMissSubstate
	 * Size -> 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
	 */
	class UPigAmbushAttackMissSubstate : public UPounceAttackMissSubstate
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ThePig.PigAmbushAttackObstructSubstate
	 * Size -> 0x0000 (FullSize[0x0128] - InheritedSize[0x0128])
	 */
	class UPigAmbushAttackObstructSubstate : public UPounceAttackObstructSubstate
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
