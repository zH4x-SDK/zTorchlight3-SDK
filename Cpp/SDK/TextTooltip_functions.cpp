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

// Function TextTooltip.TextTooltip_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* UTextTooltip_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTooltip.TextTooltip_C.GetTextBlock");

	UTextTooltip_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TextTooltip.TextTooltip_C.SetText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTextTooltip_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTooltip.TextTooltip_C.SetText");

	UTextTooltip_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TextTooltip.TextTooltip_C.ExecuteUbergraph_TextTooltip
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTextTooltip_C::ExecuteUbergraph_TextTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTooltip.TextTooltip_C.ExecuteUbergraph_TextTooltip");

	UTextTooltip_C_ExecuteUbergraph_TextTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
