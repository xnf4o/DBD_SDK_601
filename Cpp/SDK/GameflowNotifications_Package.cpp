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
	 * 		Name   -> PredefindFunction UGameflowEventsNotifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameflowEventsNotifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameflowNotifications.GameflowEventsNotifier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerflowEventsNotifier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerflowEventsNotifier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameflowNotifications.PlayerflowEventsNotifier");
		return ptr;
	}

}


