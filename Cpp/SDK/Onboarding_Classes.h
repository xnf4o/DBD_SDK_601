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
	 * Class Onboarding.OnboardingManager
	 * Size -> 0x0178 (FullSize[0x01B0] - InheritedSize[0x0038])
	 */
	class UOnboardingManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_W3Q9[0x178];                                 // 0x0038(0x0178) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
