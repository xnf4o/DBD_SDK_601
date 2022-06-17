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
	 * 		Name   -> PredefindFunction URemoteSessionMediaOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteSessionMediaOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteSession.RemoteSessionMediaOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemoteSessionMediaCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteSessionMediaCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteSession.RemoteSessionMediaCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URemoteSessionSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoteSessionSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RemoteSession.RemoteSessionSettings");
		return ptr;
	}

}


