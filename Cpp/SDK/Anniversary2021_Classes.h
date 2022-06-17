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
	 * Class Anniversary2021.Anniversary2021EventComponent
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	class UAnniversary2021EventComponent : public URespawningEventComponent
	{
	public:
		class UInteractionRespawnableTrigger*                      _interactionRespawnableTrigger;                          // 0x00C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTimedRespawnableTrigger*                            _timedRespawnableTrigger;                                // 0x00D0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J3NR[0x18];                                  // 0x00D8(0x0018) MISSED OFFSET (PADDING)

	public:
		void Authority_OnIntroComplete();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
