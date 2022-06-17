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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum RemoteSession.ERemoteSessionConnectionChange
	 */
	enum class ERemoteSessionConnectionChange : uint8_t
	{
		Connected    = 0,
		Disconnected = 1,
		MAX          = 2
	};

	/**
	 * Enum RemoteSession.ERemoteSessionChannelChange
	 */
	enum class ERemoteSessionChannelChange : uint8_t
	{
		Created   = 0,
		Destroyed = 1,
		MAX       = 2
	};

	/**
	 * Enum RemoteSession.ERemoteSessionChannelMode
	 */
	enum class ERemoteSessionChannelMode : uint8_t
	{
		Unknown  = 0,
		Read     = 1,
		Write    = 2,
		MaxValue = 3,
		MAX      = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RemoteSession.RemoteSessionChannelInfo
	 * Size -> 0x0018
	 */
	struct FRemoteSessionChannelInfo
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERemoteSessionChannelMode                                  Mode;                                                    // 0x0010(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXVF[0x3];                                   // 0x0010(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_WODC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
