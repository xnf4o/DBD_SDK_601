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
	 * Class SplinteredStates.SplinteredStatesSubsystem
	 * Size -> 0x04B8 (FullSize[0x04F0] - InheritedSize[0x0038])
	 */
	class USplinteredStatesSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_YEU3[0x4B8];                                 // 0x0038(0x04B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
