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
	 * Class DBDCosmetic.SurvivorCosmeticHelperActor
	 * Size -> 0x0038 (FullSize[0x0268] - InheritedSize[0x0230])
	 */
	class ASurvivorCosmeticHelperActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_UO8D[0x38];                                  // 0x0230(0x0038) MISSED OFFSET (PADDING)

	public:
		bool IsLocallyObserved();
		class ACamperPlayer* GetSurvivor();
		class UMaterialHelper* GetMaterialHelper();
		class UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh();
		class UAkComponent* GetAudioComponent();
		void Cosmetic_OnSurvivorLinked(class ACamperPlayer* survivorLinked);
		void Cosmetic_OnIsLocallyObservingSurvivorChanged(bool IsLocallyObservingSurvivor);
		void Cosmetic_OnIsGettingMoriedStatusChanged(bool isGettingMoried);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class USurvivorCosmeticHelperSpawnerComponent : public UActorComponent
	{
	public:
		class UDataTable*                                          _survivorCosmeticActorHelperDB;                          // 0x00B8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WOCV[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
