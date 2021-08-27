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

// Function HPBarFragment.HPBarFragment_C.GetSizeBox
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USizeBox*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USizeBox* UHPBarFragment_C::GetSizeBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function HPBarFragment.HPBarFragment_C.GetSizeBox");

	UHPBarFragment_C_GetSizeBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HPBarFragment.HPBarFragment_C.GetProgressBar
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UProgressBar*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UProgressBar* UHPBarFragment_C::GetProgressBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function HPBarFragment.HPBarFragment_C.GetProgressBar");

	UHPBarFragment_C_GetProgressBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function HPBarFragment.HPBarFragment_C.Setup
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          FromPercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ToPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHPBarFragment_C::Setup(float FromPercent, float ToPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HPBarFragment.HPBarFragment_C.Setup");

	UHPBarFragment_C_Setup_Params params;
	params.FromPercent = FromPercent;
	params.ToPercent = ToPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HPBarFragment.HPBarFragment_C.ExecuteUbergraph_HPBarFragment
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHPBarFragment_C::ExecuteUbergraph_HPBarFragment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HPBarFragment.HPBarFragment_C.ExecuteUbergraph_HPBarFragment");

	UHPBarFragment_C_ExecuteUbergraph_HPBarFragment_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
