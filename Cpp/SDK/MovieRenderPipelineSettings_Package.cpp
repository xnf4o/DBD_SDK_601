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
	 * 		Name   -> PredefindFunction UMoviePipelineBurnInSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineBurnInSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineSettings.MoviePipelineBurnInSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UMoviePipeline*                              ForPipeline                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMoviePipelineBurnInWidget::OnOutputFrameStarted(class UMoviePipeline* ForPipeline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MovieRenderPipelineSettings.MoviePipelineBurnInWidget.OnOutputFrameStarted");
		
		UMoviePipelineBurnInWidget_OnOutputFrameStarted_Params params {};
		params.ForPipeline = ForPipeline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineBurnInWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineBurnInWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineSettings.MoviePipelineBurnInWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineConsoleVariableSetting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineConsoleVariableSetting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineSettings.MoviePipelineConsoleVariableSetting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineWidgetRenderer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineWidgetRenderer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineSettings.MoviePipelineWidgetRenderer");
		return ptr;
	}

}


