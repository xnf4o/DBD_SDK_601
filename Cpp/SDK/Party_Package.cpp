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
	 * 		Name   -> PredefindFunction UChatroom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatroom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.Chatroom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialParty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialParty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialParty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPartyMember.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyMember::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.PartyMember");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialToolkit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialToolkit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialToolkit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialChatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialChatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialChatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialChatChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialChatChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialChatChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialChatRoom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialChatRoom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialChatRoom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialDebugTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialDebugTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialDebugTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialGroupChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialGroupChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialGroupChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialPartyChatRoom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialPartyChatRoom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialPartyChatRoom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialPrivateMessageChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialPrivateMessageChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialPrivateMessageChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialReadOnlyChatChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialReadOnlyChatChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialReadOnlyChatChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USocialUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialUser");
		return ptr;
	}

}


