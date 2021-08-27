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

// Function MainMenuLoadingScreenBackground.MainMenuLoadingScreenBackground_C.GetBGImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UMainMenuLoadingScreenBackground_C::GetBGImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuLoadingScreenBackground.MainMenuLoadingScreenBackground_C.GetBGImage");

	UMainMenuLoadingScreenBackground_C_GetBGImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuLoadingScreenBackground.MainMenuLoadingScreenBackground_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
struct FText UMainMenuLoadingScreenBackground_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuLoadingScreenBackground.MainMenuLoadingScreenBackground_C.GetText_1");

	UMainMenuLoadingScreenBackground_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MainMenuLoadingScreenBackground.MainMenuLoadingScreenBackground_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMainMenuLoadingScreenBackground_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuLoadingScreenBackground.MainMenuLoadingScreenBackground_C.Construct");

	UMainMenuLoadingScreenBackground_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MainMenuLoadingScreenBackground.MainMenuLoadingScreenBackground_C.ExecuteUbergraph_MainMenuLoadingScreenBackground
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMainMenuLoadingScreenBackground_C::ExecuteUbergraph_MainMenuLoadingScreenBackground(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuLoadingScreenBackground.MainMenuLoadingScreenBackground_C.ExecuteUbergraph_MainMenuLoadingScreenBackground");

	UMainMenuLoadingScreenBackground_C_ExecuteUbergraph_MainMenuLoadingScreenBackground_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
