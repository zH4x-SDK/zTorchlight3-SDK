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

// Function FullScreenVideo.FullScreenVideo_C.GetConfirmationWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLUserWidget*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLUserWidget* UFullScreenVideo_C::GetConfirmationWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullScreenVideo.FullScreenVideo_C.GetConfirmationWidget");

	UFullScreenVideo_C_GetConfirmationWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FullScreenVideo.FullScreenVideo_C.GetTLVideo
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLVideo*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLVideo* UFullScreenVideo_C::GetTLVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullScreenVideo.FullScreenVideo_C.GetTLVideo");

	UFullScreenVideo_C_GetTLVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
