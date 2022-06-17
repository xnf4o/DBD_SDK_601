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
	 * Class DBDMetaGameplay.DBDEmblem_KillerChaser
	 * Size -> 0x00B8 (FullSize[0x01C0] - InheritedSize[0x0108])
	 */
	class UDBDEmblem_KillerChaser : public UDBDEmblem
	{
	public:
		unsigned char                                              UnknownData_WR01[0x40];                                  // 0x0108(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _chasePointsByDurationCurve;                             // 0x0148(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3AGX[0x18];                                  // 0x0150(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ACamperPlayer*, float>                          _hookedPlayersPenaltyDelay;                              // 0x0168(0x0050) Transient, NativeAccessSpecifierPrivate
		class UClass*                                              _rankTunablesClass;                                      // 0x01B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnChaseStart(class ADBDPlayer* chasedPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDMetaGameplay.DBDEmblem_KillerDevout
	 * Size -> 0x0038 (FullSize[0x0140] - InheritedSize[0x0108])
	 */
	class UDBDEmblem_KillerDevout : public UDBDEmblem
	{
	public:
		unsigned char                                              UnknownData_OPMM[0x20];                                  // 0x0108(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACamperPlayer*>                               _playersToHook;                                          // 0x0128(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IJJW[0x8];                                   // 0x0138(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDMetaGameplay.DBDEmblem_KillerGatekeeper
	 * Size -> 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
	 */
	class UDBDEmblem_KillerGatekeeper : public UDBDEmblem
	{
	public:
		unsigned char                                              UnknownData_0Y3O[0x30];                                  // 0x0108(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDMetaGameplay.DBDEmblem_KillerMalicious
	 * Size -> 0x0068 (FullSize[0x0170] - InheritedSize[0x0108])
	 */
	class UDBDEmblem_KillerMalicious : public UDBDEmblem
	{
	public:
		unsigned char                                              UnknownData_M2GW[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ACamperPlayer*, int32_t>                        _remainingSurvivorHookStates;                            // 0x0118(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GF5A[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnLevelReadyToPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDMetaGameplay.DBDEmblem_SurvivorBenevolent
	 * Size -> 0x0060 (FullSize[0x0168] - InheritedSize[0x0108])
	 */
	class UDBDEmblem_SurvivorBenevolent : public UDBDEmblem
	{
	public:
		unsigned char                                              UnknownData_RWUS[0x60];                                  // 0x0108(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDMetaGameplay.DBDEmblem_SurvivorEvader
	 * Size -> 0x0078 (FullSize[0x0180] - InheritedSize[0x0108])
	 */
	class UDBDEmblem_SurvivorEvader : public UDBDEmblem
	{
	public:
		unsigned char                                              UnknownData_HPL2[0x50];                                  // 0x0108(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _killerDistanceStealthPointCurve;                        // 0x0158(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _killerDistanceStealthPointCurveChasing;                 // 0x0160(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _chaseDurationPointCurve;                                // 0x0168(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCurveFloat*                                         _ZAxisDistanceScalingCurve;                              // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _rankTunablesClass;                                      // 0x0178(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnChaseStartEvent(class ADBDPlayer* chasedPlayer);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDMetaGameplay.DBDEmblem_SurvivorLightbringer
	 * Size -> 0x0088 (FullSize[0x0190] - InheritedSize[0x0108])
	 */
	class UDBDEmblem_SurvivorLightbringer : public UDBDEmblem
	{
	public:
		unsigned char                                              UnknownData_DPT7[0x88];                                  // 0x0108(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDMetaGameplay.DBDEmblem_SurvivorUnbroken
	 * Size -> 0x0030 (FullSize[0x0138] - InheritedSize[0x0108])
	 */
	class UDBDEmblem_SurvivorUnbroken : public UDBDEmblem
	{
	public:
		unsigned char                                              UnknownData_FN2G[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         _pointsForTimeAlive;                                     // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_984B[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              _rankTunablesClass;                                      // 0x0130(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnIntroCompleted();
		static UClass* StaticClass();
	};

	/**
	 * Class DBDMetaGameplay.DBDEmblem_KillerGatekeeperTest
	 * Size -> 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])
	 */
	class UDBDEmblem_KillerGatekeeperTest : public UDBDEmblem_KillerGatekeeper
	{
	public:
		class ADBDGameState*                                       _gameState;                                              // 0x0138(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
