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
	 * 		Name   -> PredefindFunction UUIBackendDataAccessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIBackendDataAccessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class UIBackendData.UIBackendDataAccessor");
		return ptr;
	}

}


