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

// Function TLMonsterController.TLMonsterController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATLMonsterController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function TLMonsterController.TLMonsterController_C.ReceivePossess");

	ATLMonsterController_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TLMonsterController.TLMonsterController_C.ExecuteUbergraph_TLMonsterController
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATLMonsterController_C::ExecuteUbergraph_TLMonsterController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TLMonsterController.TLMonsterController_C.ExecuteUbergraph_TLMonsterController");

	ATLMonsterController_C_ExecuteUbergraph_TLMonsterController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
