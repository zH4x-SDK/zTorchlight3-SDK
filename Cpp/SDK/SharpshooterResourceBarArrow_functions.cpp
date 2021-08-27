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

// Function SharpshooterResourceBarArrow.SharpshooterResourceBarArrow_C.GetFullAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* USharpshooterResourceBarArrow_C::GetFullAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SharpshooterResourceBarArrow.SharpshooterResourceBarArrow_C.GetFullAnimation");

	USharpshooterResourceBarArrow_C_GetFullAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SharpshooterResourceBarArrow.SharpshooterResourceBarArrow_C.GetSpendAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* USharpshooterResourceBarArrow_C::GetSpendAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function SharpshooterResourceBarArrow.SharpshooterResourceBarArrow_C.GetSpendAnimation");

	USharpshooterResourceBarArrow_C_GetSpendAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
