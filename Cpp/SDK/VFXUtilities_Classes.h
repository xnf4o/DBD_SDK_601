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
	 * Class VFXUtilities.BaseVFX
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class ABaseVFX : public AActor
	{
	public:
		bool                                                       _shouldLoadOnServer;                                     // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MUIM[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VFXUtilities.VFXUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVFXUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetParticleSystemsActive(bool Active, bool Reset);
		void STATIC_SetParticleSystemActive(class UFXSystemComponent* ParticleSystem, bool Active, bool Reset);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
