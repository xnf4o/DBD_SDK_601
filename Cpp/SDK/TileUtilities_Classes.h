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
	 * BlueprintGeneratedClass TileUtilities.TileUtilities_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UTileUtilities_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_CheckBasement(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject, class UObject* __WorldContext);
		void STATIC_CheckGenerator(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject, class UObject* __WorldContext);
		void STATIC_CallForSpawn(class UActorSpawner* ActorSpawner, class UObject* __WorldContext);
		void STATIC_SelectSpawners(TArray<class UActorSpawner*>* Spawners, int32_t MinCount, int32_t MaxCount, const struct FRandomStream& Stream, class UObject* __WorldContext);
		void STATIC_SelectSpawner(TArray<class UActorSpawner*>* Spawners, const struct FRandomStream& Stream, class UObject* __WorldContext);
		void STATIC_SetupGeneratorDrivenElements(TArray<class UChildActorComponent*>* SpawnPoints, class AActor* GeneratorSpawnPoint, int32_t generatorId, class UObject* __WorldContext);
		void STATIC_SelectSpawnPoint(TArray<class UTileSpawnPoint*>* SpawnPoints, const struct FRandomStream& Stream, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
