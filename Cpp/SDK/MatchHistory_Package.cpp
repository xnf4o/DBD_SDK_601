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
	 * 		Name   -> PredefindFunction UMatchHistorySubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchHistorySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MatchHistory.MatchHistorySubsystem");
		return ptr;
	}

}


