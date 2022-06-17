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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class Competence.BaseModifierContainer
	 * Size -> 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
	 */
	class UBaseModifierContainer : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_QQ4W[0x20];                                  // 0x00B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                _id;                                                     // 0x00D8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7YA6[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FModifierReplicatedEventConditionData               _eventDrivenConditionData;                               // 0x00E8(0x0010) Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void OnRep_EventDrivenConditionData_Internal(const struct FModifierReplicatedEventConditionData& oldReplicatedCondition);
		bool IsApplicable();
		class UEventDrivenModifierCondition* CreateAndSetEventDrivenCondition(class UClass* conditionType);
		void Authority_OnInstantiateModifierConditions();
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.BaseModifierCondition
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UBaseModifierCondition : public UActorComponent
	{
	public:
		class UBaseModifierContainer*                              _owningModifier;                                         // 0x00B8(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UModifierSubjectProvider*                            _subjectProvider;                                        // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              _subjectProviderClass;                                   // 0x00C8(0x0008) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetSubjectProviderClass(class UClass* subjectProviderClass);
		void OnRep_SubjectProviderClass();
		void OnRep_OwningModifier();
		void InitializeSubjectProviderClass();
		class AActor* GetOwningActor();
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.EventDrivenModifierCondition
	 * Size -> 0x0018 (FullSize[0x00E8] - InheritedSize[0x00D0])
	 */
	class UEventDrivenModifierCondition : public UBaseModifierCondition
	{
	public:
		unsigned char                                              UnknownData_2IMF[0x18];                                  // 0x00D0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.RangeBasedCondition
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class URangeBasedCondition : public UEventDrivenModifierCondition
	{
	public:
		float                                                      _range;                                                  // 0x00E8(0x0004) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RSU1[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnRep_Range();
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.ModifierSubjectProvider
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UModifierSubjectProvider : public UObject
	{
	public:
		unsigned char                                              UnknownData_HP29[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.CompositeModifierCondition
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UCompositeModifierCondition : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_MHJC[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UEventDrivenModifierCondition*>               _conditions;                                             // 0x00F0(0x0010) ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void OnRep_Conditions();
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.AndModifierCondition
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class UAndModifierCondition : public UCompositeModifierCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.CompetenceDebugger
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UCompetenceDebugger : public UObject
	{
	public:
		unsigned char                                              UnknownData_43QO[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.ConditionFactory
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UConditionFactory : public UBlueprintFunctionLibrary
	{
	public:
		class UOrModifierCondition* STATIC_Or();
		class UNotModifierCondition* STATIC_Not();
		class UIsTimerDoneCondition* STATIC_IsTimerDone(class UTimerObject* Timer);
		class URangeBasedCondition* STATIC_CreateRangeBasedConditionWithSubject(class UClass* conditionType, float Range, class UClass* subjectProviderClass);
		class URangeBasedCondition* STATIC_CreateRangeBasedCondition(class UClass* conditionType, float Range);
		class UEventDrivenModifierCondition* STATIC_CreateAndReceiveConditionWithSubjectForBP(class UClass* conditionType, class UClass* subjectProviderClass);
		class UEventDrivenModifierCondition* STATIC_CreateAndReceiveConditionForBP(class UClass* conditionType);
		class UAndModifierCondition* STATIC_And();
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.HasObjectState
	 * Size -> 0x0038 (FullSize[0x0120] - InheritedSize[0x00E8])
	 */
	class UHasObjectState : public UEventDrivenModifierCondition
	{
	public:
		struct FGameplayTag                                        _state;                                                  // 0x00E8(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EOKJ[0x2C];                                  // 0x00F4(0x002C) MISSED OFFSET (PADDING)

	public:
		void SetState(const struct FGameplayTag& State);
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.HasObjectStateWithMaxDuration
	 * Size -> 0x0038 (FullSize[0x0158] - InheritedSize[0x0120])
	 */
	class UHasObjectStateWithMaxDuration : public UHasObjectState
	{
	public:
		unsigned char                                              UnknownData_MQ4S[0x30];                                  // 0x0120(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      _maxDuration;                                            // 0x0150(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QRWU[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetMaxDuration(float Duration);
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.CompetenceFlagProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCompetenceFlagProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.ConditionReceiver
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UConditionReceiver : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.ModifierProvider
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UModifierProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.IsTimerDoneCondition
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UIsTimerDoneCondition : public UEventDrivenModifierCondition
	{
	public:
		class UTimerObject*                                        _timer;                                                  // 0x00E8(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UDN7[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetTimer(class UTimerObject* Timer);
		void OnRep_Timer();
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.NotModifierCondition
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UNotModifierCondition : public UEventDrivenModifierCondition
	{
	public:
		unsigned char                                              UnknownData_3TA1[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEventDrivenModifierCondition*                       _condition;                                              // 0x00F0(0x0008) ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnRep_Condition();
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.OrModifierCondition
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class UOrModifierCondition : public UCompositeModifierCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.OwnerSubjectProvider
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UOwnerSubjectProvider : public UModifierSubjectProvider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.TestEventDrivenModifierCondition
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UTestEventDrivenModifierCondition : public UEventDrivenModifierCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Competence.TestObjectStateProviderComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UTestObjectStateProviderComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_GN05[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameplayTagContainerComponent*                      GameplayTagContainerComponent;                           // 0x00C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
