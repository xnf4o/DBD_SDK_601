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
	 * 		Name   -> PredefindFunction UOnlineMessagesContainerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineMessagesContainerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineMessagesUtilities.OnlineMessagesContainerComponent");
		return ptr;
	}

}


