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
	 * Class OnlineTransactions.BloodwebManagerMock
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UBloodwebManagerMock : public UObject
	{
	public:
		unsigned char                                              UnknownData_T23Z[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineTransactions.OnlineTransactionResponseBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOnlineTransactionResponseBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineTransactions.ForceRefreshBloodMarketTransactionResponse
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UForceRefreshBloodMarketTransactionResponse : public UOnlineTransactionResponseBase
	{
	public:
		unsigned char                                              UnknownData_GF68[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineTransactions.ForceRefreshBloodMarketTransaction
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UForceRefreshBloodMarketTransaction : public UObject
	{
	public:
		unsigned char                                              UnknownData_HQQ1[0x48];                                  // 0x0030(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineTransactions.OnlineTransaction
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UOnlineTransaction : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineTransactions.OnlineTransactionServiceComponent
	 * Size -> 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
	 */
	class UOnlineTransactionServiceComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_MTHI[0x68];                                  // 0x00B8(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineTransactions.WalletHandlerMock
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UWalletHandlerMock : public UObject
	{
	public:
		unsigned char                                              UnknownData_P71U[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
