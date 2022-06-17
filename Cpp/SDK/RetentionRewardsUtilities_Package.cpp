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
	 * 		Name   -> PredefindFunction URetentionRewardsSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetentionRewardsSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RetentionRewardsUtilities.RetentionRewardsSubsystem");
		return ptr;
	}

}


