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
	 * 		Name   -> PredefindFunction UPlayerNameFacade.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerNameFacade::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PlayerNames.PlayerNameFacade");
		return ptr;
	}

}


