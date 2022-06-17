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
	 * Class Slate.ButtonWidgetStyle
	 * Size -> 0x02A8 (FullSize[0x02E0] - InheritedSize[0x0038])
	 */
	class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0038(0x02A8) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.CheckBoxWidgetStyle
	 * Size -> 0x05E0 (FullSize[0x0618] - InheritedSize[0x0038])
	 */
	class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FCheckBoxStyle                                      CheckBoxStyle;                                           // 0x0038(0x05E0) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ComboBoxWidgetStyle
	 * Size -> 0x0440 (FullSize[0x0478] - InheritedSize[0x0038])
	 */
	class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FComboBoxStyle                                      ComboBoxStyle;                                           // 0x0038(0x0440) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ComboButtonWidgetStyle
	 * Size -> 0x03F8 (FullSize[0x0430] - InheritedSize[0x0038])
	 */
	class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FComboButtonStyle                                   ComboButtonStyle;                                        // 0x0038(0x03F8) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.EditableTextBoxWidgetStyle
	 * Size -> 0x0860 (FullSize[0x0898] - InheritedSize[0x0038])
	 */
	class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FEditableTextBoxStyle                               EditableTextBoxStyle;                                    // 0x0038(0x0860) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.EditableTextWidgetStyle
	 * Size -> 0x0238 (FullSize[0x0270] - InheritedSize[0x0038])
	 */
	class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FEditableTextStyle                                  EditableTextStyle;                                       // 0x0038(0x0238) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ProgressWidgetStyle
	 * Size -> 0x01B8 (FullSize[0x01F0] - InheritedSize[0x0038])
	 */
	class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FProgressBarStyle                                   ProgressBarStyle;                                        // 0x0038(0x01B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ScrollBarWidgetStyle
	 * Size -> 0x0518 (FullSize[0x0550] - InheritedSize[0x0038])
	 */
	class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x0038(0x0518) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ScrollBoxWidgetStyle
	 * Size -> 0x0248 (FullSize[0x0280] - InheritedSize[0x0038])
	 */
	class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FScrollBoxStyle                                     ScrollBoxStyle;                                          // 0x0038(0x0248) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.SlateSettings
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class USlateSettings : public UObject
	{
	public:
		bool                                                       bExplicitCanvasChildZOrder;                              // 0x0030(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_89RA[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.SpinBoxWidgetStyle
	 * Size -> 0x0310 (FullSize[0x0348] - InheritedSize[0x0038])
	 */
	class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FSpinBoxStyle                                       SpinBoxStyle;                                            // 0x0038(0x0310) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.TextBlockWidgetStyle
	 * Size -> 0x0288 (FullSize[0x02C0] - InheritedSize[0x0038])
	 */
	class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
	{
	public:
		struct FTextBlockStyle                                     TextBlockStyle;                                          // 0x0038(0x0288) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Slate.ToolMenuBase
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UToolMenuBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
