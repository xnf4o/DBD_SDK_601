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
	 * 		Name   -> PredefindFunction UBlockListFacade.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlockListFacade::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SocialBlockList.BlockListFacade");
		return ptr;
	}

}


