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
	 * Enum SharedAuthenticationUtilities.ESharedAuthenticationTokenType
	 */
	enum class ESharedAuthenticationTokenType : uint8_t
	{
		None              = 0,
		AccessToken       = 1,
		AuthorizationCode = 2,
		IdentityToken     = 3,
		MAX               = 4
	};

	/**
	 * Enum SharedAuthenticationUtilities.ESharedAuthenticationProvider
	 */
	enum class ESharedAuthenticationProvider : uint8_t
	{
		None            = 0,
		Facebook        = 1,
		Google          = 2,
		NetEase         = 3,
		Kraken          = 4,
		SignInWithApple = 5,
		MAX             = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SharedAuthenticationUtilities.AuthenticationRequestState
	 * Size -> 0x0030
	 */
	struct FAuthenticationRequestState
	{
	public:
		unsigned char                                              UnknownData_0E78[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
