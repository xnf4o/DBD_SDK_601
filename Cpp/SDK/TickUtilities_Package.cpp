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
	 * 		Name   -> PredefindFunction URoundRobinTicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URoundRobinTicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TickUtilities.RoundRobinTicker");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTimeBudgeter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeBudgeter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TickUtilities.TimeBudgeter");
		return ptr;
	}

}


