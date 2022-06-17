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
	 * Class DBDInput.ControlModeManager
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UControlModeManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_SUXQ[0x50];                                  // 0x0030(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGameInstance*                                       _gameInstance;                                           // 0x0080(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.DBDInputManager
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UDBDInputManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_N6U6[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlModeManager*                                 _controlModeManager;                                     // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USwitchDockStateManager*                             _switchDockStateManager;                                 // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVirtualKeyboardManager*                             _virtualKeyboardManager;                                 // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDataTable*                                          _analogCursorDb;                                         // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L4TT[0x38];                                  // 0x0078(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.InteractiveWidgetInterface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInteractiveWidgetInterface : public UInterface
	{
	public:
		void HandleKeyUpEvent(const struct FKeyEvent& InKeyEvent);
		void HandleKeyHoldEvent(const struct FKeyEvent& InKeyEvent);
		void HandleKeyDownEvent(const struct FKeyEvent& InKeyEvent);
		void HandleAnalogInputEvent(const struct FAnalogInputEvent& InAnalogInputEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.MultipleGamepadsControlModeInfo
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UMultipleGamepadsControlModeInfo : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_8IGC[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.SwitchDockStateManager
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class USwitchDockStateManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_KL2A[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.UIInputUtilities
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UUIInputUtilities : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_ShouldUseAtlantaControls(class UObject* WorldContextObject);
		bool STATIC_IsInputKeyControlModePairValid(const struct FKey& InputKey, EControlMode controlMode);
		struct FKey STATIC_GetKeyFromUIAction(EUIActionType ActionType, bool isUsingGamepad);
		static UClass* StaticClass();
	};

	/**
	 * Class DBDInput.VirtualKeyboardManager
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UVirtualKeyboardManager : public UObject
	{
	public:
		class UVirtualKeyboard*                                    _virtualKeyboard;                                        // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DHMD[0x38];                                  // 0x0038(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
