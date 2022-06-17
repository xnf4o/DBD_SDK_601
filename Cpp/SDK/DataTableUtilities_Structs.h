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
	 * ScriptStruct DataTableUtilities.DBDTunableRowHandle
	 * Size -> 0x0028
	 */
	struct FDBDTunableRowHandle
	{
	public:
		struct FDataTableRowHandle                                 _dataTableRowHandle;                                     // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      _defaultValue;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FUMT[0xC];                                   // 0x001C(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DataTableUtilities.DBDTableRowBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FDBDTableRowBase : public FTableRowBase
	{	};

	/**
	 * ScriptStruct DataTableUtilities.DBDTableRowBaseWithId
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FDBDTableRowBaseWithId : public FDBDTableRowBase
	{
	public:
		class FName                                                ID;                                                      // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW4U[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DataTableUtilities.DataTableProxy
	 * Size -> 0x0040
	 */
	struct FDataTableProxy
	{
	public:
		unsigned char                                              AssetPtr[0x30];                                          // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class UDataTable*                                          _dataTable;                                              // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FE4H[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DataTableUtilities.DBDTunableRowBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FDBDTunableRowBase : public FDBDTableRowBase
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
