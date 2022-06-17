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
	 * 		RVA    -> 0x075DE3A0
	 * 		Name   -> Function NetworkUtilities.NetSynchedClock.Server_RequestServerTime
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 */
	void UNetSynchedClock::Server_RequestServerTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.NetSynchedClock.Server_RequestServerTime");
		
		UNetSynchedClock_Server_RequestServerTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049D9400
	 * 		Name   -> Function NetworkUtilities.NetSynchedClock.Client_ReportServerTime
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 * Parameters:
	 * 		float                                              serverTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNetSynchedClock::Client_ReportServerTime(float serverTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.NetSynchedClock.Client_ReportServerTime");
		
		UNetSynchedClock_Client_ReportServerTime_Params params {};
		params.serverTime = serverTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNetSynchedClock.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetSynchedClock::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkUtilities.NetSynchedClock");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075DE550
	 * 		Name   -> Function NetworkUtilities.NetUtils.IsDedicatedServerInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNetUtils::STATIC_IsDedicatedServerInstance(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.NetUtils.IsDedicatedServerInstance");
		
		UNetUtils_IsDedicatedServerInstance_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNetUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkUtilities.NetUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075DE9D0
	 * 		Name   -> Function NetworkUtilities.NetworkFenceActor.Server_ClientPassedFence
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		TArray<struct FGuid>                               Fences                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ANetworkFenceActor::Server_ClientPassedFence(TArray<struct FGuid> Fences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.NetworkFenceActor.Server_ClientPassedFence");
		
		ANetworkFenceActor_Server_ClientPassedFence_Params params {};
		params.Fences = Fences;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075DE910
	 * 		Name   -> Function NetworkUtilities.NetworkFenceActor.Client_AllPassedFence
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient, NetValidate)
	 * Parameters:
	 * 		TArray<struct FGuid>                               Fences                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ANetworkFenceActor::Client_AllPassedFence(TArray<struct FGuid> Fences)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.NetworkFenceActor.Client_AllPassedFence");
		
		ANetworkFenceActor_Client_AllPassedFence_Params params {};
		params.Fences = Fences;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ANetworkFenceActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkFenceActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkUtilities.NetworkFenceActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E1EC0
	 * 		Name   -> Function NetworkUtilities.ServerCorrectionDisablerComponent.SetServerCorrectionEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                Channel                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerCorrectionDisablerComponent::SetServerCorrectionEnabled(bool Enabled, const struct FGameplayTag& Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.ServerCorrectionDisablerComponent.SetServerCorrectionEnabled");
		
		UServerCorrectionDisablerComponent_SetServerCorrectionEnabled_Params params {};
		params.Enabled = Enabled;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E1DC0
	 * 		Name   -> Function NetworkUtilities.ServerCorrectionDisablerComponent.Multicast_SetServerCorrectionEnabled
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                Channel                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UServerCorrectionDisablerComponent::Multicast_SetServerCorrectionEnabled(bool Enabled, const struct FGameplayTag& Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.ServerCorrectionDisablerComponent.Multicast_SetServerCorrectionEnabled");
		
		UServerCorrectionDisablerComponent_Multicast_SetServerCorrectionEnabled_Params params {};
		params.Enabled = Enabled;
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E1D90
	 * 		Name   -> Function NetworkUtilities.ServerCorrectionDisablerComponent.GetServerCorrectionEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UServerCorrectionDisablerComponent::GetServerCorrectionEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.ServerCorrectionDisablerComponent.GetServerCorrectionEnabled");
		
		UServerCorrectionDisablerComponent_GetServerCorrectionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UServerCorrectionDisablerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerCorrectionDisablerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkUtilities.ServerCorrectionDisablerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UServerTimeProviderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerTimeProviderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkUtilities.ServerTimeProviderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2E10
	 * 		Name   -> Function NetworkUtilities.TimerObject.OnRep_TimerDataUpdated
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FReplicationTimerData                       OldData                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UTimerObject::OnRep_TimerDataUpdated(const struct FReplicationTimerData& OldData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.OnRep_TimerDataUpdated");
		
		UTimerObject_OnRep_TimerDataUpdated_Params params {};
		params.OldData = OldData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2DE0
	 * 		Name   -> Function NetworkUtilities.TimerObject.IsTimerActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTimerObject::IsTimerActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.IsTimerActive");
		
		UTimerObject_IsTimerActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2DB0
	 * 		Name   -> Function NetworkUtilities.TimerObject.IsPaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTimerObject::IsPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.IsPaused");
		
		UTimerObject_IsPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2D80
	 * 		Name   -> Function NetworkUtilities.TimerObject.IsDone
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTimerObject::IsDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.IsDone");
		
		UTimerObject_IsDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2D50
	 * 		Name   -> Function NetworkUtilities.TimerObject.GetRemainingTimePercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTimerObject::GetRemainingTimePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetRemainingTimePercent");
		
		UTimerObject_GetRemainingTimePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2D20
	 * 		Name   -> Function NetworkUtilities.TimerObject.GetRemainingTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTimerObject::GetRemainingTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetRemainingTime");
		
		UTimerObject_GetRemainingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2CF0
	 * 		Name   -> Function NetworkUtilities.TimerObject.GetElapsedTimePercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTimerObject::GetElapsedTimePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetElapsedTimePercent");
		
		UTimerObject_GetElapsedTimePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2CC0
	 * 		Name   -> Function NetworkUtilities.TimerObject.GetElapsedTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTimerObject::GetElapsedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetElapsedTime");
		
		UTimerObject_GetElapsedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2C90
	 * 		Name   -> Function NetworkUtilities.TimerObject.GetDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTimerObject::GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.GetDuration");
		
		UTimerObject_GetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2C00
	 * 		Name   -> Function NetworkUtilities.TimerObject.CreateTimer
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTimerObject* UTimerObject::STATIC_CreateTimer(class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.CreateTimer");
		
		UTimerObject_CreateTimer_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2BE0
	 * 		Name   -> Function NetworkUtilities.TimerObject.Authority_Unpause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTimerObject::Authority_Unpause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Unpause");
		
		UTimerObject_Authority_Unpause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2B60
	 * 		Name   -> Function NetworkUtilities.TimerObject.Authority_Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimerObject::Authority_Start(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Start");
		
		UTimerObject_Authority_Start_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2AD0
	 * 		Name   -> Function NetworkUtilities.TimerObject.Authority_SetPaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               paused                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTimerObject::Authority_SetPaused(bool paused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_SetPaused");
		
		UTimerObject_Authority_SetPaused_Params params {};
		params.paused = paused;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2AB0
	 * 		Name   -> Function NetworkUtilities.TimerObject.Authority_Pause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTimerObject::Authority_Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Pause");
		
		UTimerObject_Authority_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E2A90
	 * 		Name   -> Function NetworkUtilities.TimerObject.Authority_Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTimerObject::Authority_Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkUtilities.TimerObject.Authority_Clear");
		
		UTimerObject_Authority_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTimerObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimerObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkUtilities.TimerObject");
		return ptr;
	}

}


