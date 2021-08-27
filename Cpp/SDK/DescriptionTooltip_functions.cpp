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

// Function DescriptionTooltip.DescriptionTooltip_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* UDescriptionTooltip_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function DescriptionTooltip.DescriptionTooltip_C.GetTextBlock");

	UDescriptionTooltip_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function DescriptionTooltip.DescriptionTooltip_C.SetText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UDescriptionTooltip_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DescriptionTooltip.DescriptionTooltip_C.SetText");

	UDescriptionTooltip_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DescriptionTooltip.DescriptionTooltip_C.SetDescription
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UDescriptionTooltip_C::SetDescription(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DescriptionTooltip.DescriptionTooltip_C.SetDescription");

	UDescriptionTooltip_C_SetDescription_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DescriptionTooltip.DescriptionTooltip_C.ExecuteUbergraph_DescriptionTooltip
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDescriptionTooltip_C::ExecuteUbergraph_DescriptionTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DescriptionTooltip.DescriptionTooltip_C.ExecuteUbergraph_DescriptionTooltip");

	UDescriptionTooltip_C_ExecuteUbergraph_DescriptionTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
