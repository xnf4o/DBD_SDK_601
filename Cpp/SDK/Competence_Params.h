#pragma once

/**
 * Name: DBD
 * Version: 601
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Competence.BaseModifierContainer.OnRep_EventDrivenConditionData_Internal
	 */
	struct UBaseModifierContainer_OnRep_EventDrivenConditionData_Internal_Params
	{
	public:
		struct FModifierReplicatedEventConditionData               oldReplicatedCondition;                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.BaseModifierContainer.IsApplicable
	 */
	struct UBaseModifierContainer_IsApplicable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition
	 */
	struct UBaseModifierContainer_CreateAndSetEventDrivenCondition_Params
	{
	public:
		class UClass*                                              conditionType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEventDrivenModifierCondition*                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions
	 */
	struct UBaseModifierContainer_Authority_OnInstantiateModifierConditions_Params
	{	};

	/**
	 * Function Competence.BaseModifierCondition.SetSubjectProviderClass
	 */
	struct UBaseModifierCondition_SetSubjectProviderClass_Params
	{
	public:
		class UClass*                                              subjectProviderClass;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.BaseModifierCondition.OnRep_SubjectProviderClass
	 */
	struct UBaseModifierCondition_OnRep_SubjectProviderClass_Params
	{	};

	/**
	 * Function Competence.BaseModifierCondition.OnRep_OwningModifier
	 */
	struct UBaseModifierCondition_OnRep_OwningModifier_Params
	{	};

	/**
	 * Function Competence.BaseModifierCondition.InitializeSubjectProviderClass
	 */
	struct UBaseModifierCondition_InitializeSubjectProviderClass_Params
	{	};

	/**
	 * Function Competence.BaseModifierCondition.GetOwningActor
	 */
	struct UBaseModifierCondition_GetOwningActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.RangeBasedCondition.OnRep_Range
	 */
	struct URangeBasedCondition_OnRep_Range_Params
	{	};

	/**
	 * Function Competence.CompositeModifierCondition.OnRep_Conditions
	 */
	struct UCompositeModifierCondition_OnRep_Conditions_Params
	{	};

	/**
	 * Function Competence.ConditionFactory.Or
	 */
	struct UConditionFactory_Or_Params
	{
	public:
		class UOrModifierCondition*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.Not
	 */
	struct UConditionFactory_Not_Params
	{
	public:
		class UNotModifierCondition*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.IsTimerDone
	 */
	struct UConditionFactory_IsTimerDone_Params
	{
	public:
		class UTimerObject*                                        Timer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UIsTimerDoneCondition*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.CreateRangeBasedConditionWithSubject
	 */
	struct UConditionFactory_CreateRangeBasedConditionWithSubject_Params
	{
	public:
		class UClass*                                              conditionType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              subjectProviderClass;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URangeBasedCondition*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.CreateRangeBasedCondition
	 */
	struct UConditionFactory_CreateRangeBasedCondition_Params
	{
	public:
		class UClass*                                              conditionType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Range;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URangeBasedCondition*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP
	 */
	struct UConditionFactory_CreateAndReceiveConditionWithSubjectForBP_Params
	{
	public:
		class UClass*                                              conditionType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              subjectProviderClass;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEventDrivenModifierCondition*                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.CreateAndReceiveConditionForBP
	 */
	struct UConditionFactory_CreateAndReceiveConditionForBP_Params
	{
	public:
		class UClass*                                              conditionType;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UEventDrivenModifierCondition*                       ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.ConditionFactory.And
	 */
	struct UConditionFactory_And_Params
	{
	public:
		class UAndModifierCondition*                               ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.HasObjectState.SetState
	 */
	struct UHasObjectState_SetState_Params
	{
	public:
		struct FGameplayTag                                        State;                                                   // 0x0000(0x000C)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.HasObjectStateWithMaxDuration.SetMaxDuration
	 */
	struct UHasObjectStateWithMaxDuration_SetMaxDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.IsTimerDoneCondition.SetTimer
	 */
	struct UIsTimerDoneCondition_SetTimer_Params
	{
	public:
		class UTimerObject*                                        Timer;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Competence.IsTimerDoneCondition.OnRep_Timer
	 */
	struct UIsTimerDoneCondition_OnRep_Timer_Params
	{	};

	/**
	 * Function Competence.NotModifierCondition.OnRep_Condition
	 */
	struct UNotModifierCondition_OnRep_Condition_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
