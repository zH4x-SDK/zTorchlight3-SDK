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

// Function PetIconWidget.PetIconWidget_C.GetComparisonMenuAnchor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UPetIconWidget_C::GetComparisonMenuAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetIconWidget.PetIconWidget_C.GetComparisonMenuAnchor");

	UPetIconWidget_C_GetComparisonMenuAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetIconWidget.PetIconWidget_C.GetPetIconImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UPetIconWidget_C::GetPetIconImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetIconWidget.PetIconWidget_C.GetPetIconImage");

	UPetIconWidget_C_GetPetIconImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetIconWidget.PetIconWidget_C.GetItemIconBackground
// (HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UPetIconWidget_C::GetItemIconBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetIconWidget.PetIconWidget_C.GetItemIconBackground");

	UPetIconWidget_C_GetItemIconBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetIconWidget.PetIconWidget_C.GetItemIconBorder
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLBorder*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLBorder* UPetIconWidget_C::GetItemIconBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetIconWidget.PetIconWidget_C.GetItemIconBorder");

	UPetIconWidget_C_GetItemIconBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
