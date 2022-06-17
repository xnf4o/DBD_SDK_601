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
	 * 		Name   -> PredefindFunction UBHVRAnalytics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBHVRAnalytics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BHVRAnalytics.BHVRAnalytics");
		return ptr;
	}

}


