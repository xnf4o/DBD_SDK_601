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
	 * Class Qos.QosBeaconClient
	 * Size -> 0x0038 (FullSize[0x0300] - InheritedSize[0x02C8])
	 */
	class AQosBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_8RQ9[0x38];                                  // 0x02C8(0x0038) MISSED OFFSET (PADDING)

	public:
		void ServerQosRequest(const class FString& InSessionId);
		void ClientQosResponse(EQosResponseType response);
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosBeaconHost
	 * Size -> 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
	 */
	class AQosBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		unsigned char                                              UnknownData_E9Z3[0x10];                                  // 0x0258(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosEvaluator
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UQosEvaluator : public UObject
	{
	public:
		unsigned char                                              UnknownData_6IGZ[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInProgress;                                             // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCancelOperation;                                        // 0x0051(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UV4W[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDatacenterQosInstance>                      Datacenters;                                             // 0x0058(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S0SD[0x20];                                  // 0x0068(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Qos.QosRegionManager
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	class UQosRegionManager : public UObject
	{
	public:
		int32_t                                                    NumTestsPerRegion;                                       // 0x0030(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      PingTimeout;                                             // 0x0034(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FQosRegionInfo>                              RegionDefinitions;                                       // 0x0038(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		TArray<struct FQosDatacenterInfo>                          DatacenterDefinitions;                                   // 0x0048(0x0010) ZeroConstructor, Config, NativeAccessSpecifierPrivate
		struct FDateTime                                           LastCheckTimestamp;                                      // 0x0058(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UQosEvaluator*                                       Evaluator;                                               // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EQosCompletionResult                                       QosEvalResult;                                           // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IXDD[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRegionQosInstance>                          RegionOptions;                                           // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              ForceRegionId;                                           // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRegionForcedViaCommandline;                             // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AW2U[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SelectedRegionId;                                        // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8SC5[0x20];                                  // 0x00A8(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
