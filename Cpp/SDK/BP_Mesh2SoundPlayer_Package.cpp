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
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Mesh2SoundPlayer.BP_Mesh2SoundPlayer_C.Cosmetic_OnSoundTriggered
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AudioEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Mesh2SoundPlayer_C::Cosmetic_OnSoundTriggered(class UAkAudioEvent* AudioEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mesh2SoundPlayer.BP_Mesh2SoundPlayer_C.Cosmetic_OnSoundTriggered");
		
		UBP_Mesh2SoundPlayer_C_Cosmetic_OnSoundTriggered_Params params {};
		params.AudioEvent = AudioEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Mesh2SoundPlayer.BP_Mesh2SoundPlayer_C.ExecuteUbergraph_BP_Mesh2SoundPlayer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Mesh2SoundPlayer_C::ExecuteUbergraph_BP_Mesh2SoundPlayer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mesh2SoundPlayer.BP_Mesh2SoundPlayer_C.ExecuteUbergraph_BP_Mesh2SoundPlayer");
		
		UBP_Mesh2SoundPlayer_C_ExecuteUbergraph_BP_Mesh2SoundPlayer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBP_Mesh2SoundPlayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Mesh2SoundPlayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mesh2SoundPlayer.BP_Mesh2SoundPlayer_C");
		return ptr;
	}

}


