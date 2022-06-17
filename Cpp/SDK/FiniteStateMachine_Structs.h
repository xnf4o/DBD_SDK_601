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
	 * Enum FiniteStateMachine.EFiniteStateMachineStatus
	 */
	enum class EFiniteStateMachineStatus : uint8_t
	{
		Stopped = 0,
		Running = 1,
		Paused  = 2,
		MAX     = 3
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
