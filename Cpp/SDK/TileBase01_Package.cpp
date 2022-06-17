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
	 * 		Name   -> Function TileBase01.TileBase01_C.SelectSpawnPoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UTileSpawnPoint*>                     Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ATileBase01_C::SelectSpawnPoint(TArray<class UTileSpawnPoint*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SelectSpawnPoint");
		
		ATileBase01_C_SelectSpawnPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      GeneratorSpawnPoint                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UChildActorComponent*>                GeneratorDrivenElements                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ATileBase01_C::SetupGeneratorDrivenElements(class AActor* GeneratorSpawnPoint, TArray<class UChildActorComponent*>* GeneratorDrivenElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetupGeneratorDrivenElements");
		
		ATileBase01_C_SetupGeneratorDrivenElements_Params params {};
		params.GeneratorSpawnPoint = GeneratorSpawnPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GeneratorDrivenElements != nullptr)
			*GeneratorDrivenElements = params.GeneratorDrivenElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TileBase01.TileBase01_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATileBase01_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.ReceiveTick");
		
		ATileBase01_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TileBase01.TileBase01_C.OnLevelLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATileBase01_C::OnLevelLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.OnLevelLoaded");
		
		ATileBase01_C_OnLevelLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTileSpawnPoint*                             SpawnPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      spawnedObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATileBase01_C::SetGeneratorDrivenObjects(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetGeneratorDrivenObjects");
		
		ATileBase01_C_SetGeneratorDrivenObjects_Params params {};
		params.SpawnPoint = SpawnPoint;
		params.spawnedObject = spawnedObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              generators                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ATileBase01_C::SetGeneratorDrivenScoreEvent(TArray<class AActor*> generators)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent");
		
		ATileBase01_C_SetGeneratorDrivenScoreEvent_Params params {};
		params.generators = generators;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TileBase01.TileBase01_C.KNY_StartSnowstorm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATileBase01_C::KNY_StartSnowstorm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.KNY_StartSnowstorm");
		
		ATileBase01_C_KNY_StartSnowstorm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATileBase01_C::ExecuteUbergraph_TileBase01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01");
		
		ATileBase01_C_ExecuteUbergraph_TileBase01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATileBase01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATileBase01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TileBase01.TileBase01_C");
		return ptr;
	}

}


