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
	 * 		Name   -> Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.LobbyKillerReactionSpecificSurvivorSFX
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ADBDMenuPlayer*>                      menuPlayers                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UK24_KillerAudioMenuReaction_C::LobbyKillerReactionSpecificSurvivorSFX(TArray<class ADBDMenuPlayer*> menuPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.LobbyKillerReactionSpecificSurvivorSFX");
		
		UK24_KillerAudioMenuReaction_C_LobbyKillerReactionSpecificSurvivorSFX_Params params {};
		params.menuPlayers = menuPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.ExecuteUbergraph_K24_KillerAudioMenuReaction
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UK24_KillerAudioMenuReaction_C::ExecuteUbergraph_K24_KillerAudioMenuReaction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.ExecuteUbergraph_K24_KillerAudioMenuReaction");
		
		UK24_KillerAudioMenuReaction_C_ExecuteUbergraph_K24_KillerAudioMenuReaction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UK24_KillerAudioMenuReaction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24_KillerAudioMenuReaction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C");
		return ptr;
	}

}


