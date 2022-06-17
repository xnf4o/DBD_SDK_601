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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UActorPairQueryEvaluatorUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActorPairQueryEvaluatorUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.ActorPairQueryEvaluatorUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DACB0
	 * 		Name   -> Function DBDGameplay.AimableComponent.SetProcessors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UAimPointProcessor*>                  processors                                                 (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UAimableComponent::SetProcessors(TArray<class UAimPointProcessor*> processors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.AimableComponent.SetProcessors");
		
		UAimableComponent_SetProcessors_Params params {};
		params.processors = processors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DAC00
	 * 		Name   -> Function DBDGameplay.AimableComponent.SetOcclusionIgnoredActors
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class AActor*>                              ignoredActors                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAimableComponent::SetOcclusionIgnoredActors(TArray<class AActor*> ignoredActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.AimableComponent.SetOcclusionIgnoredActors");
		
		UAimableComponent_SetOcclusionIgnoredActors_Params params {};
		params.ignoredActors = ignoredActors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DAA80
	 * 		Name   -> Function DBDGameplay.AimableComponent.SetMaxAimDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              maxAimDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimableComponent::SetMaxAimDistance(float maxAimDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.AimableComponent.SetMaxAimDistance");
		
		UAimableComponent_SetMaxAimDistance_Params params {};
		params.maxAimDistance = maxAimDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAimableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAimableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.AimableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAimDirectionProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAimDirectionProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.AimDirectionProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAimPointProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAimPointProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.AimPointProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DAB80
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetNoiseFrequencyMultiplier(float Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier");
		
		UAimPointPerlinNoise_SetNoiseFrequencyMultiplier_Params params {};
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DAB00
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetNoiseAmplitudeMultiplier(float Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier");
		
		UAimPointPerlinNoise_SetNoiseAmplitudeMultiplier_Params params {};
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA970
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              noisePersistence                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetBaseInaccuracyNoisePersistence(float noisePersistence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence");
		
		UAimPointPerlinNoise_SetBaseInaccuracyNoisePersistence_Params params {};
		params.noisePersistence = noisePersistence;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA8E0
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            octaveCount                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetBaseInaccuracyNoiseOctaveCount(int32_t octaveCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount");
		
		UAimPointPerlinNoise_SetBaseInaccuracyNoiseOctaveCount_Params params {};
		params.octaveCount = octaveCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA860
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Frequency                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetBaseInaccuracyNoiseFrequency(float Frequency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency");
		
		UAimPointPerlinNoise_SetBaseInaccuracyNoiseFrequency_Params params {};
		params.Frequency = Frequency;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA7E0
	 * 		Name   -> Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Amplitude                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAimPointPerlinNoise::SetBaseInaccuracyNoiseAmplitude(float Amplitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude");
		
		UAimPointPerlinNoise_SetBaseInaccuracyNoiseAmplitude_Params params {};
		params.Amplitude = Amplitude;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAimPointPerlinNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAimPointPerlinNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.AimPointPerlinNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA440
	 * 		Name   -> Function DBDGameplay.AuraOverriderComponent.ResetAura
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAuraOverriderComponent::ResetAura(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.AuraOverriderComponent.ResetAura");
		
		UAuraOverriderComponent_ResetAura_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042D9F20
	 * 		Name   -> Function DBDGameplay.AuraOverriderComponent.ForceShowAura
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsAlwaysVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              minimumOutlineDistance                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAuraOverriderComponent::ForceShowAura(class AActor* Actor, const struct FLinearColor& Color, bool IsAlwaysVisible, float minimumOutlineDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.AuraOverriderComponent.ForceShowAura");
		
		UAuraOverriderComponent_ForceShowAura_Params params {};
		params.Actor = Actor;
		params.Color = Color;
		params.IsAlwaysVisible = IsAlwaysVisible;
		params.minimumOutlineDistance = minimumOutlineDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAuraOverriderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAuraOverriderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.AuraOverriderComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseActorAttackableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseActorAttackableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.BaseActorAttackableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABaseCamperCollectable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseCamperCollectable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.BaseCamperCollectable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlashlightableLightingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightableLightingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.FlashlightableLightingStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlashlightablePointsLightingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightablePointsLightingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.FlashlightablePointsLightingStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlindFlashlightableLightingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlindFlashlightableLightingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.BlindFlashlightableLightingStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA310
	 * 		Name   -> Function DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsLit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightTargetFXComponent::OnIsLitChanged(bool IsLit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged");
		
		UFlashlightTargetFXComponent_OnIsLitChanged_Params params {};
		params.IsLit = IsLit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlashlightTargetFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightTargetFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.FlashlightTargetFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlindFlashlightTargetFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlindFlashlightTargetFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.BlindFlashlightTargetFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA0D0
	 * 		Name   -> Function DBDGameplay.CollectableComponentUtilities.GetCollector
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ADBDPlayer* UCollectableComponentUtilities::STATIC_GetCollector(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.CollectableComponentUtilities.GetCollector");
		
		UCollectableComponentUtilities_GetCollector_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCollectableComponentUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectableComponentUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.CollectableComponentUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDBDCharacterPusherComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDCharacterPusherComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.DBDCharacterPusherComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DADA0
	 * 		Name   -> Function DBDGameplay.DebugIndicator.SetVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               visible                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADebugIndicator::SetVisible(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.DebugIndicator.SetVisible");
		
		ADebugIndicator_SetVisible_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA9F0
	 * 		Name   -> Function DBDGameplay.DebugIndicator.SetColor
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ADebugIndicator::SetColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.DebugIndicator.SetColor");
		
		ADebugIndicator_SetColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ADebugIndicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADebugIndicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.DebugIndicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA6E0
	 * 		Name   -> Function DBDGameplay.EtherealComponent.Server_SetIsEthereal
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		float                                              Timestamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Ethereal                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEtherealComponent::Server_SetIsEthereal(float Timestamp, bool Ethereal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.EtherealComponent.Server_SetIsEthereal");
		
		UEtherealComponent_Server_SetIsEthereal_Params params {};
		params.Timestamp = Timestamp;
		params.Ethereal = Ethereal;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA3C0
	 * 		Name   -> Function DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UEtherealComponent::OnRep_OnIsEtherealChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged");
		
		UEtherealComponent_OnRep_OnIsEtherealChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UEtherealComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEtherealComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.EtherealComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E02D0
	 * 		Name   -> Function DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               InRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URangeToActorsTrackerStrategy::OnInRangeToTrackedActorsChanged(bool InRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged");
		
		URangeToActorsTrackerStrategy_OnInRangeToTrackedActorsChanged_Params params {};
		params.InRange = InRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URangeToActorsTrackerStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeToActorsTrackerStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UExitGateSwitchesRangeTrackerStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExitGateSwitchesRangeTrackerStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.ExitGateSwitchesRangeTrackerStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA220
	 * 		Name   -> Function DBDGameplay.FadeComponent.GetFadePercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFadeComponent::GetFadePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FadeComponent.GetFadePercent");
		
		UFadeComponent_GetFadePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFadeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFadeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.FadeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA4D0
	 * 		Name   -> Function DBDGameplay.Flashlight.Server_ChangeFlashlightCooldownMode
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class AFlashlight*                                 Flashlight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            flashlightCooldownMode                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              cooldownWhileOnDuration                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              cooldownWhileOffDuration                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlashlight::Server_ChangeFlashlightCooldownMode(class AFlashlight* Flashlight, int32_t flashlightCooldownMode, float cooldownWhileOnDuration, float cooldownWhileOffDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.Flashlight.Server_ChangeFlashlightCooldownMode");
		
		AFlashlight_Server_ChangeFlashlightCooldownMode_Params params {};
		params.Flashlight = Flashlight;
		params.flashlightCooldownMode = flashlightCooldownMode;
		params.cooldownWhileOnDuration = cooldownWhileOnDuration;
		params.cooldownWhileOffDuration = cooldownWhileOffDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA280
	 * 		Name   -> Function DBDGameplay.Flashlight.GetSpotlightComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class USpotLightComponent* AFlashlight::GetSpotlightComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.Flashlight.GetSpotlightComponent");
		
		AFlashlight_GetSpotlightComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042D9E10
	 * 		Name   -> Function DBDGameplay.Flashlight.DBD_ChangeHeldFlashlightCooldownMode
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		int32_t                                            flashlightCooldownMode                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              cooldownWhileOnDuration                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              cooldownWhileOffDuration                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlashlight::DBD_ChangeHeldFlashlightCooldownMode(int32_t flashlightCooldownMode, float cooldownWhileOnDuration, float cooldownWhileOffDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.Flashlight.DBD_ChangeHeldFlashlightCooldownMode");
		
		AFlashlight_DBD_ChangeHeldFlashlightCooldownMode_Params params {};
		params.flashlightCooldownMode = flashlightCooldownMode;
		params.cooldownWhileOnDuration = cooldownWhileOnDuration;
		params.cooldownWhileOffDuration = cooldownWhileOffDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042D9E10
	 * 		Name   -> Function DBDGameplay.Flashlight.DBD_ChangeAllFlashlightsCooldownMode
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		int32_t                                            flashlightCooldownMode                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              cooldownWhileOnDuration                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              cooldownWhileOffDuration                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AFlashlight::DBD_ChangeAllFlashlightsCooldownMode(int32_t flashlightCooldownMode, float cooldownWhileOnDuration, float cooldownWhileOffDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.Flashlight.DBD_ChangeAllFlashlightsCooldownMode");
		
		AFlashlight_DBD_ChangeAllFlashlightsCooldownMode_Params params {};
		params.flashlightCooldownMode = flashlightCooldownMode;
		params.cooldownWhileOnDuration = cooldownWhileOnDuration;
		params.cooldownWhileOffDuration = cooldownWhileOffDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AFlashlight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlashlight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.Flashlight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightLitChangedEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               IsLit                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightableComponent::OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightLitChangedEvent__DelegateSignature");
		
		UFlashlightableComponent_OnFlashlightLitChangedEvent__DelegateSignature_Params params {};
		params.IsLit = IsLit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UFlashlightComponent*                        Flashlight                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightableComponent::OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.FlashlightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature");
		
		UFlashlightableComponent_OnFlashlightAddedRemovedEvent__DelegateSignature_Params params {};
		params.Flashlight = Flashlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA2B0
	 * 		Name   -> Function DBDGameplay.FlashlightableComponent.IsLit
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFlashlightableComponent::IsLit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightableComponent.IsLit");
		
		UFlashlightableComponent_IsLit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlashlightableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.FlashlightableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DAE50
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.TurnOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFlashlightComponent::TurnOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.TurnOn");
		
		UFlashlightComponent_TurnOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DAE30
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.TurnOff
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFlashlightComponent::TurnOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.TurnOff");
		
		UFlashlightComponent_TurnOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA620
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		TArray<class UFlashlightableComponent*>            newLitFlashlightables                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UFlashlightComponent::Server_SetAndUpdateAutonomousLitFlashlightables(TArray<class UFlashlightableComponent*> newLitFlashlightables)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables");
		
		UFlashlightComponent_Server_SetAndUpdateAutonomousLitFlashlightables_Params params {};
		params.newLitFlashlightables = newLitFlashlightables;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA3E0
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlashlightComponent::OnRep_ReplicatedLitFlashlightables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables");
		
		UFlashlightComponent_OnRep_ReplicatedLitFlashlightables_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA3A0
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlashlightComponent::OnRep_IsOwnerLagging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging");
		
		UFlashlightComponent_OnRep_IsOwnerLagging_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UFlashlightComponent::OnFlashlightEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature");
		
		UFlashlightComponent_OnFlashlightEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA2E0
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.IsOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFlashlightComponent::IsOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.IsOn");
		
		UFlashlightComponent_IsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA1F0
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightComponent::GetEffectiveTimeToBlindModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier");
		
		UFlashlightComponent_GetEffectiveTimeToBlindModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA160
	 * 		Name   -> Function DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightComponent::GetEffectiveBlindnessDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration");
		
		UFlashlightComponent_GetEffectiveBlindnessDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlashlightComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.FlashlightComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA250
	 * 		Name   -> Function DBDGameplay.FlashlightConeComponent.GetOcclusionDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightConeComponent::GetOcclusionDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightConeComponent.GetOcclusionDistance");
		
		UFlashlightConeComponent_GetOcclusionDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA1C0
	 * 		Name   -> Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightConeComponent::GetEffectiveConeLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength");
		
		UFlashlightConeComponent_GetEffectiveConeLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA190
	 * 		Name   -> Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightConeComponent::GetEffectiveConeHalfAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle");
		
		UFlashlightConeComponent_GetEffectiveConeHalfAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlashlightConeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightConeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.FlashlightConeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DAE70
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.UpdateFXTargets
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlashlightFXComponent::UpdateFXTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.UpdateFXTargets");
		
		UFlashlightFXComponent_UpdateFXTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.UpdateConeEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              halfAngle                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightFXComponent::UpdateConeEvent(float Length, float halfAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.UpdateConeEvent");
		
		UFlashlightFXComponent_UpdateConeEvent_Params params {};
		params.Length = Length;
		params.halfAngle = halfAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.PostUpdateEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlashlightFXComponent::PostUpdateEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.PostUpdateEvent");
		
		UFlashlightFXComponent_PostUpdateEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA420
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnTurnedOn
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlashlightFXComponent::OnTurnedOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnTurnedOn");
		
		UFlashlightFXComponent_OnTurnedOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA400
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnTurnedOff
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlashlightFXComponent::OnTurnedOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnTurnedOff");
		
		UFlashlightFXComponent_OnTurnedOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnStopEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlashlightFXComponent::OnStopEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnStopEvent");
		
		UFlashlightFXComponent_OnStopEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnStartEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlashlightFXComponent::OnStartEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnStartEvent");
		
		UFlashlightFXComponent_OnStartEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UFlashlightFXComponent::OnFlashEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature");
		
		UFlashlightFXComponent_OnFlashEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnDroppedEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UFlashlightFXComponent::OnDroppedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnDroppedEvent");
		
		UFlashlightFXComponent_OnDroppedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsLocallyObserved                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightFXComponent::OnCollectorLocallyObservedChangedEvent(bool IsLocallyObserved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent");
		
		UFlashlightFXComponent_OnCollectorLocallyObservedChangedEvent_Params params {};
		params.IsLocallyObserved = IsLocallyObserved;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.OnCollectedEvent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  collector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashlightFXComponent::OnCollectedEvent(class ADBDPlayer* collector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.OnCollectedEvent");
		
		UFlashlightFXComponent_OnCollectedEvent_Params params {};
		params.collector = collector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DA0A0
	 * 		Name   -> Function DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashlightFXComponent::GetBlindingSuccessRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio");
		
		UFlashlightFXComponent_GetBlindingSuccessRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlashlightFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.FlashlightFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFlashlightUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashlightUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.FlashlightUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHooksWithSurvivorRangeTrackerStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHooksWithSurvivorRangeTrackerStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.HooksWithSurvivorRangeTrackerStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0490
	 * 		Name   -> Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInteractionStarterComponent::OnRep_ShouldStartInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction");
		
		UInteractionStarterComponent_OnRep_ShouldStartInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0360
	 * 		Name   -> Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInteractionStarterComponent::OnInteractionStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.InteractionStarterComponent.OnInteractionStarted");
		
		UInteractionStarterComponent_OnInteractionStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UInteractionStarterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionStarterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.InteractionStarterComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKillerFlashlightSFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerFlashlightSFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.KillerFlashlightSFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0450
	 * 		Name   -> Function DBDGameplay.LightBurnable.OnRep_IsBurning
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULightBurnable::OnRep_IsBurning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.LightBurnable.OnRep_IsBurning");
		
		ULightBurnable_OnRep_IsBurning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0150
	 * 		Name   -> Function DBDGameplay.LightBurnable.OnChargeableCompleteEvent
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		bool                                               COMPLETED                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULightBurnable::OnChargeableCompleteEvent(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.LightBurnable.OnChargeableCompleteEvent");
		
		ULightBurnable_OnChargeableCompleteEvent_Params params {};
		params.COMPLETED = COMPLETED;
		params.instigatorsForCompletion = instigatorsForCompletion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0130
	 * 		Name   -> Function DBDGameplay.LightBurnable.OnBurnChargeEmpty
	 * 		Flags  -> (Native, Protected)
	 */
	void ULightBurnable::OnBurnChargeEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.LightBurnable.OnBurnChargeEmpty");
		
		ULightBurnable_OnBurnChargeEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDGameplay.LightBurnable.OnBurnChargeCompleteEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
	 * Parameters:
	 * 		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULightBurnable::OnBurnChargeCompleteEvent__DelegateSignature(TArray<class AActor*> instigatorsForCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.LightBurnable.OnBurnChargeCompleteEvent__DelegateSignature");
		
		ULightBurnable_OnBurnChargeCompleteEvent__DelegateSignature_Params params {};
		params.instigatorsForCompletion = instigatorsForCompletion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF240
	 * 		Name   -> Function DBDGameplay.LightBurnable.Authority_OnFlashlightAddedRemoved
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UFlashlightComponent*                        Flashlight                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULightBurnable::Authority_OnFlashlightAddedRemoved(class UFlashlightComponent* Flashlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.LightBurnable.Authority_OnFlashlightAddedRemoved");
		
		ULightBurnable_Authority_OnFlashlightAddedRemoved_Params params {};
		params.Flashlight = Flashlight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF1A0
	 * 		Name   -> Function DBDGameplay.LightBurnable.Authority_OnFirecrackerInRangeBegin
	 * 		Flags  -> (Native, Protected, HasOutParms)
	 * Parameters:
	 * 		struct FFirecrackerEffectData                      effectData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULightBurnable::Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.LightBurnable.Authority_OnFirecrackerInRangeBegin");
		
		ULightBurnable_Authority_OnFirecrackerInRangeBegin_Params params {};
		params.effectData = effectData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULightBurnable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBurnable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.LightBurnable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULightBurnableFlashlightTargetFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULightBurnableFlashlightTargetFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.LightBurnableFlashlightTargetFXComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E09B0
	 * 		Name   -> Function DBDGameplay.Medkit.UseCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMedkit::UseCharge(float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.UseCharge");
		
		AMedkit_UseCharge_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E03A0
	 * 		Name   -> Function DBDGameplay.Medkit.OnMedkitHealedCamper
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  healedPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMedkit::OnMedkitHealedCamper(class ADBDPlayer* healedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.OnMedkitHealedCamper");
		
		AMedkit_OnMedkitHealedCamper_Params params {};
		params.healedPlayer = healedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF320
	 * 		Name   -> Function DBDGameplay.Medkit.HasCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AMedkit::HasCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.HasCharge");
		
		AMedkit_HasCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF2F0
	 * 		Name   -> Function DBDGameplay.Medkit.GetChargeMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AMedkit::GetChargeMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.GetChargeMultiplier");
		
		AMedkit_GetChargeMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF110
	 * 		Name   -> Function DBDGameplay.Medkit.Authority_OnChargeStateChange
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               Empty                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMedkit::Authority_OnChargeStateChange(bool Empty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.Authority_OnChargeStateChange");
		
		AMedkit_Authority_OnChargeStateChange_Params params {};
		params.Empty = Empty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF080
	 * 		Name   -> Function DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		bool                                               IsInteracting                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AMedkit::Authority_OnAnyOngoingInteractionChanged(bool IsInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged");
		
		AMedkit_Authority_OnAnyOngoingInteractionChanged_Params params {};
		params.IsInteracting = IsInteracting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF060
	 * 		Name   -> Function DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AMedkit::Authority_ConsumeIfNotInteracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting");
		
		AMedkit_Authority_ConsumeIfNotInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMedkit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMedkit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.Medkit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPointsProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPointsProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.PointsProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshSocketPointsProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshSocketPointsProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.MeshSocketPointsProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0080
	 * 		Name   -> Function DBDGameplay.MoveToGroundComponent.MoveOwnerToGround
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UMoveToGroundComponent::MoveOwnerToGround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.MoveToGroundComponent.MoveOwnerToGround");
		
		UMoveToGroundComponent_MoveOwnerToGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoveToGroundComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoveToGroundComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.MoveToGroundComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMultiSceneComponentPointProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiSceneComponentPointProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.MultiSceneComponentPointProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerCameraAimDirectionProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerCameraAimDirectionProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.PlayerCameraAimDirectionProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E08D0
	 * 		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionStart
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::UnlistenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionStart");
		
		UPlayerInteractionListenerComponent_UnlistenToInteractionStart_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E07F0
	 * 		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionEnd
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::UnlistenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionEnd");
		
		UPlayerInteractionListenerComponent_UnlistenToInteractionEnd_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E00A0
	 * 		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.OnActorDestroyed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::OnActorDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerInteractionListenerComponent.OnActorDestroyed");
		
		UPlayerInteractionListenerComponent_OnActorDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF540
	 * 		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionStart
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              interactionDelegate                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::ListenToInteractionStart(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const class FScriptDelegate& interactionDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionStart");
		
		UPlayerInteractionListenerComponent_ListenToInteractionStart_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		params.interactionDelegate = interactionDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF3E0
	 * 		Name   -> Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionEnd
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              interactionDelegate                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::ListenToInteractionEnd(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic, const class FScriptDelegate& interactionDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionEnd");
		
		UPlayerInteractionListenerComponent_ListenToInteractionEnd_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		params.interactionDelegate = interactionDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionMulticastDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::InteractionMulticastDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionMulticastDelegate__DelegateSignature");
		
		UPlayerInteractionListenerComponent_InteractionMulticastDelegate__DelegateSignature_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionDelegate__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                interactionSemantic                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerInteractionListenerComponent::InteractionDelegate__DelegateSignature(class ADBDPlayer* Player, const struct FGameplayTag& interactionSemantic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction DBDGameplay.PlayerInteractionListenerComponent.InteractionDelegate__DelegateSignature");
		
		UPlayerInteractionListenerComponent_InteractionDelegate__DelegateSignature_Params params {};
		params.Player = Player;
		params.interactionSemantic = interactionSemantic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerInteractionListenerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerInteractionListenerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.PlayerInteractionListenerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerLightBurnable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerLightBurnable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.PlayerLightBurnable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DFFA0
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 Curve                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_SetGamepadYawCurve(class ADBDPlayer* Player, class UCurveFloat* Curve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve");
		
		UPlayerMovementUtilities_Local_SetGamepadYawCurve_Params params {};
		params.Player = Player;
		params.Curve = Curve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DFEE0
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 Curve                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_SetGamepadPitchCurve(class ADBDPlayer* Player, class UCurveFloat* Curve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve");
		
		UPlayerMovementUtilities_Local_SetGamepadPitchCurve_Params params {};
		params.Player = Player;
		params.Curve = Curve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DFE20
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ResetRotationScale(class ADBDPlayer* Player, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale");
		
		UPlayerMovementUtilities_Local_ResetRotationScale_Params params {};
		params.Player = Player;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DFDA0
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ResetGamepadLookCurves(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves");
		
		UPlayerMovementUtilities_Local_ResetGamepadLookCurves_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DFCA0
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier");
		
		UPlayerMovementUtilities_Local_ApplyYawScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DFBA0
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyRotationScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier");
		
		UPlayerMovementUtilities_Local_ApplyRotationScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DFAA0
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier");
		
		UPlayerMovementUtilities_Local_ApplyPitchScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF9A0
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyMouseYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier");
		
		UPlayerMovementUtilities_Local_ApplyMouseYawScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF8A0
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyMousePitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier");
		
		UPlayerMovementUtilities_Local_ApplyMousePitchScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF7A0
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyGamepadYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier");
		
		UPlayerMovementUtilities_Local_ApplyGamepadYawScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF6A0
	 * 		Name   -> Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Multiplier                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              adjustmentTime                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerMovementUtilities::STATIC_Local_ApplyGamepadPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier");
		
		UPlayerMovementUtilities_Local_ApplyGamepadPitchScaleMultiplier_Params params {};
		params.Player = Player;
		params.Multiplier = Multiplier;
		params.adjustmentTime = adjustmentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerMovementUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerMovementUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.PlayerMovementUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0700
	 * 		Name   -> Function DBDGameplay.PoseableHusk.SetScalarParameterOnAllChildrenMeshes
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APoseableHusk::SetScalarParameterOnAllChildrenMeshes(const class FName& ParameterName, float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PoseableHusk.SetScalarParameterOnAllChildrenMeshes");
		
		APoseableHusk_SetScalarParameterOnAllChildrenMeshes_Params params {};
		params.ParameterName = ParameterName;
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0670
	 * 		Name   -> Function DBDGameplay.PoseableHusk.SetHuskVisibility
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APoseableHusk::SetHuskVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PoseableHusk.SetHuskVisibility");
		
		APoseableHusk_SetHuskVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF350
	 * 		Name   -> Function DBDGameplay.PoseableHusk.InitializeHusk
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCustomizedSkeletalMesh*                     customizedSkeletalMeshToCopy                               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void APoseableHusk::InitializeHusk(class UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PoseableHusk.InitializeHusk");
		
		APoseableHusk_InitializeHusk_Params params {};
		params.customizedSkeletalMeshToCopy = customizedSkeletalMeshToCopy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDGameplay.PoseableHusk.Cosmetic_OnAnimationPoseCaptured
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void APoseableHusk::Cosmetic_OnAnimationPoseCaptured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PoseableHusk.Cosmetic_OnAnimationPoseCaptured");
		
		APoseableHusk_Cosmetic_OnAnimationPoseCaptured_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function DBDGameplay.PoseableHusk.Cosmetic_InitializeHusk
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void APoseableHusk::Cosmetic_InitializeHusk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PoseableHusk.Cosmetic_InitializeHusk");
		
		APoseableHusk_Cosmetic_InitializeHusk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042DF2D0
	 * 		Name   -> Function DBDGameplay.PoseableHusk.CapturePose
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void APoseableHusk::CapturePose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PoseableHusk.CapturePose");
		
		APoseableHusk_CapturePose_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction APoseableHusk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APoseableHusk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.PoseableHusk");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPositionLagCompensationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPositionLagCompensationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.PositionLagCompensationComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0430
	 * 		Name   -> Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPowerChargeComponent::OnRep_CurrentCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge");
		
		UPowerChargeComponent_OnRep_CurrentCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0250
	 * 		Name   -> Function DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPowerChargeComponent::OnCurrentChargeChanged(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged");
		
		UPowerChargeComponent_OnCurrentChargeChanged_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPowerChargeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerChargeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.PowerChargeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPowerChargePresentationItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerChargePresentationItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.PowerChargePresentationItemProgressComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0470
	 * 		Name   -> Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UPowerToggleComponent::OnRep_IsInPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.PowerToggleComponent.OnRep_IsInPower");
		
		UPowerToggleComponent_OnRep_IsInPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPowerToggleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPowerToggleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.PowerToggleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0380
	 * 		Name   -> Function DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void URangeToActorsTrackerComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay");
		
		URangeToActorsTrackerComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URangeToActorsTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeToActorsTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction URangeToActorsTrackerDefaultStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URangeToActorsTrackerDefaultStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.RangeToActorsTrackerDefaultStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USceneComponentPointProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USceneComponentPointProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.SceneComponentPointProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USightRevealableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USightRevealableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.SightRevealableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E04B0
	 * 		Name   -> Function DBDGameplay.StruggleComponent.OnSkillCheckEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStruggleComponent::OnSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.StruggleComponent.OnSkillCheckEnd");
		
		UStruggleComponent_OnSkillCheckEnd_Params params {};
		params.hadInput = hadInput;
		params.success = success;
		params.Bonus = Bonus;
		params.Type = Type;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E0060
	 * 		Name   -> Function DBDGameplay.StruggleComponent.Local_TryActivateSkillCheck
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UStruggleComponent::Local_TryActivateSkillCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.StruggleComponent.Local_TryActivateSkillCheck");
		
		UStruggleComponent_Local_TryActivateSkillCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UStruggleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStruggleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.StruggleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USurvivorAimStanceCameraDirectionProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorAimStanceCameraDirectionProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.SurvivorAimStanceCameraDirectionProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USurvivorAimStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorAimStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.SurvivorAimStateComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTracingConeFlashlightableLightingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTracingConeFlashlightableLightingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.TracingConeFlashlightableLightingStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUnhookedSurvivorTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnhookedSurvivorTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.UnhookedSurvivorTrackerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVisibleHatchRangeTrackerStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisibleHatchRangeTrackerStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.VisibleHatchRangeTrackerStrategy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E2380
	 * 		Name   -> Function DBDGameplay.WiggleComponent.Server_SetPlayerWiggleSkillCheckEnabled
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::Server_SetPlayerWiggleSkillCheckEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.Server_SetPlayerWiggleSkillCheckEnabled");
		
		UWiggleComponent_Server_SetPlayerWiggleSkillCheckEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E2360
	 * 		Name   -> Function DBDGameplay.WiggleComponent.Server_OnWiggleEnd
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 */
	void UWiggleComponent::Server_OnWiggleEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.Server_OnWiggleEnd");
		
		UWiggleComponent_Server_OnWiggleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1FE0
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnWiggleSkillCheckEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.OnWiggleSkillCheckEnd");
		
		UWiggleComponent_OnWiggleSkillCheckEnd_Params params {};
		params.hadInput = hadInput;
		params.success = success;
		params.Bonus = Bonus;
		params.Type = Type;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1FC0
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnWiggleInput
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleComponent::OnWiggleInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.OnWiggleInput");
		
		UWiggleComponent_OnWiggleInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1FA0
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnWiggleEnd
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleComponent::OnWiggleEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.OnWiggleEnd");
		
		UWiggleComponent_OnWiggleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1DF0
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnPlayerPickedUpStart
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::OnPlayerPickedUpStart(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.OnPlayerPickedUpStart");
		
		UWiggleComponent_OnPlayerPickedUpStart_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1D60
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnPlayerPickedUpEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::OnPlayerPickedUpEnd(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.OnPlayerPickedUpEnd");
		
		UWiggleComponent_OnPlayerPickedUpEnd_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1BA0
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnPickedUpSkillCheckEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.OnPickedUpSkillCheckEnd");
		
		UWiggleComponent_OnPickedUpSkillCheckEnd_Params params {};
		params.hadInput = hadInput;
		params.success = success;
		params.Bonus = Bonus;
		params.Type = Type;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1B80
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnKeyBindingsChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleComponent::OnKeyBindingsChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.OnKeyBindingsChanged");
		
		UWiggleComponent_OnKeyBindingsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1A80
	 * 		Name   -> Function DBDGameplay.WiggleComponent.OnHideWiggleSkillCheck
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::OnHideWiggleSkillCheck(ESkillCheckCustomType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.OnHideWiggleSkillCheck");
		
		UWiggleComponent_OnHideWiggleSkillCheck_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1A60
	 * 		Name   -> Function DBDGameplay.WiggleComponent.Local_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleComponent::Local_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.Local_OnLevelReadyToPlay");
		
		UWiggleComponent_Local_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1A30
	 * 		Name   -> Function DBDGameplay.WiggleComponent.GetWiggleChargeable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UChargeableComponent* UWiggleComponent::GetWiggleChargeable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.GetWiggleChargeable");
		
		UWiggleComponent_GetWiggleChargeable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03D89CF0
	 * 		Name   -> Function DBDGameplay.WiggleComponent.DBD_SetWiggleProgress
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              ProgressPercent                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::DBD_SetWiggleProgress(float ProgressPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.DBD_SetWiggleProgress");
		
		UWiggleComponent_DBD_SetWiggleProgress_Params params {};
		params.ProgressPercent = ProgressPercent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E17E0
	 * 		Name   -> Function DBDGameplay.WiggleComponent.Authority_AddWiggleCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ChargeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleComponent::Authority_AddWiggleCharge(float ChargeAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleComponent.Authority_AddWiggleCharge");
		
		UWiggleComponent_Authority_AddWiggleCharge_Params params {};
		params.ChargeAmount = ChargeAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWiggleComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWiggleComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.WiggleComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1A10
	 * 		Name   -> Function DBDGameplay.WiggleFreeComponent.Authority_OnWiggleEnd
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleFreeComponent::Authority_OnWiggleEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleFreeComponent.Authority_OnWiggleEnd");
		
		UWiggleFreeComponent_Authority_OnWiggleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1980
	 * 		Name   -> Function DBDGameplay.WiggleFreeComponent.Authority_OnPlayerPickedUpEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleFreeComponent::Authority_OnPlayerPickedUpEnd(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleFreeComponent.Authority_OnPlayerPickedUpEnd");
		
		UWiggleFreeComponent_Authority_OnPlayerPickedUpEnd_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1960
	 * 		Name   -> Function DBDGameplay.WiggleFreeComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWiggleFreeComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleFreeComponent.Authority_OnLevelReadyToPlay");
		
		UWiggleFreeComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1860
	 * 		Name   -> Function DBDGameplay.WiggleFreeComponent.Authority_OnChargeableCompleteEvent
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		bool                                               COMPLETED                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UWiggleFreeComponent::Authority_OnChargeableCompleteEvent(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleFreeComponent.Authority_OnChargeableCompleteEvent");
		
		UWiggleFreeComponent_Authority_OnChargeableCompleteEvent_Params params {};
		params.COMPLETED = COMPLETED;
		params.instigatorsForCompletion = instigatorsForCompletion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWiggleFreeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWiggleFreeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.WiggleFreeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E2410
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.SetIsBeingWiggled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isBeingWiggled                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::SetIsBeingWiggled(bool isBeingWiggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleMotionComponent.SetIsBeingWiggled");
		
		UWiggleMotionComponent_SetIsBeingWiggled_Params params {};
		params.isBeingWiggled = isBeingWiggled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E2380
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.Server_SetIsBeingWiggled
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		bool                                               isBeingWiggled                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::Server_SetIsBeingWiggled(bool isBeingWiggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleMotionComponent.Server_SetIsBeingWiggled");
		
		UWiggleMotionComponent_Server_SetIsBeingWiggled_Params params {};
		params.isBeingWiggled = isBeingWiggled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E21A0
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.OnWiggleSkillCheckEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleMotionComponent.OnWiggleSkillCheckEnd");
		
		UWiggleMotionComponent_OnWiggleSkillCheckEnd_Params params {};
		params.hadInput = hadInput;
		params.success = success;
		params.Bonus = Bonus;
		params.Type = Type;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1F10
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.OnSurvivorRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::OnSurvivorRemoved(class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleMotionComponent.OnSurvivorRemoved");
		
		UWiggleMotionComponent_OnSurvivorRemoved_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1E80
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.OnSurvivorPickedUp
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::OnSurvivorPickedUp(class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleMotionComponent.OnSurvivorPickedUp");
		
		UWiggleMotionComponent_OnSurvivorPickedUp_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x042E1B00
	 * 		Name   -> Function DBDGameplay.WiggleMotionComponent.OnHideWiggleSkillCheck
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWiggleMotionComponent::OnHideWiggleSkillCheck(ESkillCheckCustomType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DBDGameplay.WiggleMotionComponent.OnHideWiggleSkillCheck");
		
		UWiggleMotionComponent_OnHideWiggleSkillCheck_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWiggleMotionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWiggleMotionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DBDGameplay.WiggleMotionComponent");
		return ptr;
	}

}


