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

// Function ss_BasePants_Modular.ss_BasePants_Modular_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Ass_BasePants_Modular_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ss_BasePants_Modular.ss_BasePants_Modular_C.UserConstructionScript");

	Ass_BasePants_Modular_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
