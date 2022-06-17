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
	 * 		RVA    -> 0x040A12F0
	 * 		Name   -> Function LocationServicesBPLibrary.LocationServices.StopLocationServices
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULocationServices::STATIC_StopLocationServices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.StopLocationServices");
		
		ULocationServices_StopLocationServices_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A12C0
	 * 		Name   -> Function LocationServicesBPLibrary.LocationServices.StartLocationServices
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULocationServices::STATIC_StartLocationServices()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.StartLocationServices");
		
		ULocationServices_StartLocationServices_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A1240
	 * 		Name   -> Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ELocationAccuracy                                  Accuracy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULocationServices::STATIC_IsLocationAccuracyAvailable(ELocationAccuracy Accuracy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable");
		
		ULocationServices_IsLocationAccuracyAvailable_Params params {};
		params.Accuracy = Accuracy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A1130
	 * 		Name   -> Function LocationServicesBPLibrary.LocationServices.InitLocationServices
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		ELocationAccuracy                                  Accuracy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UpdateFrequency                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MinDistanceFilter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULocationServices::STATIC_InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.InitLocationServices");
		
		ULocationServices_InitLocationServices_Params params {};
		params.Accuracy = Accuracy;
		params.UpdateFrequency = UpdateFrequency;
		params.MinDistanceFilter = MinDistanceFilter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A1110
	 * 		Name   -> Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULocationServicesImpl* ULocationServices::STATIC_GetLocationServicesImpl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl");
		
		ULocationServices_GetLocationServicesImpl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A10D0
	 * 		Name   -> Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct FLocationServicesData ULocationServices::STATIC_GetLastKnownLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation");
		
		ULocationServices_GetLastKnownLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A10A0
	 * 		Name   -> Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool ULocationServices::STATIC_AreLocationServicesEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled");
		
		ULocationServices_AreLocationServicesEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULocationServices.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocationServices::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LocationServicesBPLibrary.LocationServices");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULocationServicesImpl.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocationServicesImpl::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LocationServicesBPLibrary.LocationServicesImpl");
		return ptr;
	}

}


