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
	 * Class RetentionRewardsUtilities.RetentionRewardsSubsystem
	 * Size -> 0x0148 (FullSize[0x0180] - InheritedSize[0x0038])
	 */
	class URetentionRewardsSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_WUKQ[0x148];                                 // 0x0038(0x0148) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
