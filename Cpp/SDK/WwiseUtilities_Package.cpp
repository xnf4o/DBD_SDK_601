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
	 * 		Name   -> PredefindFunction UWwiseUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWwiseUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class WwiseUtilities.WwiseUtilities");
		return ptr;
	}

}


