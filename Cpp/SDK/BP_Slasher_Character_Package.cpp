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
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.GetTrapPlacementLocation_World
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FVector                                     World_Location                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::GetTrapPlacementLocation_World(struct FVector* World_Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.GetTrapPlacementLocation_World");
		
		ABP_Slasher_Character_C_GetTrapPlacementLocation_World_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (World_Location != nullptr)
			*World_Location = params.World_Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.GetSlasherAudioComponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkComponent*                                Audio_Component                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::GetSlasherAudioComponent(class UAkComponent** Audio_Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.GetSlasherAudioComponent");
		
		ABP_Slasher_Character_C_GetSlasherAudioComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Audio_Component != nullptr)
			*Audio_Component = params.Audio_Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.IsTrapPlacementValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::IsTrapPlacementValid(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.IsTrapPlacementValid");
		
		ABP_Slasher_Character_C_IsTrapPlacementValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.SetAudioSwitchSubKillerState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      switchState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::SetAudioSwitchSubKillerState(const class FString& switchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.SetAudioSwitchSubKillerState");
		
		ABP_Slasher_Character_C_SetAudioSwitchSubKillerState_Params params {};
		params.switchState = switchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Initialize Blinding FX Component
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Initialize_Blinding_FX_Component()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Initialize Blinding FX Component");
		
		ABP_Slasher_Character_C_Initialize_Blinding_FX_Component_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.PlayAudioKillerGameStart
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::PlayAudioKillerGameStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.PlayAudioKillerGameStart");
		
		ABP_Slasher_Character_C_PlayAudioKillerGameStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.CreateSlasherBloodPP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::CreateSlasherBloodPP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.CreateSlasherBloodPP");
		
		ABP_Slasher_Character_C_CreateSlasherBloodPP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.IsActivePhaseWalking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::IsActivePhaseWalking(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.IsActivePhaseWalking");
		
		ABP_Slasher_Character_C_IsActivePhaseWalking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ShouldShowBlackVignette
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::ShouldShowBlackVignette(bool* Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ShouldShowBlackVignette");
		
		ABP_Slasher_Character_C_ShouldShowBlackVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Show != nullptr)
			*Show = params.Show;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.IsPassivePhaseWalking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::IsPassivePhaseWalking(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.IsPassivePhaseWalking");
		
		ABP_Slasher_Character_C_IsPassivePhaseWalking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.LocallyObservedCharacterIsShowingFakeKillerStain
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ABP_Slasher_Character_C::LocallyObservedCharacterIsShowingFakeKillerStain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.LocallyObservedCharacterIsShowingFakeKillerStain");
		
		ABP_Slasher_Character_C_LocallyObservedCharacterIsShowingFakeKillerStain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.GetCustomizedSkeletalMesh
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UCustomizedSkeletalMesh* ABP_Slasher_Character_C::GetCustomizedSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.GetCustomizedSkeletalMesh");
		
		ABP_Slasher_Character_C_GetCustomizedSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.GetPlayerDropOffPoint
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FVector ABP_Slasher_Character_C::GetPlayerDropOffPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.GetPlayerDropOffPoint");
		
		ABP_Slasher_Character_C_GetPlayerDropOffPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.IsCloaking
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ABP_Slasher_Character_C::IsCloaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.IsCloaking");
		
		ABP_Slasher_Character_C_IsCloaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.GetCurrentStalkTier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              currentTier                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::GetCurrentStalkTier(float* currentTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.GetCurrentStalkTier");
		
		ABP_Slasher_Character_C_GetCurrentStalkTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (currentTier != nullptr)
			*currentTier = params.currentTier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateStalkModeEffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              StalkModePercent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::UpdateStalkModeEffect(float StalkModePercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateStalkModeEffect");
		
		ABP_Slasher_Character_C_UpdateStalkModeEffect_Params params {};
		params.StalkModePercent = StalkModePercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.SetDetectionZones
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAttackZoneSet                                     Attack_Zones                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::SetDetectionZones(EAttackZoneSet Attack_Zones)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.SetDetectionZones");
		
		ABP_Slasher_Character_C_SetDetectionZones_Params params {};
		params.Attack_Zones = Attack_Zones;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.isFirstPerson
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               First_Person                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::isFirstPerson(bool* First_Person)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.isFirstPerson");
		
		ABP_Slasher_Character_C_isFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (First_Person != nullptr)
			*First_Person = params.First_Person;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.IsUncloaking
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ABP_Slasher_Character_C::IsUncloaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.IsUncloaking");
		
		ABP_Slasher_Character_C_IsUncloaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.SetMacheteCustomDepth
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::SetMacheteCustomDepth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.SetMacheteCustomDepth");
		
		ABP_Slasher_Character_C_SetMacheteCustomDepth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ResetMaterials
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ResetMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ResetMaterials");
		
		ABP_Slasher_Character_C_ResetMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ApplyFirstPersonShaders
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ApplyFirstPersonShaders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ApplyFirstPersonShaders");
		
		ABP_Slasher_Character_C_ApplyFirstPersonShaders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.UserConstructionScript");
		
		ABP_Slasher_Character_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::TML_BlackSmoke__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke__FinishedFunc");
		
		ABP_Slasher_Character_C_TML_BlackSmoke__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::TML_BlackSmoke__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke__UpdateFunc");
		
		ABP_Slasher_Character_C_TML_BlackSmoke__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Timeline_1__FinishedFunc");
		
		ABP_Slasher_Character_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Timeline_1__UpdateFunc");
		
		ABP_Slasher_Character_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Bloodlust Timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Bloodlust_Timeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Bloodlust Timeline__FinishedFunc");
		
		ABP_Slasher_Character_C_Bloodlust_Timeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Bloodlust Timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Bloodlust_Timeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Bloodlust Timeline__UpdateFunc");
		
		ABP_Slasher_Character_C_Bloodlust_Timeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke_Atlanta__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::TML_BlackSmoke_Atlanta__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke_Atlanta__FinishedFunc");
		
		ABP_Slasher_Character_C_TML_BlackSmoke_Atlanta__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke_Atlanta__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::TML_BlackSmoke_Atlanta__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.TML_BlackSmoke_Atlanta__UpdateFunc");
		
		ABP_Slasher_Character_C_TML_BlackSmoke_Atlanta__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.TML_LungeAttack__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::TML_LungeAttack__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.TML_LungeAttack__FinishedFunc");
		
		ABP_Slasher_Character_C_TML_LungeAttack__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.TML_LungeAttack__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::TML_LungeAttack__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.TML_LungeAttack__UpdateFunc");
		
		ABP_Slasher_Character_C_TML_LungeAttack__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterOpacityAnim__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::BloodSplatterOpacityAnim__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterOpacityAnim__FinishedFunc");
		
		ABP_Slasher_Character_C_BloodSplatterOpacityAnim__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterOpacityAnim__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::BloodSplatterOpacityAnim__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterOpacityAnim__UpdateFunc");
		
		ABP_Slasher_Character_C_BloodSplatterOpacityAnim__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterFrameAnim__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::BloodSplatterFrameAnim__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterFrameAnim__FinishedFunc");
		
		ABP_Slasher_Character_C_BloodSplatterFrameAnim__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterFrameAnim__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::BloodSplatterFrameAnim__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.BloodSplatterFrameAnim__UpdateFunc");
		
		ABP_Slasher_Character_C_BloodSplatterFrameAnim__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Travelling Dissolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Stop_Travelling_Dissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Travelling Dissolve");
		
		ABP_Slasher_Character_C_Stop_Travelling_Dissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Start Pounce VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Start_Pounce_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Start Pounce VFX");
		
		ABP_Slasher_Character_C_Start_Pounce_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Pounce VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Stop_Pounce_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Pounce VFX");
		
		ABP_Slasher_Character_C_Stop_Pounce_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Start Saliva VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Start_Saliva_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Start Saliva VFX");
		
		ABP_Slasher_Character_C_Start_Saliva_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Saliva VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Stop_Saliva_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Saliva VFX");
		
		ABP_Slasher_Character_C_Stop_Saliva_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Travelling PP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Stop_Travelling_PP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Stop Travelling PP");
		
		ABP_Slasher_Character_C_Stop_Travelling_PP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePounceStateVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ActivatePounceStateVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePounceStateVFX");
		
		ABP_Slasher_Character_C_ActivatePounceStateVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Kanobo To Demon Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Switch_Kanobo_To_Demon_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Kanobo To Demon Mode");
		
		ABP_Slasher_Character_C_Switch_Kanobo_To_Demon_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Kanobo to Normal Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Switch_Kanobo_to_Normal_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Kanobo to Normal Mode");
		
		ABP_Slasher_Character_C_Switch_Kanobo_to_Normal_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Hide Oni Katana
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Hide_Oni_Katana()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Hide Oni Katana");
		
		ABP_Slasher_Character_C_Hide_Oni_Katana_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Show Oni Katana
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Show_Oni_Katana()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Show Oni Katana");
		
		ABP_Slasher_Character_C_Show_Oni_Katana_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Destroy Blood Orb
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Destroy_Blood_Orb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Destroy Blood Orb");
		
		ABP_Slasher_Character_C_Destroy_Blood_Orb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Oni Weapons To Normal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Switch_Oni_Weapons_To_Normal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Switch Oni Weapons To Normal");
		
		ABP_Slasher_Character_C_Switch_Oni_Weapons_To_Normal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ShowDemonCosmetic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ShowDemonCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ShowDemonCosmetic");
		
		ABP_Slasher_Character_C_ShowDemonCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.HideDemonCosmetic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::HideDemonCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.HideDemonCosmetic");
		
		ABP_Slasher_Character_C_HideDemonCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.DisableDemonMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::DisableDemonMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.DisableDemonMode");
		
		ABP_Slasher_Character_C_DisableDemonMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Hide Oni Katana_TPV
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Hide_Oni_Katana_TPV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Hide Oni Katana_TPV");
		
		ABP_Slasher_Character_C_Hide_Oni_Katana_TPV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ShowGunBullet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ShowGunBullet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ShowGunBullet");
		
		ABP_Slasher_Character_C_ShowGunBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.HideGunBullet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::HideGunBullet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.HideGunBullet");
		
		ABP_Slasher_Character_C_HideGunBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.SpawnFakeBullet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::SpawnFakeBullet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.SpawnFakeBullet");
		
		ABP_Slasher_Character_C_SpawnFakeBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateSacrificeCamBlood
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ActivateSacrificeCamBlood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateSacrificeCamBlood");
		
		ABP_Slasher_Character_C_ActivateSacrificeCamBlood_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.StartDeathBedDissolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::StartDeathBedDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.StartDeathBedDissolve");
		
		ABP_Slasher_Character_C_StartDeathBedDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.DeactivateKnockoutVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::DeactivateKnockoutVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.DeactivateKnockoutVFX");
		
		ABP_Slasher_Character_C_DeactivateKnockoutVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateKnockoutVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ActivateKnockoutVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateKnockoutVFX");
		
		ABP_Slasher_Character_C_ActivateKnockoutVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.SpawnFullScreenBlood
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::SpawnFullScreenBlood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.SpawnFullScreenBlood");
		
		ABP_Slasher_Character_C_SpawnFullScreenBlood_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.StartDeathBedRelocateVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::StartDeathBedRelocateVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.StartDeathBedRelocateVignette");
		
		ABP_Slasher_Character_C_StartDeathBedRelocateVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateAttemptEscapeVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ActivateAttemptEscapeVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateAttemptEscapeVFX");
		
		ABP_Slasher_Character_C_ActivateAttemptEscapeVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ShowSyringe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ShowSyringe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ShowSyringe");
		
		ABP_Slasher_Character_C_ShowSyringe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.HideSyringe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::HideSyringe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.HideSyringe");
		
		ABP_Slasher_Character_C_HideSyringe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.AnimateLiquidSyringe
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::AnimateLiquidSyringe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.AnimateLiquidSyringe");
		
		ABP_Slasher_Character_C_AnimateLiquidSyringe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateVignetteOnWallCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ActivateVignetteOnWallCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateVignetteOnWallCollision");
		
		ABP_Slasher_Character_C_ActivateVignetteOnWallCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.HideSyringeOnStun
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::HideSyringeOnStun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.HideSyringeOnStun");
		
		ABP_Slasher_Character_C_HideSyringeOnStun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_SpawnWipeVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_SpawnWipeVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_SpawnWipeVFX");
		
		ABP_Slasher_Character_C_K22_SpawnWipeVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightDormantMain
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDormantMain_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::K22_HighlightDormantMain(bool IsDormantMain_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightDormantMain");
		
		ABP_Slasher_Character_C_K22_HighlightDormantMain_Params params {};
		params.IsDormantMain_ = IsDormantMain_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightDormant
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDormant_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::K22_HighlightDormant(bool IsDormant_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightDormant");
		
		ABP_Slasher_Character_C_K22_HighlightDormant_Params params {};
		params.IsDormant_ = IsDormant_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightMissJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_HighlightMissJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightMissJump");
		
		ABP_Slasher_Character_C_K22_HighlightMissJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_DormantAttachedSlasher
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_DormantAttachedSlasher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_DormantAttachedSlasher");
		
		ABP_Slasher_Character_C_K22_DormantAttachedSlasher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_JumpTrail_Activate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_JumpTrail_Activate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_JumpTrail_Activate");
		
		ABP_Slasher_Character_C_K22_JumpTrail_Activate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_JumpTrail_Deactivate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_JumpTrail_Deactivate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_JumpTrail_Deactivate");
		
		ABP_Slasher_Character_C_K22_JumpTrail_Deactivate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_ReleaseBrother
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_ReleaseBrother()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_ReleaseBrother");
		
		ABP_Slasher_Character_C_K22_ReleaseBrother_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_MembraneRecovery
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_MembraneRecovery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_MembraneRecovery");
		
		ABP_Slasher_Character_C_K22_MembraneRecovery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_MembraneDelete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_MembraneDelete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_MembraneDelete");
		
		ABP_Slasher_Character_C_K22_MembraneDelete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BabyBloodDissolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_BabyBloodDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BabyBloodDissolve");
		
		ABP_Slasher_Character_C_K22_BabyBloodDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BabyRespawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_BabyRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BabyRespawn");
		
		ABP_Slasher_Character_C_K22_BabyRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_Jump_Active
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_Jump_Active()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_Jump_Active");
		
		ABP_Slasher_Character_C_K22_Jump_Active_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_Jump_Inactive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_Jump_Inactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_Jump_Inactive");
		
		ABP_Slasher_Character_C_K22_Jump_Inactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.On Execution
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::On_Execution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.On Execution");
		
		ABP_Slasher_Character_C_On_Execution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_WrongLanding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Wrong_Landing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::K22_WrongLanding(bool Wrong_Landing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_WrongLanding");
		
		ABP_Slasher_Character_C_K22_WrongLanding_Params params {};
		params.Wrong_Landing = Wrong_Landing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_AttachedToSurvivor_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_AttachedToSurvivor_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_AttachedToSurvivor_VFX");
		
		ABP_Slasher_Character_C_K22_AttachedToSurvivor_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_DetachedFromSurvivor_VFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_DetachedFromSurvivor_VFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_DetachedFromSurvivor_VFX");
		
		ABP_Slasher_Character_C_K22_DetachedFromSurvivor_VFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_WrongLandingVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WrongLanding                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::K22_WrongLandingVignette(bool WrongLanding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_WrongLandingVignette");
		
		ABP_Slasher_Character_C_K22_WrongLandingVignette_Params params {};
		params.WrongLanding = WrongLanding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K12_GetToxinVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBombType                                          Bomb_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::K12_GetToxinVignette(EBombType Bomb_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K12_GetToxinVignette");
		
		ABP_Slasher_Character_C_K12_GetToxinVignette_Params params {};
		params.Bomb_Type = Bomb_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K12_GetAntidoteVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K12_GetAntidoteVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K12_GetAntidoteVignette");
		
		ABP_Slasher_Character_C_K12_GetAntidoteVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_AntidoteEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K12_Killer_AntidoteEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_AntidoteEnd");
		
		ABP_Slasher_Character_C_K12_Killer_AntidoteEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_AntidoteBegin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K12_Killer_AntidoteBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_AntidoteBegin");
		
		ABP_Slasher_Character_C_K12_Killer_AntidoteBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_BombSmokeColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K12_Killer_BombSmokeColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_BombSmokeColor");
		
		ABP_Slasher_Character_C_K12_Killer_BombSmokeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_RemoveVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K12_Killer_RemoveVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_RemoveVignette");
		
		ABP_Slasher_Character_C_K12_Killer_RemoveVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_PlaceVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K12_Killer_PlaceVignette()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K12_Killer_PlaceVignette");
		
		ABP_Slasher_Character_C_K12_Killer_PlaceVignette_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_QuickDissolveBrother
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_QuickDissolveBrother()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_QuickDissolveBrother");
		
		ABP_Slasher_Character_C_K22_QuickDissolveBrother_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Camper_AntidoteBoostVignette_Start
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Camper_AntidoteBoostVignette_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Camper_AntidoteBoostVignette_Start");
		
		ABP_Slasher_Character_C_Camper_AntidoteBoostVignette_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Camper_AntidoteBoostVignette_End
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Camper_AntidoteBoostVignette_End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Camper_AntidoteBoostVignette_End");
		
		ABP_Slasher_Character_C_Camper_AntidoteBoostVignette_End_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BrotherDissolveLocker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_BrotherDissolveLocker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_BrotherDissolveLocker");
		
		ABP_Slasher_Character_C_K22_BrotherDissolveLocker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightMissJump_Stop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K22_HighlightMissJump_Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_HighlightMissJump_Stop");
		
		ABP_Slasher_Character_C_K22_HighlightMissJump_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_CamperHitByKnife
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLocallyObserved                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              lacerationPercent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isDangerous                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::K23_CamperHitByKnife(bool IsLocallyObserved, float lacerationPercent, bool isDangerous)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_CamperHitByKnife");
		
		ABP_Slasher_Character_C_K23_CamperHitByKnife_Params params {};
		params.IsLocallyObserved = IsLocallyObserved;
		params.lacerationPercent = lacerationPercent;
		params.isDangerous = isDangerous;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K22_IsAttachedLocker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAttachedLocker                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::K22_IsAttachedLocker(bool IsAttachedLocker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K22_IsAttachedLocker");
		
		ABP_Slasher_Character_C_K22_IsAttachedLocker_Params params {};
		params.IsAttachedLocker = IsAttachedLocker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowKnifeLT
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_ShowKnifeLT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowKnifeLT");
		
		ABP_Slasher_Character_C_K23_ShowKnifeLT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowKnifeRT
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_ShowKnifeRT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowKnifeRT");
		
		ABP_Slasher_Character_C_K23_ShowKnifeRT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowBat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_ShowBat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_ShowBat");
		
		ABP_Slasher_Character_C_K23_ShowBat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideBat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_HideBat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideBat");
		
		ABP_Slasher_Character_C_K23_HideBat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideKnifeRT
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_HideKnifeRT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideKnifeRT");
		
		ABP_Slasher_Character_C_K23_HideKnifeRT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideKnifeLT
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_HideKnifeLT()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_HideKnifeLT");
		
		ABP_Slasher_Character_C_K23_HideKnifeLT_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.AddBloodDrippingGKMoriMale
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::AddBloodDrippingGKMoriMale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.AddBloodDrippingGKMoriMale");
		
		ABP_Slasher_Character_C_AddBloodDrippingGKMoriMale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ReturnOniToNormal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ReturnOniToNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ReturnOniToNormal");
		
		ABP_Slasher_Character_C_ReturnOniToNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Survivor_BoonRadius_Enter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Survivor_BoonRadius_Enter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Survivor_BoonRadius_Enter");
		
		ABP_Slasher_Character_C_Survivor_BoonRadius_Enter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Survivor_BoonRadius_Exit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Survivor_BoonRadius_Exit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Survivor_BoonRadius_Exit");
		
		ABP_Slasher_Character_C_Survivor_BoonRadius_Exit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Boon_Unbound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Boon_Unbound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Boon_Unbound");
		
		ABP_Slasher_Character_C_Boon_Unbound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UFlashlightComponent*                        Flashlight                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature");
		
		ABP_Slasher_Character_C_BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_1_OnFlashlightAddedRemovedEvent__DelegateSignature_Params params {};
		params.Flashlight = Flashlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UFlashlightComponent*                        Flashlight                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature");
		
		ABP_Slasher_Character_C_BndEvt__BlindFlashlightable_K2Node_ComponentBoundEvent_0_OnFlashlightAddedRemovedEvent__DelegateSignature_Params params {};
		params.Flashlight = Flashlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Start Travelling Dissolve
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Start_Travelling_Dissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Start Travelling Dissolve");
		
		ABP_Slasher_Character_C_Start_Travelling_Dissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Start Travelling PP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Start_Travelling_PP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Start Travelling PP");
		
		ABP_Slasher_Character_C_Start_Travelling_PP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature");
		
		ABP_Slasher_Character_C_BndEvt__BodyFlashlightable_K2Node_ComponentBoundEvent_2_OnFlashlightLitChangedEvent__DelegateSignature_Params params {};
		params.IsLit = IsLit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		EAudioCustomizationCategory                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      switchState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature(EAudioCustomizationCategory Category, const class FString& switchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature");
		
		ABP_Slasher_Character_C_BndEvt__CustomizedAudio_K2Node_ComponentBoundEvent_0_CustomizedAudioChangedDelegate__DelegateSignature_Params params {};
		params.Category = Category;
		params.switchState = switchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerGlitchVFX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    GlitchFX                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Face                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Madness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic* GlitchFX, bool Face, bool Madness, bool killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerGlitchVFX");
		
		ABP_Slasher_Character_C_ActivatePlayerGlitchVFX_Params params {};
		params.GlitchFX = GlitchFX;
		params.Face = Face;
		params.Madness = Madness;
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerLightningVFX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    LightningFX                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               intense                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::ActivatePlayerLightningVFX(class UMaterialInstanceDynamic* LightningFX, bool intense)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerLightningVFX");
		
		ABP_Slasher_Character_C_ActivatePlayerLightningVFX_Params params {};
		params.LightningFX = LightningFX;
		params.intense = intense;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.SetHighlightedVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::SetHighlightedVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.SetHighlightedVFX");
		
		ABP_Slasher_Character_C_SetHighlightedVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Dissolve
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Dissolve                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::Dissolve(bool Dissolve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Dissolve");
		
		ABP_Slasher_Character_C_Dissolve_Params params {};
		params.Dissolve = Dissolve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.SetPlayerExposedVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::SetPlayerExposedVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.SetPlayerExposedVFX");
		
		ABP_Slasher_Character_C_SetPlayerExposedVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Telekinesis On
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Telekinesis_On()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Telekinesis On");
		
		ABP_Slasher_Character_C_Telekinesis_On_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Telekinesis Off
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Telekinesis_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Telekinesis Off");
		
		ABP_Slasher_Character_C_Telekinesis_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateLocalPlayerExposedVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ActivateLocalPlayerExposedVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateLocalPlayerExposedVFX");
		
		ABP_Slasher_Character_C_ActivateLocalPlayerExposedVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.NurseInvisible On
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::NurseInvisible_On()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.NurseInvisible On");
		
		ABP_Slasher_Character_C_NurseInvisible_On_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.NurseInvisible Off
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::NurseInvisible_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.NurseInvisible Off");
		
		ABP_Slasher_Character_C_NurseInvisible_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.FX_SetTrap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::FX_SetTrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.FX_SetTrap");
		
		ABP_Slasher_Character_C_FX_SetTrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.FX_TrapImpact
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::FX_TrapImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.FX_TrapImpact");
		
		ABP_Slasher_Character_C_FX_TrapImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.FX_TrapImpact Off
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::FX_TrapImpact_Off()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.FX_TrapImpact Off");
		
		ABP_Slasher_Character_C_FX_TrapImpact_Off_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.FX_BloodDrops
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::FX_BloodDrops()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.FX_BloodDrops");
		
		ABP_Slasher_Character_C_FX_BloodDrops_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerExposedVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ActivatePlayerExposedVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ActivatePlayerExposedVFX");
		
		ABP_Slasher_Character_C_ActivatePlayerExposedVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateRageTierEffect
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            previousTier                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            currentTier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::UpdateRageTierEffect(int32_t previousTier, int32_t currentTier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateRageTierEffect");
		
		ABP_Slasher_Character_C_UpdateRageTierEffect_Params params {};
		params.previousTier = previousTier;
		params.currentTier = currentTier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.FX_TreatmentStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::FX_TreatmentStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.FX_TreatmentStart");
		
		ABP_Slasher_Character_C_FX_TreatmentStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.FX_BloodDropWipe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::FX_BloodDropWipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.FX_BloodDropWipe");
		
		ABP_Slasher_Character_C_FX_BloodDropWipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.FX_WI_BloodDrops
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::FX_WI_BloodDrops()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.FX_WI_BloodDrops");
		
		ABP_Slasher_Character_C_FX_WI_BloodDrops_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateEndGameVignette
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::ActivateEndGameVignette(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ActivateEndGameVignette");
		
		ABP_Slasher_Character_C_ActivateEndGameVignette_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_StunnedByPallet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_StunnedByPallet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_StunnedByPallet");
		
		ABP_Slasher_Character_C_K23_StunnedByPallet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.EvaluateBlackVignetteVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::EvaluateBlackVignetteVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.EvaluateBlackVignetteVisibility");
		
		ABP_Slasher_Character_C_EvaluateBlackVignetteVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.OnStealthChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               stealth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::OnStealthChanged(bool stealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.OnStealthChanged");
		
		ABP_Slasher_Character_C_OnStealthChanged_Params params {};
		params.stealth = stealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Hide_LTKnife
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_Hide_LTKnife()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Hide_LTKnife");
		
		ABP_Slasher_Character_C_K23_Hide_LTKnife_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Hide_RTKnife
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_Hide_RTKnife()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Hide_RTKnife");
		
		ABP_Slasher_Character_C_K23_Hide_RTKnife_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ReturnToDemonMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ReturnToDemonMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ReturnToDemonMode");
		
		ABP_Slasher_Character_C_ReturnToDemonMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.PlayBloodHitsEffects
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::PlayBloodHitsEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.PlayBloodHitsEffects");
		
		ABP_Slasher_Character_C_PlayBloodHitsEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.PostProcessBloodFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::PostProcessBloodFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.PostProcessBloodFX");
		
		ABP_Slasher_Character_C_PostProcessBloodFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Show_LTKnife
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_Show_LTKnife()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Show_LTKnife");
		
		ABP_Slasher_Character_C_K23_Show_LTKnife_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Show_RTKnife
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_Show_RTKnife()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Show_RTKnife");
		
		ABP_Slasher_Character_C_K23_Show_RTKnife_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K05_BloodDrops
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K05_BloodDrops()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K05_BloodDrops");
		
		ABP_Slasher_Character_C_K05_BloodDrops_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K05_TrapImpactOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K05_TrapImpactOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K05_TrapImpactOff");
		
		ABP_Slasher_Character_C_K05_TrapImpactOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K05_TrapImpact
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K05_TrapImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K05_TrapImpact");
		
		ABP_Slasher_Character_C_K05_TrapImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K05_SetTrap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K05_SetTrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K05_SetTrap");
		
		ABP_Slasher_Character_C_K05_SetTrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Exit_SuperMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_Exit_SuperMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Exit_SuperMode");
		
		ABP_Slasher_Character_C_K23_Exit_SuperMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K07_TreatmentStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K07_TreatmentStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K07_TreatmentStart");
		
		ABP_Slasher_Character_C_K07_TreatmentStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K04_InvisibleOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K04_InvisibleOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K04_InvisibleOff");
		
		ABP_Slasher_Character_C_K04_InvisibleOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K04_InvisibleOn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K04_InvisibleOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K04_InvisibleOn");
		
		ABP_Slasher_Character_C_K04_InvisibleOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K04_TelekinesisOff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K04_TelekinesisOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K04_TelekinesisOff");
		
		ABP_Slasher_Character_C_K04_TelekinesisOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K04_TelekinesisOn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K04_TelekinesisOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K04_TelekinesisOn");
		
		ABP_Slasher_Character_C_K04_TelekinesisOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Enter_SuperMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::K23_Enter_SuperMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.K23_Enter_SuperMode");
		
		ABP_Slasher_Character_C_K23_Enter_SuperMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Killer_LungeAttack_Start
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Killer_LungeAttack_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Killer_LungeAttack_Start");
		
		ABP_Slasher_Character_C_Killer_LungeAttack_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Killer_LungeAttack_End
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Killer_LungeAttack_End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Killer_LungeAttack_End");
		
		ABP_Slasher_Character_C_Killer_LungeAttack_End_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.EventK23Camper
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::EventK23Camper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.EventK23Camper");
		
		ABP_Slasher_Character_C_EventK23Camper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.StopBloodSplatter
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::StopBloodSplatter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.StopBloodSplatter");
		
		ABP_Slasher_Character_C_StopBloodSplatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.PlayBloodSplatter
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::PlayBloodSplatter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.PlayBloodSplatter");
		
		ABP_Slasher_Character_C_PlayBloodSplatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ReceiveBeginPlay");
		
		ABP_Slasher_Character_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.OnDestroyed_Event_Machete_Copy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::OnDestroyed_Event_Machete_Copy(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.OnDestroyed_Event_Machete_Copy");
		
		ABP_Slasher_Character_C_OnDestroyed_Event_Machete_Copy_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.OnClientRestart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::OnClientRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.OnClientRestart");
		
		ABP_Slasher_Character_C_OnClientRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.OnEscapeDoorActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::OnEscapeDoorActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.OnEscapeDoorActivated");
		
		ABP_Slasher_Character_C_OnEscapeDoorActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.OnFirecrackerInRangeBegin
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFirecrackerEffectData                      effectData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_Slasher_Character_C::OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.OnFirecrackerInRangeBegin");
		
		ABP_Slasher_Character_C_OnFirecrackerInRangeBegin_Params params {};
		params.effectData = effectData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.OnLocallyObservedChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.OnLocallyObservedChanged");
		
		ABP_Slasher_Character_C_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.SetAttackDetectionZoneSet
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EAttackZoneSet                                     attackZoneSet                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::SetAttackDetectionZoneSet(EAttackZoneSet attackZoneSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.SetAttackDetectionZoneSet");
		
		ABP_Slasher_Character_C_SetAttackDetectionZoneSet_Params params {};
		params.attackZoneSet = attackZoneSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.OnIntroCompletedBP
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::OnIntroCompletedBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.OnIntroCompletedBP");
		
		ABP_Slasher_Character_C_OnIntroCompletedBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.SetAnimationCrouchState
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               crouched                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::SetAnimationCrouchState(bool crouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.SetAnimationCrouchState");
		
		ABP_Slasher_Character_C_SetAnimationCrouchState_Params params {};
		params.crouched = crouched;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.DisplayAttackZones
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Display                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::DisplayAttackZones(bool Display)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.DisplayAttackZones");
		
		ABP_Slasher_Character_C_DisplayAttackZones_Params params {};
		params.Display = Display;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.MergeLockOnDamageZones
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Slasher_Character_C::MergeLockOnDamageZones(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.MergeLockOnDamageZones");
		
		ABP_Slasher_Character_C_MergeLockOnDamageZones_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.OnLevelReadyToPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.OnLevelReadyToPlay");
		
		ABP_Slasher_Character_C_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnPickUpEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Cosmetic_OnPickUpEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnPickUpEnd");
		
		ABP_Slasher_Character_C_Cosmetic_OnPickUpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnDropCamperEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Cosmetic_OnDropCamperEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnDropCamperEnd");
		
		ABP_Slasher_Character_C_Cosmetic_OnDropCamperEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature");
		
		ABP_Slasher_Character_C_BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_0_ActorComponentChaseStartSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature");
		
		ABP_Slasher_Character_C_BndEvt___characterChaseVisualComponent_K2Node_ComponentBoundEvent_1_ActorComponentChaseEndSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.OnIntroCompleted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.OnIntroCompleted");
		
		ABP_Slasher_Character_C_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateDOF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::UpdateDOF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.UpdateDOF");
		
		ABP_Slasher_Character_C_UpdateDOF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnCancelCarry
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ABP_Slasher_Character_C::Cosmetic_OnCancelCarry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.Cosmetic_OnCancelCarry");
		
		ABP_Slasher_Character_C_Cosmetic_OnCancelCarry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function BP_Slasher_Character.BP_Slasher_Character_C.ExecuteUbergraph_BP_Slasher_Character
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Slasher_Character_C::ExecuteUbergraph_BP_Slasher_Character(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Slasher_Character.BP_Slasher_Character_C.ExecuteUbergraph_BP_Slasher_Character");
		
		ABP_Slasher_Character_C_ExecuteUbergraph_BP_Slasher_Character_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Slasher_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Slasher_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Slasher_Character.BP_Slasher_Character_C");
		return ptr;
	}

}


