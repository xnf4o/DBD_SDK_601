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
	 * Function DynamicContent.DownloadingTextureTask.OnDownloadSucceeded
	 */
	struct UDownloadingTextureTask_OnDownloadSucceeded_Params
	{
	public:
		class UTexture2DDynamic*                                   textureDownloaded;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DynamicContent.DownloadingTextureTask.OnDownloadFailed
	 */
	struct UDownloadingTextureTask_OnDownloadFailed_Params
	{
	public:
		class UTexture2DDynamic*                                   textureDownloaded;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DynamicContent.DownloadMultiTextureTask.OnTextureDownloadComplete
	 */
	struct UDownloadMultiTextureTask_OnTextureDownloadComplete_Params
	{
	public:
		class UDownloadingTextureTask*                             taskCompleted;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DynamicContent.DynamicContentHolder.OnDownloadingTaskComplete
	 */
	struct UDynamicContentHolder_OnDownloadingTaskComplete_Params
	{
	public:
		class UDownloadMultiTextureTask*                           completeTask;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
