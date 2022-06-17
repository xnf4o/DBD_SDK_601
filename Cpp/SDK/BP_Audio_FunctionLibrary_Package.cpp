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
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Spawning
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Cloth_Spawning(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Spawning");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Cloth_Spawning_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Cooldown
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Cooldown(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Cooldown");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Cooldown_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Short_K28
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Scream_Short_K28(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Short_K28");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Short_K28_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long_Mori_K28
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Scream_Long_Mori_K28(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long_Mori_K28");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Long_Mori_K28_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Dead
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Dead(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Dead");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Dead_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status_Start
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Status_Start(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status_Start");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Status_Start_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Stop
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Stop(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Stop");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Stop_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long_Mori
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Scream_Long_Mori(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long_Mori");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Long_Mori_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Insanity_SnapOfIt
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Insanity_SnapOfIt(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Insanity_SnapOfIt");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Insanity_SnapOfIt_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Insanity
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Insanity(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Insanity");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Insanity_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Hit_Mori
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Scream_Hit_Mori(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Hit_Mori");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Hit_Mori_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Hit
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Scream_Hit(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Hit");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Hit_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Scream_Long(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Long_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Short
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Scream_Short(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Short");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Scream_Short_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Hard
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Hurt_Hard(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Hard");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Hurt_Hard_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Cough
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Cough(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Cough");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Cough_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Light
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Hurt_Light(class ADBDBasePlayer* Player, class UObject* __WorldContext, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Light");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Hurt_Light_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Effort_Hard
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Effort_Hard(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Effort_Hard");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Effort_Hard_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Effort_Light
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt_Effort_Light(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Effort_Light");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Effort_Light_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      AK_Audio_State                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Audio_State                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Status(const class FString& AK_Audio_State, class ADBDBasePlayer* Player, class UObject* __WorldContext, class FString* Audio_State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Status_Params params {};
		params.AK_Audio_State = AK_Audio_State;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Audio_State != nullptr)
			*Audio_State = params.Audio_State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Post_AkEvent
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Post_AkEvent(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Post_AkEvent");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Post_AkEvent_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Right
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Footstep_Right(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Right");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Footstep_Right_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Left
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Footstep_Left(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Left");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Footstep_Left_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Grunt(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Grunt_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Body
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Survivor_Body(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Body");
		
		UBP_Audio_FunctionLibrary_C_Audio_Survivor_Body_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_K20_Weapon_Scrap
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_K20_Weapon_Scrap(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_K20_Weapon_Scrap");
		
		UBP_Audio_FunctionLibrary_C_Audio_K20_Weapon_Scrap_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Surface_Impact
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Surface_Impact(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Surface_Impact");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Surface_Impact_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Impact
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Impact(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Impact");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Impact_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_PullOut
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_PullOut(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_PullOut");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_PullOut_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Clean
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Clean(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Clean");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Clean_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Attack
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Attack(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Attack");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Attack_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Arm
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon_Arm(class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Arm");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Arm_Params params {};
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Setup
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                AudioComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AudioStateKiller                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAkAudioEvent*                               StartEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Setup(class UAkComponent* AudioComponent, const class FName& AudioStateKiller, class UAkAudioEvent* StartEvent, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Setup");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Setup_Params params {};
		params.AudioComponent = AudioComponent;
		params.AudioStateKiller = AudioStateKiller;
		params.StartEvent = StartEvent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Post_AkEvent
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Post_AkEvent(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Post_AkEvent");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Post_AkEvent_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Weapon(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Weapon_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Grunt
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Grunt(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Grunt");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Grunt_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Right
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Footstep_Only_Right(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Right");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Only_Right_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Left
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Footstep_Only_Left(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Left");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Only_Left_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Right
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Footstep_Right(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Right");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Right_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Left
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Footstep_Left(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Left");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Footstep_Left_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Land
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Cloth_Land(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Land");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Cloth_Land_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_ShuffleLow
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Cloth_ShuffleLow(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_ShuffleLow");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Cloth_ShuffleLow_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_ShuffleHigh
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Cloth_ShuffleHigh(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_ShuffleHigh");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Cloth_ShuffleHigh_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Move
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               AK_Audio_Event                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDBasePlayer*                              Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Audio_FunctionLibrary_C::STATIC_Audio_Killer_Cloth_Move(class UAkAudioEvent* AK_Audio_Event, class ADBDBasePlayer* Player, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Move");
		
		UBP_Audio_FunctionLibrary_C_Audio_Killer_Cloth_Move_Params params {};
		params.AK_Audio_Event = AK_Audio_Event;
		params.Player = Player;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBP_Audio_FunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Audio_FunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C");
		return ptr;
	}

}


