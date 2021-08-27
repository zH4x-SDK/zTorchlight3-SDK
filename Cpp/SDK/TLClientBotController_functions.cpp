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

// Function TLClientBotController.TLClientBotController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATLClientBotController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TLClientBotController.TLClientBotController_C.ReceiveBeginPlay");

	ATLClientBotController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TLClientBotController.TLClientBotController_C.ExecuteUbergraph_TLClientBotController
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATLClientBotController_C::ExecuteUbergraph_TLClientBotController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TLClientBotController.TLClientBotController_C.ExecuteUbergraph_TLClientBotController");

	ATLClientBotController_C_ExecuteUbergraph_TLClientBotController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
