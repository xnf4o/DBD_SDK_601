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
	 * 		RVA    -> 0x075FA5C0
	 * 		Name   -> Function AnimationUtilities.SleepingAnimInstance.Wakeup
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USleepingAnimInstance::Wakeup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.SleepingAnimInstance.Wakeup");
		
		USleepingAnimInstance_Wakeup_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075FA530
	 * 		Name   -> Function AnimationUtilities.SleepingAnimInstance.SetNeverIdle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               neverIdle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USleepingAnimInstance::SetNeverIdle(bool neverIdle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.SleepingAnimInstance.SetNeverIdle");
		
		USleepingAnimInstance_SetNeverIdle_Params params {};
		params.neverIdle = neverIdle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075FA4A0
	 * 		Name   -> Function AnimationUtilities.SleepingAnimInstance.OnMontageStart
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USleepingAnimInstance::OnMontageStart(class UAnimMontage* Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.SleepingAnimInstance.OnMontageStart");
		
		USleepingAnimInstance_OnMontageStart_Params params {};
		params.Montage = Montage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USleepingAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USleepingAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.SleepingAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ASkeletalMeshActorBudgeted.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASkeletalMeshActorBudgeted::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.SkeletalMeshActorBudgeted");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.AnimCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimEffectBlackBoard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimEffectBlackBoard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.AnimEffectBlackBoard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075F82A0
	 * 		Name   -> Function AnimationUtilities.AnimEffectHandler.HandleAnimNotify
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ACharacter*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NotifyName                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAnimEffectHandler::HandleAnimNotify(class ACharacter* Player, const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimEffectHandler.HandleAnimNotify");
		
		UAnimEffectHandler_HandleAnimNotify_Params params {};
		params.Player = Player;
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimEffectHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimEffectHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.AnimEffectHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075F87F0
	 * 		Name   -> Function AnimationUtilities.AnimInstanceExt.GetSubAnimInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               Root                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAnimInstance* UAnimInstanceExt::STATIC_GetSubAnimInstance(class UAnimInstance* Root, class UClass* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetSubAnimInstance");
		
		UAnimInstanceExt_GetSubAnimInstance_Params params {};
		params.Root = Root;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075F8760
	 * 		Name   -> Function AnimationUtilities.AnimInstanceExt.GetRootSkeletalMeshComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshComponent* UAnimInstanceExt::STATIC_GetRootSkeletalMeshComponent(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetRootSkeletalMeshComponent");
		
		UAnimInstanceExt_GetRootSkeletalMeshComponent_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075F86D0
	 * 		Name   -> Function AnimationUtilities.AnimInstanceExt.GetOwningCharacterSkeletalMeshComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshComponent* UAnimInstanceExt::STATIC_GetOwningCharacterSkeletalMeshComponent(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetOwningCharacterSkeletalMeshComponent");
		
		UAnimInstanceExt_GetOwningCharacterSkeletalMeshComponent_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075F8640
	 * 		Name   -> Function AnimationUtilities.AnimInstanceExt.GetOwningCharacter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACharacter* UAnimInstanceExt::STATIC_GetOwningCharacter(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetOwningCharacter");
		
		UAnimInstanceExt_GetOwningCharacter_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075F85B0
	 * 		Name   -> Function AnimationUtilities.AnimInstanceExt.GetOwningActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UAnimInstanceExt::STATIC_GetOwningActor(class UAnimInstance* AnimInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.AnimInstanceExt.GetOwningActor");
		
		UAnimInstanceExt_GetOwningActor_Params params {};
		params.AnimInstance = AnimInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimInstanceExt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceExt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.AnimInstanceExt");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDetectionFanComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDetectionFanComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.DetectionFanComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UArmDetectionFanComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArmDetectionFanComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.ArmDetectionFanComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075F8F60
	 * 		Name   -> Function AnimationUtilities.BaseGroundDetectorComponent.InitSkinnedMeshComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkinnedMeshComponent*                       Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseGroundDetectorComponent::InitSkinnedMeshComponent(class USkinnedMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.BaseGroundDetectorComponent.InitSkinnedMeshComponent");
		
		UBaseGroundDetectorComponent_InitSkinnedMeshComponent_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075F8E60
	 * 		Name   -> Function AnimationUtilities.BaseGroundDetectorComponent.GetGroundPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     targetPos                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     extraOffset                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UBaseGroundDetectorComponent::GetGroundPosition(const struct FVector& targetPos, const struct FVector& extraOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.BaseGroundDetectorComponent.GetGroundPosition");
		
		UBaseGroundDetectorComponent_GetGroundPosition_Params params {};
		params.targetPos = targetPos;
		params.extraOffset = extraOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseGroundDetectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseGroundDetectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.BaseGroundDetectorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075F9160
	 * 		Name   -> Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        BoneSocketName                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UBoneSocketLocalVelocityEvaluator::GetLocalVelocity(const class FName& BoneSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity");
		
		UBoneSocketLocalVelocityEvaluator_GetLocalVelocity_Params params {};
		params.BoneSocketName = BoneSocketName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBoneSocketLocalVelocityEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoneSocketLocalVelocityEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.BoneSocketLocalVelocityEvaluator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFootGroundDetectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFootGroundDetectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.FootGroundDetectorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFromBoneGroundDetectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFromBoneGroundDetectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.FromBoneGroundDetectorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimInstanceLeader.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstanceLeader::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.AnimInstanceLeader");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075F9D90
	 * 		Name   -> Function AnimationUtilities.MoveComponentToComponent.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMoveComponentToComponent::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.MoveComponentToComponent.Stop");
		
		UMoveComponentToComponent_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075F9C70
	 * 		Name   -> Function AnimationUtilities.MoveComponentToComponent.Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             componentToMove                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USceneComponent*                             Target                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoveComponentToComponent::Start(class USceneComponent* componentToMove, class USceneComponent* Target, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.MoveComponentToComponent.Start");
		
		UMoveComponentToComponent_Start_Params params {};
		params.componentToMove = componentToMove;
		params.Target = Target;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoveComponentToComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveComponentToComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.MoveComponentToComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UResetControlPitchAnimNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResetControlPitchAnimNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.ResetControlPitchAnimNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075FA200
	 * 		Name   -> Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      masterMesh                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USlaveAnimInstance::SetMasterMesh(class USkeletalMeshComponent* masterMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.SlaveAnimInstance.SetMasterMesh");
		
		USlaveAnimInstance_SetMasterMesh_Params params {};
		params.masterMesh = masterMesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x075FA1D0
	 * 		Name   -> Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USkeletalMeshComponent* USlaveAnimInstance::GetMasterMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationUtilities.SlaveAnimInstance.GetMasterMesh");
		
		USlaveAnimInstance_GetMasterMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USlaveAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlaveAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.SlaveAnimInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USleepingSkinnedMeshRegisterer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USleepingSkinnedMeshRegisterer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationUtilities.SleepingSkinnedMeshRegisterer");
		return ptr;
	}

}


