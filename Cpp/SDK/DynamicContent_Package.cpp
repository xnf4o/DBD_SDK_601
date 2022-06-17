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
	 * 		Name   -> PredefindFunction UAsyncTaskDownloadCacheImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAsyncTaskDownloadCacheImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicContent.AsyncTaskDownloadCacheImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07674C60
	 * 		Name   -> Function DynamicContent.DownloadingTextureTask.OnDownloadSucceeded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UTexture2DDynamic*                           textureDownloaded                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDownloadingTextureTask::OnDownloadSucceeded(class UTexture2DDynamic* textureDownloaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicContent.DownloadingTextureTask.OnDownloadSucceeded");
		
		UDownloadingTextureTask_OnDownloadSucceeded_Params params {};
		params.textureDownloaded = textureDownloaded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07674BD0
	 * 		Name   -> Function DynamicContent.DownloadingTextureTask.OnDownloadFailed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UTexture2DDynamic*                           textureDownloaded                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDownloadingTextureTask::OnDownloadFailed(class UTexture2DDynamic* textureDownloaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicContent.DownloadingTextureTask.OnDownloadFailed");
		
		UDownloadingTextureTask_OnDownloadFailed_Params params {};
		params.textureDownloaded = textureDownloaded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDownloadingTextureTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloadingTextureTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicContent.DownloadingTextureTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x07674E50
	 * 		Name   -> Function DynamicContent.DownloadMultiTextureTask.OnTextureDownloadComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UDownloadingTextureTask*                     taskCompleted                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDownloadMultiTextureTask::OnTextureDownloadComplete(class UDownloadingTextureTask* taskCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicContent.DownloadMultiTextureTask.OnTextureDownloadComplete");
		
		UDownloadMultiTextureTask_OnTextureDownloadComplete_Params params {};
		params.taskCompleted = taskCompleted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDownloadMultiTextureTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownloadMultiTextureTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicContent.DownloadMultiTextureTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x076751C0
	 * 		Name   -> Function DynamicContent.DynamicContentHolder.OnDownloadingTaskComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UDownloadMultiTextureTask*                   completeTask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDynamicContentHolder::OnDownloadingTaskComplete(class UDownloadMultiTextureTask* completeTask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DynamicContent.DynamicContentHolder.OnDownloadingTaskComplete");
		
		UDynamicContentHolder_OnDownloadingTaskComplete_Params params {};
		params.completeTask = completeTask;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UDynamicContentHolder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDynamicContentHolder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicContent.DynamicContentHolder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadingImagesDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingImagesDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicContent.LoadingImagesDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULoopBannerProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoopBannerProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DynamicContent.LoopBannerProvider");
		return ptr;
	}

}


