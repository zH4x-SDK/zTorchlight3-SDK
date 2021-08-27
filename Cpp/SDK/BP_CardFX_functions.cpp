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

// Function BP_CardFX.BP_CardFX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CardFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CardFX.BP_CardFX_C.UserConstructionScript");

	ABP_CardFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CardFX.BP_CardFX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_CardFX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CardFX.BP_CardFX_C.ReceiveBeginPlay");

	ABP_CardFX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_CardFX.BP_CardFX_C.ExecuteUbergraph_BP_CardFX
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CardFX_C::ExecuteUbergraph_BP_CardFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CardFX.BP_CardFX_C.ExecuteUbergraph_BP_CardFX");

	ABP_CardFX_C_ExecuteUbergraph_BP_CardFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
