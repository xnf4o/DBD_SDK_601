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
	 * Function SignificanceUtilities.DistanceBasedTickDisabler.UnregisterComponent
	 */
	struct UDistanceBasedTickDisabler_UnregisterComponent_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SignificanceUtilities.DistanceBasedTickDisabler.RegisterComponent
	 */
	struct UDistanceBasedTickDisabler_RegisterComponent_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
