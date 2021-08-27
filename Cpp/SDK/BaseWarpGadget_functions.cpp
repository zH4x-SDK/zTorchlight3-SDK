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

// Function BaseWarpGadget.BaseWarpGadget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseWarpGadget_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseWarpGadget.BaseWarpGadget_C.ReceiveBeginPlay");

	ABaseWarpGadget_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseWarpGadget.BaseWarpGadget_C.ExecuteUbergraph_BaseWarpGadget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseWarpGadget_C::ExecuteUbergraph_BaseWarpGadget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseWarpGadget.BaseWarpGadget_C.ExecuteUbergraph_BaseWarpGadget");

	ABaseWarpGadget_C_ExecuteUbergraph_BaseWarpGadget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
