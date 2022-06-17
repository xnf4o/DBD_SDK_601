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
	 * 		Name   -> PredefindFunction UDBDTimeUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDTimeUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TimeUtilities.DBDTimeUtilities");
		return ptr;
	}

}


