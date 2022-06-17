/**
 * Name: DBD
 * Version: 601
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAB_Menu_Slasher28_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimGraph");
		
		UAB_Menu_Slasher28_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_FBF20A854C25DF62FA1C7FA581795689
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnInterrupted_FBF20A854C25DF62FA1C7FA581795689(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_FBF20A854C25DF62FA1C7FA581795689");
		
		UAB_Menu_Slasher28_C_OnInterrupted_FBF20A854C25DF62FA1C7FA581795689_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_FBF20A854C25DF62FA1C7FA581795689
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnBlendOut_FBF20A854C25DF62FA1C7FA581795689(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_FBF20A854C25DF62FA1C7FA581795689");
		
		UAB_Menu_Slasher28_C_OnBlendOut_FBF20A854C25DF62FA1C7FA581795689_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_FBF20A854C25DF62FA1C7FA581795689
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnCompleted_FBF20A854C25DF62FA1C7FA581795689(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_FBF20A854C25DF62FA1C7FA581795689");
		
		UAB_Menu_Slasher28_C_OnCompleted_FBF20A854C25DF62FA1C7FA581795689_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_67A4A0524204789067E9DB964585A407
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnNotifyEnd_67A4A0524204789067E9DB964585A407(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_67A4A0524204789067E9DB964585A407");
		
		UAB_Menu_Slasher28_C_OnNotifyEnd_67A4A0524204789067E9DB964585A407_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_67A4A0524204789067E9DB964585A407
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnNotifyBegin_67A4A0524204789067E9DB964585A407(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_67A4A0524204789067E9DB964585A407");
		
		UAB_Menu_Slasher28_C_OnNotifyBegin_67A4A0524204789067E9DB964585A407_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_67A4A0524204789067E9DB964585A407
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnInterrupted_67A4A0524204789067E9DB964585A407(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_67A4A0524204789067E9DB964585A407");
		
		UAB_Menu_Slasher28_C_OnInterrupted_67A4A0524204789067E9DB964585A407_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_67A4A0524204789067E9DB964585A407
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnBlendOut_67A4A0524204789067E9DB964585A407(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_67A4A0524204789067E9DB964585A407");
		
		UAB_Menu_Slasher28_C_OnBlendOut_67A4A0524204789067E9DB964585A407_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_67A4A0524204789067E9DB964585A407
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnCompleted_67A4A0524204789067E9DB964585A407(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_67A4A0524204789067E9DB964585A407");
		
		UAB_Menu_Slasher28_C_OnCompleted_67A4A0524204789067E9DB964585A407_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_4C173F2D43F0E1440D9CA18391F8991B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnNotifyEnd_4C173F2D43F0E1440D9CA18391F8991B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_4C173F2D43F0E1440D9CA18391F8991B");
		
		UAB_Menu_Slasher28_C_OnNotifyEnd_4C173F2D43F0E1440D9CA18391F8991B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_4C173F2D43F0E1440D9CA18391F8991B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnNotifyBegin_4C173F2D43F0E1440D9CA18391F8991B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_4C173F2D43F0E1440D9CA18391F8991B");
		
		UAB_Menu_Slasher28_C_OnNotifyBegin_4C173F2D43F0E1440D9CA18391F8991B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_4C173F2D43F0E1440D9CA18391F8991B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnInterrupted_4C173F2D43F0E1440D9CA18391F8991B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_4C173F2D43F0E1440D9CA18391F8991B");
		
		UAB_Menu_Slasher28_C_OnInterrupted_4C173F2D43F0E1440D9CA18391F8991B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_4C173F2D43F0E1440D9CA18391F8991B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnBlendOut_4C173F2D43F0E1440D9CA18391F8991B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_4C173F2D43F0E1440D9CA18391F8991B");
		
		UAB_Menu_Slasher28_C_OnBlendOut_4C173F2D43F0E1440D9CA18391F8991B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_4C173F2D43F0E1440D9CA18391F8991B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnCompleted_4C173F2D43F0E1440D9CA18391F8991B(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_4C173F2D43F0E1440D9CA18391F8991B");
		
		UAB_Menu_Slasher28_C_OnCompleted_4C173F2D43F0E1440D9CA18391F8991B_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_99176BD143A279FCB5E9EB89DBE0DE89
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnNotifyEnd_99176BD143A279FCB5E9EB89DBE0DE89(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_99176BD143A279FCB5E9EB89DBE0DE89");
		
		UAB_Menu_Slasher28_C_OnNotifyEnd_99176BD143A279FCB5E9EB89DBE0DE89_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_99176BD143A279FCB5E9EB89DBE0DE89
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnNotifyBegin_99176BD143A279FCB5E9EB89DBE0DE89(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_99176BD143A279FCB5E9EB89DBE0DE89");
		
		UAB_Menu_Slasher28_C_OnNotifyBegin_99176BD143A279FCB5E9EB89DBE0DE89_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_99176BD143A279FCB5E9EB89DBE0DE89
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnInterrupted_99176BD143A279FCB5E9EB89DBE0DE89(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnInterrupted_99176BD143A279FCB5E9EB89DBE0DE89");
		
		UAB_Menu_Slasher28_C_OnInterrupted_99176BD143A279FCB5E9EB89DBE0DE89_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_99176BD143A279FCB5E9EB89DBE0DE89
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnBlendOut_99176BD143A279FCB5E9EB89DBE0DE89(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnBlendOut_99176BD143A279FCB5E9EB89DBE0DE89");
		
		UAB_Menu_Slasher28_C_OnBlendOut_99176BD143A279FCB5E9EB89DBE0DE89_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_99176BD143A279FCB5E9EB89DBE0DE89
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnCompleted_99176BD143A279FCB5E9EB89DBE0DE89(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnCompleted_99176BD143A279FCB5E9EB89DBE0DE89");
		
		UAB_Menu_Slasher28_C_OnCompleted_99176BD143A279FCB5E9EB89DBE0DE89_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_FBF20A854C25DF62FA1C7FA581795689
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnNotifyBegin_FBF20A854C25DF62FA1C7FA581795689(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyBegin_FBF20A854C25DF62FA1C7FA581795689");
		
		UAB_Menu_Slasher28_C_OnNotifyBegin_FBF20A854C25DF62FA1C7FA581795689_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_FBF20A854C25DF62FA1C7FA581795689
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::OnNotifyEnd_FBF20A854C25DF62FA1C7FA581795689(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.OnNotifyEnd_FBF20A854C25DF62FA1C7FA581795689");
		
		UAB_Menu_Slasher28_C_OnNotifyEnd_FBF20A854C25DF62FA1C7FA581795689_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_D146C54949337FA1677E2380E865E8BE
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_D146C54949337FA1677E2380E865E8BE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_D146C54949337FA1677E2380E865E8BE");
		
		UAB_Menu_Slasher28_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_D146C54949337FA1677E2380E865E8BE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_55BB68CC4DA86D28996257B1194195ED
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_55BB68CC4DA86D28996257B1194195ED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_55BB68CC4DA86D28996257B1194195ED");
		
		UAB_Menu_Slasher28_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_55BB68CC4DA86D28996257B1194195ED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_29C65B7342F785B35FEC1A9909C527B2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_29C65B7342F785B35FEC1A9909C527B2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_29C65B7342F785B35FEC1A9909C527B2");
		
		UAB_Menu_Slasher28_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_29C65B7342F785B35FEC1A9909C527B2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_590FBB28457F43249CCC7AA583A29DDF
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_590FBB28457F43249CCC7AA583A29DDF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_590FBB28457F43249CCC7AA583A29DDF");
		
		UAB_Menu_Slasher28_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Menu_Slasher28_AnimGraphNode_TransitionResult_590FBB28457F43249CCC7AA583A29DDF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.BlueprintUpdateAnimation");
		
		UAB_Menu_Slasher28_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.BlueprintInitializeAnimation");
		
		UAB_Menu_Slasher28_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_GenerateRandom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::AnimNotify_GenerateRandom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_GenerateRandom");
		
		UAB_Menu_Slasher28_C_AnimNotify_GenerateRandom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.BP_OnCustomizationAnimationMappingIDChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            animationMappingIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::BP_OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.BP_OnCustomizationAnimationMappingIDChanged");
		
		UAB_Menu_Slasher28_C_BP_OnCustomizationAnimationMappingIDChanged_Params params {};
		params.animationMappingIndex = animationMappingIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.UpdateAnimationSet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::UpdateAnimationSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.UpdateAnimationSet");
		
		UAB_Menu_Slasher28_C_UpdateAnimationSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Idle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::AnimNotify_Idle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Idle");
		
		UAB_Menu_Slasher28_C_AnimNotify_Idle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Interupt01Start
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::AnimNotify_Interupt01Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Interupt01Start");
		
		UAB_Menu_Slasher28_C_AnimNotify_Interupt01Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Interupt02Start
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::AnimNotify_Interupt02Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Interupt02Start");
		
		UAB_Menu_Slasher28_C_AnimNotify_Interupt02Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_K24_Menu_Interrupt01
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::AnimNotify_K24_Menu_Interrupt01()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_K24_Menu_Interrupt01");
		
		UAB_Menu_Slasher28_C_AnimNotify_K24_Menu_Interrupt01_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Hand_Start
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::AnimNotify_Hand_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_Hand_Start");
		
		UAB_Menu_Slasher28_C_AnimNotify_Hand_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_IntroEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::AnimNotify_IntroEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.AnimNotify_IntroEnd");
		
		UAB_Menu_Slasher28_C_AnimNotify_IntroEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.ExecuteUbergraph_AB_Menu_Slasher28
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAB_Menu_Slasher28_C::ExecuteUbergraph_AB_Menu_Slasher28(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.ExecuteUbergraph_AB_Menu_Slasher28");
		
		UAB_Menu_Slasher28_C_ExecuteUbergraph_AB_Menu_Slasher28_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.K28_IntroEnd_Menu_EventDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::K28_IntroEnd_Menu_EventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.K28_IntroEnd_Menu_EventDispatcher__DelegateSignature");
		
		UAB_Menu_Slasher28_C_K28_IntroEnd_Menu_EventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05191780
	 * 		Name   -> Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.K28_IntroStart_Menu_EventDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UAB_Menu_Slasher28_C::K28_IntroStart_Menu_EventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AB_Menu_Slasher28.AB_Menu_Slasher28_C.K28_IntroStart_Menu_EventDispatcher__DelegateSignature");
		
		UAB_Menu_Slasher28_C_K28_IntroStart_Menu_EventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAB_Menu_Slasher28_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAB_Menu_Slasher28_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Menu_Slasher28.AB_Menu_Slasher28_C");
		return ptr;
	}

}


