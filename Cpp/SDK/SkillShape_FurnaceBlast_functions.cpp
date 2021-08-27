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

// Function SkillShape_FurnaceBlast.SkillShape_FurnaceBlast_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ASkillShape_FurnaceBlast_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_FurnaceBlast.SkillShape_FurnaceBlast_C.ReceiveBeginPlay");

	ASkillShape_FurnaceBlast_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillShape_FurnaceBlast.SkillShape_FurnaceBlast_C.ExecuteUbergraph_SkillShape_FurnaceBlast
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASkillShape_FurnaceBlast_C::ExecuteUbergraph_SkillShape_FurnaceBlast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillShape_FurnaceBlast.SkillShape_FurnaceBlast_C.ExecuteUbergraph_SkillShape_FurnaceBlast");

	ASkillShape_FurnaceBlast_C_ExecuteUbergraph_SkillShape_FurnaceBlast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
