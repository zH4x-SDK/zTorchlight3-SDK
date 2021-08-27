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

// Function CreditNameFirst.CreditNameFirst_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UCreditNameFirst_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditNameFirst.CreditNameFirst_C.SetText");

	UCreditNameFirst_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditNameFirst.CreditNameFirst_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCreditNameFirst_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditNameFirst.CreditNameFirst_C.PreConstruct");

	UCreditNameFirst_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditNameFirst.CreditNameFirst_C.ExecuteUbergraph_CreditNameFirst
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditNameFirst_C::ExecuteUbergraph_CreditNameFirst(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditNameFirst.CreditNameFirst_C.ExecuteUbergraph_CreditNameFirst");

	UCreditNameFirst_C_ExecuteUbergraph_CreditNameFirst_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
