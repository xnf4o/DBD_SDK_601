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
	 * 		Name   -> PredefindFunction UGameSessionDS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameSessionDS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameSessionDS.GameSessionDS");
		return ptr;
	}

}


