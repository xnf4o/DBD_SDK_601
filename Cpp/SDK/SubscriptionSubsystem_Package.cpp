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
	 * 		Name   -> PredefindFunction USubscriptionSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubscriptionSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SubscriptionSubsystem.SubscriptionSubsystem");
		return ptr;
	}

}


