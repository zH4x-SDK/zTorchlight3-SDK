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

// Function Intro_YapperGate_01.SequenceDirector_C.BossName
// (Public, BlueprintCallable, BlueprintEvent)
void USequenceDirector_C::BossName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Intro_YapperGate_01.SequenceDirector_C.BossName");

	USequenceDirector_C_BossName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
