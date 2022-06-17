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
	 * Class CoreUObject.Object
	 * Size -> 0x0030
	 */
	class UObject
	{
	public:
		static class TUObjectArray*                                GObjects;                                                // 0x0000(0x0008) PREDEFINED PROPERTY
		void*                                                      VfTable;                                                 // 0x0000(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    Flags;                                                   // 0x0008(0x0004) PRE-DEFINED PROPERTY
		int32_t                                                    InternalIndex;                                           // 0x000C(0x0004) PRE-DEFINED PROPERTY
		class UClass*                                              Class;                                                   // 0x0010(0x0008) PRE-DEFINED PROPERTY
		FName                                                      Name;                                                    // 0x0018(0x0008) PRE-DEFINED PROPERTY
		unsigned char                                              pad_NP66GJ0XFT[0x04];                                    // 0x0020(0x0004) PRE-DEFINED PROPERTY
		class UObject*                                             Outer;                                                   // 0x0024(0x0008) PRE-DEFINED PROPERTY

	public:
		static TUObjectArray& GetGlobalObjects();
		std::string GetName() const;
		std::string GetFullName() const;
		template<typename T>
		static T* FindObject(const std::string& name)
		{
			for (int32_t i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->GetFullName() == name)
					return static_cast<T*>(object);
			}
			return nullptr;
		}

		template<typename T>
		static T* FindObject()
		{
			auto v = T::StaticClass();
			for (int32_t i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->IsA(v))
					return static_cast<T*>(object);
			}
			return nullptr;
		}

		template<typename T>
		static std::vector<T*> FindObjects(const std::string& name)
		{
			std::vector<T*> ret;
			for (int32_t i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->GetFullName() == name)
					ret.push_back(static_cast<T*>(object));
			}
			return ret;
		}

		template<typename T>
		static std::vector<T*> FindObjects()
		{
			std::vector<T*> ret;
			auto v = T::StaticClass();
			for (int i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->IsA(v))
					ret.push_back(static_cast<T*>(object));
			}
			return ret;
		}

		static UClass* FindClass(const std::string& name);
		template<typename T>
		static T* GetObjectCasted(size_t index)
		{
			return static_cast<T*>(UObject::GetGlobalObjects().GetByIndex(index));
		}

		bool IsA(UClass* cmp) const;
		void ExecuteUbergraph(int32_t EntryPoint);
		void ProcessEvent(class UFunction* function, void* parms);
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Interface
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInterface : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.GCObjectReferencer
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UGCObjectReferencer : public UObject
	{
	public:
		unsigned char                                              UnknownData_ND0I[0x48];                                  // 0x0030(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.TextBuffer
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UTextBuffer : public UObject
	{
	public:
		unsigned char                                              UnknownData_98D1[0x28];                                  // 0x0030(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Field
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UField : public UObject
	{
	public:
		class UField*                                              Next;                                                    // 0x002C(0x0008) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Struct
	 * Size -> 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
	 */
	class UStruct : public UField, public FStructBaseChain
	{
	public:
		class UStruct*                                             SuperField;                                              // 0x0044(0x0008) PRE-DEFINED PROPERTY
		class UField*                                              Children;                                                // 0x004C(0x0008) PRE-DEFINED PROPERTY
		class FField*                                              ChildProperties;                                         // 0x0054(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    PropertySize;                                            // 0x005C(0x0004) PRE-DEFINED PROPERTY
		int32_t                                                    MinAlignment;                                            // 0x0060(0x0004) PRE-DEFINED PROPERTY
		TArray<uint8_t>                                            Script;                                                  // 0x0064(0x0010) PRE-DEFINED PROPERTY
		class FProperty*                                           PropertyLink;                                            // 0x0074(0x0008) PRE-DEFINED PROPERTY
		class FProperty*                                           RefLink;                                                 // 0x007C(0x0008) PRE-DEFINED PROPERTY
		class FProperty*                                           DestructorLink;                                          // 0x0084(0x0008) PRE-DEFINED PROPERTY
		class FProperty*                                           PostConstructLink;                                       // 0x008C(0x0008) PRE-DEFINED PROPERTY
		TArray<UObject*>                                           ScriptAndPropertyObjectReferences;                       // 0x0094(0x0010) PRE-DEFINED PROPERTY
		class FUnresolvedScriptPropertiesArray*                    UnresolvedScriptProperties;                              // 0x00A4(0x0008) PRE-DEFINED PROPERTY
		class FUnversionedStructSchema*                            UnversionedSchema;                                       // 0x00AC(0x0008) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ScriptStruct
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UScriptStruct : public UStruct
	{
	public:
		unsigned char                                              UnknownData_X4VS[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Package
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UPackage : public UObject
	{
	public:
		unsigned char                                              UnknownData_HF9O[0x78];                                  // 0x0030(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Class
	 * Size -> 0x0188 (FullSize[0x0240] - InheritedSize[0x00B8])
	 */
	class UClass : public UStruct
	{
	public:
		unsigned char                                              UnknownData_T9D1[0x188];                                 // 0x00B8(0x0188) MISSED OFFSET (PADDING)

	public:
		template<typename T>
		T* CreateDefaultObjectOfType()
		{
			return static_cast<T*>(CreateDefaultObject());
		}

		UObject* CreateDefaultObject();
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Function
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UFunction : public UStruct
	{
	public:
		int32_t                                                    FunctionFlags;                                           // 0x00B4(0x0004) PRE-DEFINED PROPERTY
		uint8_t                                                    NumParms;                                                // 0x00B8(0x0001) PRE-DEFINED PROPERTY
		uint16_t                                                   ParmsSize;                                               // 0x00B9(0x0002) PRE-DEFINED PROPERTY
		unsigned char                                              pad_Q3DM8F4LPG[0x01];                                    // 0x00BB(0x0001) PRE-DEFINED PROPERTY
		uint16_t                                                   ReturnValueOffset;                                       // 0x00BC(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   RPCId;                                                   // 0x00BE(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   RPCResponseId;                                           // 0x00C0(0x0002) PRE-DEFINED PROPERTY
		unsigned char                                              pad_96ZURP6ETK[0x02];                                    // 0x00C2(0x0002) PRE-DEFINED PROPERTY
		class UProperty*                                           FirstPropertyToInit;                                     // 0x00C4(0x0008) PRE-DEFINED PROPERTY
		class UFunction*                                           EventGraphFunction;                                      // 0x00CC(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    EventGraphCallOffset;                                    // 0x00D4(0x0004) PRE-DEFINED PROPERTY
		unsigned char                                              pad_MA006Y0DD8[0x04];                                    // 0x00D8(0x0004) PRE-DEFINED PROPERTY
		void*                                                      Func;                                                    // 0x00DC(0x0008) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DelegateFunction
	 * Size -> 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
	 */
	class UDelegateFunction : public UFunction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SparseDelegateFunction
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class USparseDelegateFunction : public UDelegateFunction
	{
	public:
		unsigned char                                              UnknownData_TGWE[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DynamicClass
	 * Size -> 0x0080 (FullSize[0x02C0] - InheritedSize[0x0240])
	 */
	class UDynamicClass : public UClass
	{
	public:
		unsigned char                                              UnknownData_NBW2[0x80];                                  // 0x0240(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.PackageMap
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UPackageMap : public UObject
	{
	public:
		unsigned char                                              UnknownData_PAZF[0xB8];                                  // 0x0030(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Enum
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UEnum : public UField
	{
	public:
		unsigned char                                              UnknownData_OSQP[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderClass
	 * Size -> 0x01B8 (FullSize[0x03F8] - InheritedSize[0x0240])
	 */
	class ULinkerPlaceholderClass : public UClass
	{
	public:
		unsigned char                                              UnknownData_0I9C[0x1B8];                                 // 0x0240(0x01B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderExportObject
	 * Size -> 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
	 */
	class ULinkerPlaceholderExportObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_7I9M[0xC8];                                  // 0x0030(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderFunction
	 * Size -> 0x01B8 (FullSize[0x02A0] - InheritedSize[0x00E8])
	 */
	class ULinkerPlaceholderFunction : public UFunction
	{
	public:
		unsigned char                                              UnknownData_ND5M[0x1B8];                                 // 0x00E8(0x01B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MetaData
	 * Size -> 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
	 */
	class UMetaData : public UObject
	{
	public:
		unsigned char                                              UnknownData_TH32[0xA0];                                  // 0x0030(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectRedirector
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UObjectRedirector : public UObject
	{
	public:
		unsigned char                                              UnknownData_ITBM[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Property
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UProperty : public UField
	{
	public:
		unsigned char                                              UnknownData_0JW9[0x48];                                  // 0x0038(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.EnumProperty
	 * Size -> 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
	 */
	class UEnumProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_GO5O[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ArrayProperty
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UArrayProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_Q93X[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectPropertyBase
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UObjectPropertyBase : public UProperty
	{
	public:
		unsigned char                                              UnknownData_26QM[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.BoolProperty
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UBoolProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_076W[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.NumericProperty
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UNumericProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ByteProperty
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UByteProperty : public UNumericProperty
	{
	public:
		unsigned char                                              UnknownData_CBH4[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectProperty
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ClassProperty
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UClassProperty : public UObjectProperty
	{
	public:
		unsigned char                                              UnknownData_D9FV[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DelegateProperty
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UDelegateProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DoubleProperty
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UDoubleProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.FloatProperty
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UFloatProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.IntProperty
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UIntProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int8Property
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UInt8Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int16Property
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UInt16Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int64Property
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UInt64Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.InterfaceProperty
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UInterfaceProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_9G7N[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LazyObjectProperty
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class ULazyObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MapProperty
	 * Size -> 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
	 */
	class UMapProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_9VQ1[0x28];                                  // 0x0080(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastDelegateProperty
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UMulticastDelegateProperty : public UDelegateProperty
	{
	public:
		unsigned char                                              UnknownData_NODZ[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastInlineDelegateProperty
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastSparseDelegateProperty
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.NameProperty
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UNameProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SetProperty
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class USetProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_TMX9[0x20];                                  // 0x0080(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SoftObjectProperty
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class USoftObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SoftClassProperty
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class USoftClassProperty : public USoftObjectProperty
	{
	public:
		unsigned char                                              UnknownData_33LO[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.StrProperty
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UStrProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.StructProperty
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UStructProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_2ZAI[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt16Property
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UUInt16Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt32Property
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UUInt32Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt64Property
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UUInt64Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.WeakObjectProperty
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UWeakObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.TextProperty
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UTextProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.PropertyWrapper
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPropertyWrapper : public UObject
	{
	public:
		unsigned char                                              UnknownData_B6PK[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastDelegatePropertyWrapper
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastInlineDelegatePropertyWrapper
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
