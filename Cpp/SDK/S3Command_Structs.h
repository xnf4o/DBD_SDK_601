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
	 * ScriptStruct S3Command.AccessKey
	 * Size -> 0x0020
	 */
	struct FAccessKey
	{
	public:
		class FString                                              KeyId;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct S3Command.EmblemTunableItem
	 * Size -> 0x0018
	 */
	struct FEmblemTunableItem
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     value;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct S3Command.EmblemThreshold
	 * Size -> 0x0010
	 */
	struct FEmblemThreshold
	{
	public:
		TArray<int32_t>                                            Thresholds;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct S3Command.EmblemTunableData
	 * Size -> 0x0060
	 */
	struct FEmblemTunableData
	{
	public:
		TArray<struct FEmblemTunableItem>                          EmblemValues;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, struct FEmblemThreshold>               EmblemThresholds;                                        // 0x0010(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct S3Command.RankThresholdsData
	 * Size -> 0x0028
	 */
	struct FRankThresholdsData
	{
	public:
		TArray<int32_t>                                            PipsRequired;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ResetStartingPips;                                       // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       ResetStartingPips_IsSet;                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic, CPF_SkipSerialization
		unsigned char                                              UnknownData_57FM[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct S3Command.RankGroupData
	 * Size -> 0x0018
	 */
	struct FRankGroupData
	{
	public:
		TArray<double>                                             EmblemThreshold;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    RankThreshold;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_65ZF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct S3Command.RankGroups
	 * Size -> 0x0020
	 */
	struct FRankGroups
	{
	public:
		TArray<struct FRankGroupData>                              KillerRankGroup;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRankGroupData>                              SurvivorRankGroup;                                       // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct S3Command.RankResetDateData
	 * Size -> 0x0010
	 */
	struct FRankResetDateData
	{
	public:
		int32_t                                                    StartYear;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartMonth;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResetDay;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResetHour;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct S3Command.RankGlobalData
	 * Size -> 0x0020
	 */
	struct FRankGlobalData
	{
	public:
		int32_t                                                    NoPipLossRankThreshold;                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NoRankLossThreshold;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseTrialPips;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxPips;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRankResetDateData>                          RankResetDates;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct S3Command.RankDefinitionData
	 * Size -> 0x0068
	 */
	struct FRankDefinitionData
	{
	public:
		struct FRankThresholdsData                                 RankThreshold;                                           // 0x0000(0x0028) NativeAccessSpecifierPublic
		struct FRankGroups                                         RankGroupDefinition;                                     // 0x0028(0x0020) NativeAccessSpecifierPublic
		struct FRankGlobalData                                     GlobalData;                                              // 0x0048(0x0020) NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
