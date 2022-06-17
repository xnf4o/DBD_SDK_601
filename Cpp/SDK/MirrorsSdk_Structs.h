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
	 * Enum MirrorsSdk.EMirrorsRequestLogLevel
	 */
	enum class EMirrorsRequestLogLevel : uint8_t
	{
		None         = 0,
		NetworkError = 1,
		HttpError    = 2,
		All          = 3,
		MAX          = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
