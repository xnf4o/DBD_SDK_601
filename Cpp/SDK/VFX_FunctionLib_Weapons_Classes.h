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
	 * BlueprintGeneratedClass VFX_FunctionLib_Weapons.VFX_FunctionLib_Weapons_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UVFX_FunctionLib_Weapons_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_FX_SpawnDissolveEmitter(bool HideWeapon, bool FPV, class USceneComponent* Mesh, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
