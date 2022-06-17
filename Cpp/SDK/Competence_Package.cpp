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
	 * 		RVA    -> 0x075E9860
	 * 		Name   -> Function Competence.BaseModifierContainer.OnRep_EventDrivenConditionData_Internal
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FModifierReplicatedEventConditionData       oldReplicatedCondition                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UBaseModifierContainer::OnRep_EventDrivenConditionData_Internal(const struct FModifierReplicatedEventConditionData& oldReplicatedCondition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.OnRep_EventDrivenConditionData_Internal");
		
		UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Params params {};
		params.oldReplicatedCondition = oldReplicatedCondition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D8FD90
	 * 		Name   -> Function Competence.BaseModifierContainer.IsApplicable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBaseModifierContainer::IsApplicable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.IsApplicable");
		
		UBaseModifierContainer_IsApplicable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E97C0
	 * 		Name   -> Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEventDrivenModifierCondition* UBaseModifierContainer::CreateAndSetEventDrivenCondition(class UClass* conditionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition");
		
		UBaseModifierContainer_CreateAndSetEventDrivenCondition_Params params {};
		params.conditionType = conditionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
	 */
	void UBaseModifierContainer::Authority_OnInstantiateModifierConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions");
		
		UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseModifierContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseModifierContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.BaseModifierContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E9380
	 * 		Name   -> Function Competence.BaseModifierCondition.SetSubjectProviderClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      subjectProviderClass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseModifierCondition::SetSubjectProviderClass(class UClass* subjectProviderClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.SetSubjectProviderClass");
		
		UBaseModifierCondition_SetSubjectProviderClass_Params params {};
		params.subjectProviderClass = subjectProviderClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E9360
	 * 		Name   -> Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBaseModifierCondition::OnRep_SubjectProviderClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass");
		
		UBaseModifierCondition_OnRep_SubjectProviderClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E9340
	 * 		Name   -> Function Competence.BaseModifierCondition.OnRep_OwningModifier
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBaseModifierCondition::OnRep_OwningModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.OnRep_OwningModifier");
		
		UBaseModifierCondition_OnRep_OwningModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x049F8270
	 * 		Name   -> Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void UBaseModifierCondition::InitializeSubjectProviderClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.InitializeSubjectProviderClass");
		
		UBaseModifierCondition_InitializeSubjectProviderClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E9310
	 * 		Name   -> Function Competence.BaseModifierCondition.GetOwningActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UBaseModifierCondition::GetOwningActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.BaseModifierCondition.GetOwningActor");
		
		UBaseModifierCondition_GetOwningActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.BaseModifierCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEventDrivenModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventDrivenModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.EventDrivenModifierCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EC6F0
	 * 		Name   -> Function Competence.RangeBasedCondition.OnRep_Range
	 * 		Flags  -> (Final, Native, Private)
	 */
	void URangeBasedCondition::OnRep_Range()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.RangeBasedCondition.OnRep_Range");
		
		URangeBasedCondition_OnRep_Range_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URangeBasedCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeBasedCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.RangeBasedCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UModifierSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifierSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.ModifierSubjectProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E9CB0
	 * 		Name   -> Function Competence.CompositeModifierCondition.OnRep_Conditions
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCompositeModifierCondition::OnRep_Conditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.CompositeModifierCondition.OnRep_Conditions");
		
		UCompositeModifierCondition_OnRep_Conditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCompositeModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompositeModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.CompositeModifierCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAndModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAndModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.AndModifierCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCompetenceDebugger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompetenceDebugger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.CompetenceDebugger");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EA680
	 * 		Name   -> Function Competence.ConditionFactory.Or
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UOrModifierCondition* UConditionFactory::STATIC_Or()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.Or");
		
		UConditionFactory_Or_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EA5E0
	 * 		Name   -> Function Competence.ConditionFactory.Not
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UNotModifierCondition* UConditionFactory::STATIC_Not()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.Not");
		
		UConditionFactory_Not_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EA4F0
	 * 		Name   -> Function Competence.ConditionFactory.IsTimerDone
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTimerObject*                                Timer                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UIsTimerDoneCondition* UConditionFactory::STATIC_IsTimerDone(class UTimerObject* Timer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.IsTimerDone");
		
		UConditionFactory_IsTimerDone_Params params {};
		params.Timer = Timer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EA380
	 * 		Name   -> Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      subjectProviderClass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URangeBasedCondition* UConditionFactory::STATIC_CreateRangeBasedConditionWithSubject(class UClass* conditionType, float Range, class UClass* subjectProviderClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject");
		
		UConditionFactory_CreateRangeBasedConditionWithSubject_Params params {};
		params.conditionType = conditionType;
		params.Range = Range;
		params.subjectProviderClass = subjectProviderClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EA240
	 * 		Name   -> Function Competence.ConditionFactory.CreateRangeBasedCondition
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class URangeBasedCondition* UConditionFactory::STATIC_CreateRangeBasedCondition(class UClass* conditionType, float Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateRangeBasedCondition");
		
		UConditionFactory_CreateRangeBasedCondition_Params params {};
		params.conditionType = conditionType;
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EA110
	 * 		Name   -> Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      subjectProviderClass                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEventDrivenModifierCondition* UConditionFactory::STATIC_CreateAndReceiveConditionWithSubjectForBP(class UClass* conditionType, class UClass* subjectProviderClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP");
		
		UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Params params {};
		params.conditionType = conditionType;
		params.subjectProviderClass = subjectProviderClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EA020
	 * 		Name   -> Function Competence.ConditionFactory.CreateAndReceiveConditionForBP
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      conditionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UEventDrivenModifierCondition* UConditionFactory::STATIC_CreateAndReceiveConditionForBP(class UClass* conditionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.CreateAndReceiveConditionForBP");
		
		UConditionFactory_CreateAndReceiveConditionForBP_Params params {};
		params.conditionType = conditionType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075E9F80
	 * 		Name   -> Function Competence.ConditionFactory.And
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UAndModifierCondition* UConditionFactory::STATIC_And()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.ConditionFactory.And");
		
		UConditionFactory_And_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UConditionFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.ConditionFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EB5A0
	 * 		Name   -> Function Competence.HasObjectState.SetState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                State                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHasObjectState::SetState(const struct FGameplayTag& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.HasObjectState.SetState");
		
		UHasObjectState_SetState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHasObjectState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasObjectState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.HasObjectState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EB7B0
	 * 		Name   -> Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHasObjectStateWithMaxDuration::SetMaxDuration(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration");
		
		UHasObjectStateWithMaxDuration_SetMaxDuration_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHasObjectStateWithMaxDuration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasObjectStateWithMaxDuration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.HasObjectStateWithMaxDuration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCompetenceFlagProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCompetenceFlagProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.CompetenceFlagProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UConditionReceiver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConditionReceiver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.ConditionReceiver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UModifierProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifierProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.ModifierProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EBDB0
	 * 		Name   -> Function Competence.IsTimerDoneCondition.SetTimer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTimerObject*                                Timer                                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsTimerDoneCondition::SetTimer(class UTimerObject* Timer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.IsTimerDoneCondition.SetTimer");
		
		UIsTimerDoneCondition_SetTimer_Params params {};
		params.Timer = Timer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EBD90
	 * 		Name   -> Function Competence.IsTimerDoneCondition.OnRep_Timer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UIsTimerDoneCondition::OnRep_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.IsTimerDoneCondition.OnRep_Timer");
		
		UIsTimerDoneCondition_OnRep_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UIsTimerDoneCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsTimerDoneCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.IsTimerDoneCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075EC200
	 * 		Name   -> Function Competence.NotModifierCondition.OnRep_Condition
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UNotModifierCondition::OnRep_Condition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Competence.NotModifierCondition.OnRep_Condition");
		
		UNotModifierCondition_OnRep_Condition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UNotModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.NotModifierCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOrModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOrModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.OrModifierCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UOwnerSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwnerSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.OwnerSubjectProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestEventDrivenModifierCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestEventDrivenModifierCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.TestEventDrivenModifierCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTestObjectStateProviderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestObjectStateProviderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Competence.TestObjectStateProviderComponent");
		return ptr;
	}

}


