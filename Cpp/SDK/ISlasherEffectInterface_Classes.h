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
	 * BlueprintGeneratedClass ISlasherEffectInterface.ISlasherEffectInterface_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UISlasherEffectInterface_C : public UInterface
	{
	public:
		void GetTrapPlacementLocation_World(struct FVector* World_Location);
		void GetSlasherAudioComponent(class UAkComponent** Audio_Component);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
