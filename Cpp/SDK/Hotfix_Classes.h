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
	 * Class Hotfix.OnlineHotfixManager
	 * Size -> 0x0200 (FullSize[0x0230] - InheritedSize[0x0030])
	 */
	class UOnlineHotfixManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_A82H[0x1C0];                                 // 0x0030(0x01C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OSSName;                                                 // 0x01F0(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HotfixManagerClassName;                                  // 0x0200(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugPrefix;                                             // 0x0210(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     AssetsHotfixedFromIniFiles;                              // 0x0220(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		void StartHotfixProcess();
		static UClass* StaticClass();
	};

	/**
	 * Class Hotfix.UpdateManager
	 * Size -> 0x00E8 (FullSize[0x0118] - InheritedSize[0x0030])
	 */
	class UUpdateManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_LG07[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HotfixCheckCompleteDelay;                                // 0x0090(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UpdateCheckCompleteDelay;                                // 0x0094(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HotfixAvailabilityCheckCompleteDelay;                    // 0x0098(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UpdateCheckAvailabilityCompleteDelay;                    // 0x009C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L9BP[0x4];                                   // 0x00A0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AppSuspendedUpdateCheckTimeSeconds;                      // 0x00A4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TFSU[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bPlatformEnvironmentDetected;                            // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInitialUpdateFinished;                                  // 0x00B1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCheckHotfixAvailabilityOnly;                            // 0x00B2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EUpdateState                                               CurrentUpdateState;                                      // 0x00B3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    WorstNumFilesPendingLoadViewed;                          // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DVJ5[0x4];                                   // 0x00B8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EHotfixResult                                              LastHotfixResult;                                        // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZNR3[0x23];                                  // 0x00BD(0x0023) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           LastUpdateCheck[0x2];                                    // 0x00E0(0x0010) ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EUpdateCompletionStatus                                    LastCompletionResult[0x2];                               // 0x00F0(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1XX2[0x16];                                  // 0x00F2(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEnum*                                               UpdateStateEnum;                                         // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEnum*                                               UpdateCompletionEnum;                                    // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
