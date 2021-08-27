// Name: Torchlight3, Version: 1.0.0

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

// Function ItemNameplate.ItemNameplate_C.GetVisibileAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UItemNameplate_C::GetVisibileAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemNameplate.ItemNameplate_C.GetVisibileAnimation");

	UItemNameplate_C_GetVisibileAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ItemNameplate.ItemNameplate_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UItemNameplate_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemNameplate.ItemNameplate_C.GetShowAnimation");

	UItemNameplate_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ItemNameplate.ItemNameplate_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UItemNameplate_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemNameplate.ItemNameplate_C.GetTextBlock");

	UItemNameplate_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ItemNameplate.ItemNameplate_C.Hover
// (Event, Public, BlueprintEvent)
void UItemNameplate_C::Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemNameplate.ItemNameplate_C.Hover");

	UItemNameplate_C_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemNameplate.ItemNameplate_C.HoverOff
// (Event, Public, BlueprintEvent)
void UItemNameplate_C::HoverOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemNameplate.ItemNameplate_C.HoverOff");

	UItemNameplate_C_HoverOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ItemNameplate.ItemNameplate_C.ExecuteUbergraph_ItemNameplate
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemNameplate_C::ExecuteUbergraph_ItemNameplate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemNameplate.ItemNameplate_C.ExecuteUbergraph_ItemNameplate");

	UItemNameplate_C_ExecuteUbergraph_ItemNameplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
