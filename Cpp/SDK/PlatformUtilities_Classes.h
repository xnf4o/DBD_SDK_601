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
	 * Class PlatformUtilities.CrowdChoiceManager
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UCrowdChoiceManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_SWWQ[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PlatformUtilities.CrowdPlayManager
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UCrowdPlayManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_U3LF[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PlatformUtilities.PlatformSupportSubsystem
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UPlatformSupportSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_SPEX[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (PADDING)

	public:
		void DBD_StadiaShowStreamDebug(bool bEnabled);
		void DBD_StadiaRoleSelectPoll();
		void DBD_StadiaCharacterSelectPoll();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
