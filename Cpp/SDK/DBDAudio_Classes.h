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
	 * Class DBDAudio.AmbienceBoxComponent
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class UAmbienceBoxComponent : public UBoxComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAudio.AnimNotify_PostInteractionSoundEvent
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UAnimNotify_PostInteractionSoundEvent : public UAnimNotify
	{
	public:
		class UAkAudioEvent*                                       SoundEvent;                                              // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InteractionAudioClass[0x30];                             // 0x0048(0x0030) UNKNOWN PROPERTY: SoftClassProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAudio.AudioCustomMeshComponent
	 * Size -> 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
	 */
	class UAudioCustomMeshComponent : public UStaticMeshComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAudio.AudioUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAudioUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_PostAkAudioEvent(class UAkAudioEvent* AudioEvent);
		void STATIC_DBD_PostUiEvent(class UAkAudioEvent* Event);
		class UObject* STATIC_DBD_LoadPersistentBankByAssetPtr();
		void STATIC_DBD_LoadPersistentBankAsync(class UAkAudioBank* Bank);
		void STATIC_DBD_LoadPersistentBank(class UAkAudioBank* Bank);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAudio.InteractionAudioComponent
	 * Size -> 0x0068 (FullSize[0x0120] - InheritedSize[0x00B8])
	 */
	class UInteractionAudioComponent : public UActorComponent
	{
	public:
		class UAkComponent*                                        _audioComponent;                                         // 0x00B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FNonTunableStat                                     _audioRadius;                                            // 0x00C0(0x0060) Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool PostAkEvent(class UAkAudioEvent* AkEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAudio.LoadAsyncBankData
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class ULoadAsyncBankData : public UObject
	{
	public:
		class UAkAudioBank*                                        Bank;                                                    // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBankLoader*                                    SoundBankLoader;                                         // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDAudio.SoundBankLoader
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class USoundBankLoader : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_83UV[0x28];                                  // 0x0038(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAkAudioBank*>                                _audioBanks;                                             // 0x0060(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class ULoadAsyncBankData*>                          _asyncAudioBanksPendingLoadData;                         // 0x0070(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
