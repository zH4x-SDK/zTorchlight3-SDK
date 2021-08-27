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

// Function PetDetailTooltip.PetDetailTooltip_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// UMG_ESlateVisibility           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UPetDetailTooltip_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailTooltip.PetDetailTooltip_C.GetVisibility_1");

	UPetDetailTooltip_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetDetailTooltip.PetDetailTooltip_C.GetPetSkillDescriptionList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillDescriptionListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillDescriptionListWidget* UPetDetailTooltip_C::GetPetSkillDescriptionList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetDetailTooltip.PetDetailTooltip_C.GetPetSkillDescriptionList");

	UPetDetailTooltip_C_GetPetSkillDescriptionList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
