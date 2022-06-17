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
	 * Class ActorLayerUtilities.LayersBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer);
		TArray<class AActor*> STATIC_GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer);
		void STATIC_AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
