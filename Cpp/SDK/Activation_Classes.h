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
	 * Class Activation.ActivatableMock
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class UActivatableMock : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_227Z[0x50];                                  // 0x00B8(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Activation.ActivatorComponent
	 * Size -> 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
	 */
	class UActivatorComponent : public UActorComponent
	{
	public:
		bool                                                       _searchForActivatableSubAnimInstances;                   // 0x00B8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8101[0x3F];                                  // 0x00B9(0x003F) MISSED OFFSET (PADDING)

	public:
		void SetObjectState(class UGameplayTagContainerComponent* objectState);
		static UClass* StaticClass();
	};

	/**
	 * Class Activation.Activatable
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UActivatable : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
