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

// Function ClassMechanicHelpScreen_CC.ClassMechanicHelpScreen_CC_C.GetHideAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UClassMechanicHelpScreen_CC_C::GetHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClassMechanicHelpScreen_CC.ClassMechanicHelpScreen_CC_C.GetHideAnimation");

	UClassMechanicHelpScreen_CC_C_GetHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ClassMechanicHelpScreen_CC.ClassMechanicHelpScreen_CC_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UClassMechanicHelpScreen_CC_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClassMechanicHelpScreen_CC.ClassMechanicHelpScreen_CC_C.GetShowAnimation");

	UClassMechanicHelpScreen_CC_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
