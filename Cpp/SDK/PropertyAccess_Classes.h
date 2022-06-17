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
	 * Class PropertyAccess.PropertyAccess
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPropertyAccess : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PropertyAccess.PropertyEventBroadcaster
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPropertyEventBroadcaster : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PropertyAccess.PropertyEventSubscriber
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPropertyEventSubscriber : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
