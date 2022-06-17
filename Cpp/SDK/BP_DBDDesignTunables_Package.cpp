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
	 * 		Name   -> PredefindFunction UBP_DBDDesignTunables_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_DBDDesignTunables_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_DBDDesignTunables.BP_DBDDesignTunables_C");
		return ptr;
	}

}


