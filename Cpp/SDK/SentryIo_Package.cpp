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
	 * 		Name   -> PredefindFunction USentryIoBaseSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryIoBaseSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SentryIo.SentryIoBaseSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USentryIoSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryIoSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SentryIo.SentryIoSubsystem");
		return ptr;
	}

}


