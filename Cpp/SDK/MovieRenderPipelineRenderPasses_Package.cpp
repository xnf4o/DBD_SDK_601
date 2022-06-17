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
	 * 		Name   -> PredefindFunction UMoviePipelineImagePassBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineImagePassBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineImagePassBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineDeferredPassBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineDeferredPassBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPassBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineDeferredPass_Unlit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineDeferredPass_Unlit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_Unlit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineDeferredPass_DetailLighting.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineDeferredPass_DetailLighting::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_DetailLighting");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineDeferredPass_LightingOnly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineDeferredPass_LightingOnly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_LightingOnly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineDeferredPass_ReflectionsOnly.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineDeferredPass_ReflectionsOnly::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_ReflectionsOnly");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineDeferredPass_PathTracer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineDeferredPass_PathTracer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineDeferredPass_PathTracer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineImageSequenceOutputBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineImageSequenceOutputBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutputBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineImageSequenceOutput_EXR.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineImageSequenceOutput_EXR::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_EXR");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineImageSequenceOutput_BMP.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineImageSequenceOutput_BMP::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_BMP");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineImageSequenceOutput_PNG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineImageSequenceOutput_PNG::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_PNG");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineImageSequenceOutput_JPG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineImageSequenceOutput_JPG::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineImageSequenceOutput_JPG");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMoviePipelineWaveOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMoviePipelineWaveOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MovieRenderPipelineRenderPasses.MoviePipelineWaveOutput");
		return ptr;
	}

}


