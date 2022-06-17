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
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.StopCameraShake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UEndGameEffectsComponent_C::StopCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.StopCameraShake");
		
		UEndGameEffectsComponent_C_StopCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.PlayCameraShake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CameraShake                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndGameEffectsComponent_C::PlayCameraShake(class UClass* CameraShake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.PlayCameraShake");
		
		UEndGameEffectsComponent_C_PlayCameraShake_Params params {};
		params.CameraShake = CameraShake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.GetDBDPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndGameEffectsComponent_C::GetDBDPlayer(class ADBDPlayer** Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.GetDBDPlayer");
		
		UEndGameEffectsComponent_C_GetDBDPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Player != nullptr)
			*Player = params.Player;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndGameEffectsComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveEndPlay");
		
		UEndGameEffectsComponent_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.OnTimeDilationChanged
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UEndGameEffectsComponent_C::OnTimeDilationChanged(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.OnTimeDilationChanged");
		
		UEndGameEffectsComponent_C_OnTimeDilationChanged_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndGameEffectsComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveTick");
		
		UEndGameEffectsComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReminderEffect
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UEndGameEffectsComponent_C::ReminderEffect(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReminderEffect");
		
		UEndGameEffectsComponent_C_ReminderEffect_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.StartUpdateTimer
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UEndGameEffectsComponent_C::StartUpdateTimer(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.StartUpdateTimer");
		
		UEndGameEffectsComponent_C_StartUpdateTimer_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.OnLocallyObservedChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndGameEffectsComponent_C::OnLocallyObservedChanged(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.OnLocallyObservedChanged");
		
		UEndGameEffectsComponent_C_OnLocallyObservedChanged_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UEndGameEffectsComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveBeginPlay");
		
		UEndGameEffectsComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.StartEndGameEffects
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               JustStarted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEndGameEffectsComponent_C::StartEndGameEffects(bool JustStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.StartEndGameEffects");
		
		UEndGameEffectsComponent_C_StartEndGameEffects_Params params {};
		params.JustStarted = JustStarted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.RegisterLocallyObservedEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UEndGameEffectsComponent_C::RegisterLocallyObservedEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.RegisterLocallyObservedEvents");
		
		UEndGameEffectsComponent_C_RegisterLocallyObservedEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.UnregisterLocallyObservedEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UEndGameEffectsComponent_C::UnregisterLocallyObservedEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.UnregisterLocallyObservedEvents");
		
		UEndGameEffectsComponent_C_UnregisterLocallyObservedEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.EndGameOver
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UEndGameEffectsComponent_C::EndGameOver(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.EndGameOver");
		
		UEndGameEffectsComponent_C_EndGameOver_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function EndGameEffectsComponent.EndGameEffectsComponent_C.ExecuteUbergraph_EndGameEffectsComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndGameEffectsComponent_C::ExecuteUbergraph_EndGameEffectsComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EndGameEffectsComponent.EndGameEffectsComponent_C.ExecuteUbergraph_EndGameEffectsComponent");
		
		UEndGameEffectsComponent_C_ExecuteUbergraph_EndGameEffectsComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEndGameEffectsComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndGameEffectsComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EndGameEffectsComponent.EndGameEffectsComponent_C");
		return ptr;
	}

}


