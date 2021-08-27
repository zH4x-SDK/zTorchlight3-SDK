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

// Function GenericFloatingText.GenericFloatingText_C.GetTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UGenericFloatingText_C::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericFloatingText.GenericFloatingText_C.GetTextBlock");

	UGenericFloatingText_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function GenericFloatingText.GenericFloatingText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UGenericFloatingText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericFloatingText.GenericFloatingText_C.Construct");

	UGenericFloatingText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GenericFloatingText.GenericFloatingText_C.ExecuteUbergraph_GenericFloatingText
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGenericFloatingText_C::ExecuteUbergraph_GenericFloatingText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericFloatingText.GenericFloatingText_C.ExecuteUbergraph_GenericFloatingText");

	UGenericFloatingText_C_ExecuteUbergraph_GenericFloatingText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
