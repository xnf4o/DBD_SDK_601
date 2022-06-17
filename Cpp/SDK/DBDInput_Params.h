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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent
	 */
	struct UInteractiveWidgetInterface_HandleKeyUpEvent_Params
	{
	public:
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent
	 */
	struct UInteractiveWidgetInterface_HandleKeyHoldEvent_Params
	{
	public:
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent
	 */
	struct UInteractiveWidgetInterface_HandleKeyDownEvent_Params
	{
	public:
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent
	 */
	struct UInteractiveWidgetInterface_HandleAnalogInputEvent_Params
	{
	public:
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInput.UIInputUtilities.ShouldUseAtlantaControls
	 */
	struct UUIInputUtilities_ShouldUseAtlantaControls_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInput.UIInputUtilities.IsInputKeyControlModePairValid
	 */
	struct UUIInputUtilities_IsInputKeyControlModePairValid_Params
	{
	public:
		struct FKey                                                InputKey;                                                // 0x0000(0x0020)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EControlMode                                               controlMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DBDInput.UIInputUtilities.GetKeyFromUIAction
	 */
	struct UUIInputUtilities_GetKeyFromUIAction_Params
	{
	public:
		EUIActionType                                              ActionType;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       isUsingGamepad;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
