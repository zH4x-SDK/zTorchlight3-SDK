// Name: Torchlight3, Version: 4.26.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ItemSpawnTooltip.ItemSpawnTooltip_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* UItemSpawnTooltip_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemSpawnTooltip.ItemSpawnTooltip_C.GetTextBlock");

	UItemSpawnTooltip_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ItemSpawnTooltip.ItemSpawnTooltip_C.GetWarningTextBlockWrapper
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UItemSpawnTooltip_C::GetWarningTextBlockWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemSpawnTooltip.ItemSpawnTooltip_C.GetWarningTextBlockWrapper");

	UItemSpawnTooltip_C_GetWarningTextBlockWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ItemSpawnTooltip.ItemSpawnTooltip_C.GetWarningTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UItemSpawnTooltip_C::GetWarningTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemSpawnTooltip.ItemSpawnTooltip_C.GetWarningTextBlock");

	UItemSpawnTooltip_C_GetWarningTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ItemSpawnTooltip.ItemSpawnTooltip_C.SetText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UItemSpawnTooltip_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemSpawnTooltip.ItemSpawnTooltip_C.SetText");

	UItemSpawnTooltip_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemSpawnTooltip.ItemSpawnTooltip_C.ExecuteUbergraph_ItemSpawnTooltip
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemSpawnTooltip_C::ExecuteUbergraph_ItemSpawnTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemSpawnTooltip.ItemSpawnTooltip_C.ExecuteUbergraph_ItemSpawnTooltip");

	UItemSpawnTooltip_C_ExecuteUbergraph_ItemSpawnTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
