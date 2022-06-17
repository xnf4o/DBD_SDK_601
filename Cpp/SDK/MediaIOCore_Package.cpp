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
	 * 		RVA    -> 0x036BCF90
	 * 		Name   -> Function MediaIOCore.MediaOutput.Validate
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      OutFailureReason                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaOutput::Validate(class FString* OutFailureReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaOutput.Validate");
		
		UMediaOutput_Validate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutFailureReason != nullptr)
			*OutFailureReason = params.OutFailureReason;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036BCD20
	 * 		Name   -> Function MediaIOCore.MediaOutput.CreateMediaCapture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UMediaCapture* UMediaOutput::CreateMediaCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaOutput.CreateMediaCapture");
		
		UMediaOutput_CreateMediaCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMediaOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaIOCore.MediaOutput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036BCEF0
	 * 		Name   -> Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaCapture::UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D");
		
		UMediaCapture_UpdateTextureRenderTarget2D_Params params {};
		params.RenderTarget = RenderTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036BCE60
	 * 		Name   -> Function MediaIOCore.MediaCapture.StopCapture
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllowPendingFrameToBeProcess                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaCapture::StopCapture(bool bAllowPendingFrameToBeProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.StopCapture");
		
		UMediaCapture_StopCapture_Params params {};
		params.bAllowPendingFrameToBeProcess = bAllowPendingFrameToBeProcess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036BCDD0
	 * 		Name   -> Function MediaIOCore.MediaCapture.SetMediaOutput
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaOutput*                                InMediaOutput                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaCapture::SetMediaOutput(class UMediaOutput* InMediaOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.SetMediaOutput");
		
		UMediaCapture_SetMediaOutput_Params params {};
		params.InMediaOutput = InMediaOutput;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036BCDA0
	 * 		Name   -> Function MediaIOCore.MediaCapture.GetState
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EMediaCaptureState UMediaCapture::GetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetState");
		
		UMediaCapture_GetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036BCD70
	 * 		Name   -> Function MediaIOCore.MediaCapture.GetDesiredSize
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FIntPoint UMediaCapture::GetDesiredSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetDesiredSize");
		
		UMediaCapture_GetDesiredSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036BCD50
	 * 		Name   -> Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EPixelFormat UMediaCapture::GetDesiredPixelFormat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.GetDesiredPixelFormat");
		
		UMediaCapture_GetDesiredPixelFormat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036BCC30
	 * 		Name   -> Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMediaCaptureOptions                        CaptureOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMediaCapture::CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D");
		
		UMediaCapture_CaptureTextureRenderTarget2D_Params params {};
		params.RenderTarget = RenderTarget;
		params.CaptureOptions = CaptureOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x036BCB90
	 * 		Name   -> Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FMediaCaptureOptions                        CaptureOptions                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMediaCapture::CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport");
		
		UMediaCapture_CaptureActiveSceneViewport_Params params {};
		params.CaptureOptions = CaptureOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMediaCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaIOCore.MediaCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFileMediaCapture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFileMediaCapture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaIOCore.FileMediaCapture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UFileMediaOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFileMediaOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaIOCore.FileMediaOutput");
		return ptr;
	}

}


