/**
 * Name: DBD
 * Version: 601
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBloodwebManagerMock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodwebManagerMock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineTransactions.BloodwebManagerMock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnlineTransactionResponseBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineTransactionResponseBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineTransactions.OnlineTransactionResponseBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UForceRefreshBloodMarketTransactionResponse.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForceRefreshBloodMarketTransactionResponse::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineTransactions.ForceRefreshBloodMarketTransactionResponse");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UForceRefreshBloodMarketTransaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForceRefreshBloodMarketTransaction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineTransactions.ForceRefreshBloodMarketTransaction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnlineTransaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineTransaction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineTransactions.OnlineTransaction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOnlineTransactionServiceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineTransactionServiceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineTransactions.OnlineTransactionServiceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWalletHandlerMock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWalletHandlerMock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineTransactions.WalletHandlerMock");
		return ptr;
	}

}


