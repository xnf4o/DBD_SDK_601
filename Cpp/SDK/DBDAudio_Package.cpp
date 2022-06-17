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
	 * 		Name   -> PredefindFunction UAmbienceBoxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAmbienceBoxComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAudio.AmbienceBoxComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimNotify_PostInteractionSoundEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PostInteractionSoundEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAudio.AnimNotify_PostInteractionSoundEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioCustomMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioCustomMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAudio.AudioCustomMeshComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041D2970
	 * 		Name   -> Function DBDAudio.AudioUtilities.PostAkAudioEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AudioEvent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioUtilities::STATIC_PostAkAudioEvent(class UAkAudioEvent* AudioEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAudio.AudioUtilities.PostAkAudioEvent");
		
		UAudioUtilities_PostAkAudioEvent_Params params {};
		params.AudioEvent = AudioEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041D2970
	 * 		Name   -> Function DBDAudio.AudioUtilities.DBD_PostUiEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioUtilities::STATIC_DBD_PostUiEvent(class UAkAudioEvent* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAudio.AudioUtilities.DBD_PostUiEvent");
		
		UAudioUtilities_DBD_PostUiEvent_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041D2860
	 * 		Name   -> Function DBDAudio.AudioUtilities.DBD_LoadPersistentBankByAssetPtr
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UObject* UAudioUtilities::STATIC_DBD_LoadPersistentBankByAssetPtr()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAudio.AudioUtilities.DBD_LoadPersistentBankByAssetPtr");
		
		UAudioUtilities_DBD_LoadPersistentBankByAssetPtr_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041D27E0
	 * 		Name   -> Function DBDAudio.AudioUtilities.DBD_LoadPersistentBankAsync
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioUtilities::STATIC_DBD_LoadPersistentBankAsync(class UAkAudioBank* Bank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAudio.AudioUtilities.DBD_LoadPersistentBankAsync");
		
		UAudioUtilities_DBD_LoadPersistentBankAsync_Params params {};
		params.Bank = Bank;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041D2760
	 * 		Name   -> Function DBDAudio.AudioUtilities.DBD_LoadPersistentBank
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAudioUtilities::STATIC_DBD_LoadPersistentBank(class UAkAudioBank* Bank)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAudio.AudioUtilities.DBD_LoadPersistentBank");
		
		UAudioUtilities_DBD_LoadPersistentBank_Params params {};
		params.Bank = Bank;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAudioUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAudio.AudioUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041D2B90
	 * 		Name   -> Function DBDAudio.InteractionAudioComponent.PostAkEvent
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInteractionAudioComponent::PostAkEvent(class UAkAudioEvent* AkEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDAudio.InteractionAudioComponent.PostAkEvent");
		
		UInteractionAudioComponent_PostAkEvent_Params params {};
		params.AkEvent = AkEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractionAudioComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionAudioComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAudio.InteractionAudioComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadAsyncBankData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadAsyncBankData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAudio.LoadAsyncBankData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USoundBankLoader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundBankLoader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDAudio.SoundBankLoader");
		return ptr;
	}

}


