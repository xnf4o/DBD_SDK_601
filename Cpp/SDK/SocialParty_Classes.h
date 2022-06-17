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
	 * Class SocialParty.PartyFacade
	 * Size -> 0x0460 (FullSize[0x0490] - InheritedSize[0x0030])
	 */
	class UPartyFacade : public UObject
	{
	public:
		unsigned char                                              UnknownData_FF4X[0x460];                                 // 0x0030(0x0460) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
