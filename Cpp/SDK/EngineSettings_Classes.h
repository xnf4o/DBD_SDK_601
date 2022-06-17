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
	 * Class EngineSettings.ConsoleSettings
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UConsoleSettings : public UObject
	{
	public:
		int32_t                                                    MaxScrollbackSize;                                       // 0x0030(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4UOJ[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAutoCompleteCommand>                        ManualAutoCompleteList;                                  // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<class FString>                                      AutoCompleteMapPaths;                                    // 0x0048(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		float                                                      BackgroundOpacityPercentage;                             // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOrderTopToBottom;                                       // 0x005C(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayHelpInAutoComplete;                              // 0x005D(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVC1[0x2];                                   // 0x005E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              InputColor;                                              // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              HistoryColor;                                            // 0x0064(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              AutoCompleteCommandColor;                                // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              AutoCompleteCVarColor;                                   // 0x006C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              AutoCompleteFadedColor;                                  // 0x0070(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JW7L[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.GameMapsSettings
	 * Size -> 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])
	 */
	class UGameMapsSettings : public UObject
	{
	public:
		class FString                                              LocalMapOptions;                                         // 0x0030(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TransitionMap;                                           // 0x0040(0x0020) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSplitscreen;                                         // 0x0060(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETwoPlayerSplitScreenType                                  TwoPlayerSplitscreenLayout;                              // 0x0061(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EThreePlayerSplitScreenType                                ThreePlayerSplitscreenLayout;                            // 0x0062(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFourPlayerSplitScreenType                                 FourPlayerSplitscreenLayout;                             // 0x0063(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOffsetPlayerGamepadIds;                                 // 0x0064(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K74Z[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      GameInstanceClass;                                       // 0x0068(0x0020) Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     GameDefaultMap;                                          // 0x0088(0x0020) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     ServerDefaultMap;                                        // 0x00A8(0x0020) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftClassPath                                      GlobalDefaultGameMode;                                   // 0x00C8(0x0020) Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftClassPath                                      GlobalDefaultServerGameMode;                             // 0x00E8(0x0020) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGameModeName>                               GameModeMapPrefixes;                                     // 0x0108(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate
		TArray<struct FGameModeName>                               GameModeClassAliases;                                    // 0x0118(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPrivate

	public:
		void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);
		bool GetSkipAssigningGamepadToPlayer1();
		class UGameMapsSettings* STATIC_GetGameMapsSettings();
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.GameNetworkManagerSettings
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UGameNetworkManagerSettings : public UObject
	{
	public:
		int32_t                                                    MinDynamicBandwidth;                                     // 0x0030(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDynamicBandwidth;                                     // 0x0034(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalNetBandwidth;                                       // 0x0038(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BadPingThreshold;                                        // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsStandbyCheckingEnabled : 1;                           // 0x0040(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAAZ[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StandbyRxCheatTime;                                      // 0x0044(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StandbyTxCheatTime;                                      // 0x0048(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentMissingForRxStandby;                              // 0x004C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentMissingForTxStandby;                              // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentForBadPing;                                       // 0x0054(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JoinInProgressStandbyWaitTime;                           // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C16X[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.GameSessionSettings
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UGameSessionSettings : public UObject
	{
	public:
		int32_t                                                    MaxSpectators;                                           // 0x0030(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPlayers;                                              // 0x0034(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRequiresPushToTalk : 1;                                 // 0x0038(0x0001) BIT_FIELD Edit, Config, GlobalConfig, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EU8J[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.GeneralEngineSettings
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGeneralEngineSettings : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.GeneralProjectChunkingSettings
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	class UGeneralProjectChunkingSettings : public UObject
	{
	public:
		int32_t                                                    NumberOfPaksInInitialChunk;                              // 0x0030(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfPaksInAllChunks;                                 // 0x0034(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LeftoverPakId;                                           // 0x0038(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ZNA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPathPak>                                    PakAssignmentPaths;                                      // 0x0040(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic
		TArray<struct FPakDefinition>                              PakDefinitions;                                          // 0x0050(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic
		int32_t                                                    AtlantaNumberOfPaksInInitialChunk;                       // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AtlantaAndroidNumberOfPaksInAllChunks;                   // 0x0064(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AtlantaIOSNumberOfPaksInAllChunks;                       // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AtlantaLeftoverPakId;                                    // 0x006C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPathPak>                                    AtlantaPakAssignmentPaths;                               // 0x0070(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic
		TArray<struct FPathPak>                                    AtlantaAndroidPakAssignmentPaths;                        // 0x0080(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic
		TArray<struct FPathPak>                                    AtlantaIOSPakAssignmentPaths;                            // 0x0090(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKFM[0x50];                                  // 0x00A0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.GeneralProjectSettings
	 * Size -> 0x00E8 (FullSize[0x0118] - InheritedSize[0x0030])
	 */
	class UGeneralProjectSettings : public UObject
	{
	public:
		class FString                                              CompanyName;                                             // 0x0030(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CompanyDistinguishedName;                                // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CopyrightNotice;                                         // 0x0050(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0060(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Homepage;                                                // 0x0070(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LicensingTerms;                                          // 0x0080(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PrivacyPolicy;                                           // 0x0090(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ProjectID;                                               // 0x00A0(0x0010) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProjectName;                                             // 0x00B0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProjectVersion;                                          // 0x00C0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SupportContact;                                          // 0x00D0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ProjectDisplayedTitle;                                   // 0x00E0(0x0018) Edit, Config, NativeAccessSpecifierPublic
		class FText                                                ProjectDebugTitleInfo;                                   // 0x00F8(0x0018) Edit, Config, NativeAccessSpecifierPublic
		bool                                                       bShouldWindowPreserveAspectRatio;                        // 0x0110(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBorderlessWindow;                                    // 0x0111(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartInVR;                                              // 0x0112(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowWindowResize;                                      // 0x0113(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowClose;                                             // 0x0114(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowMaximize;                                          // 0x0115(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowMinimize;                                          // 0x0116(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QDE[0x1];                                   // 0x0117(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EngineSettings.HudSettings
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UHudSettings : public UObject
	{
	public:
		unsigned char                                              bShowHUD : 1;                                            // 0x0030(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWOD[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        DebugDisplay;                                            // 0x0038(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
