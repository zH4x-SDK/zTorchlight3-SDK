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

// Function PetStored.PetStored_C.GetReleaseButtonWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UPetStored_C::GetReleaseButtonWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStored.PetStored_C.GetReleaseButtonWidget");

	UPetStored_C_GetReleaseButtonWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStored.PetStored_C.GetPetTypeTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPetStored_C::GetPetTypeTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStored.PetStored_C.GetPetTypeTextBlock");

	UPetStored_C_GetPetTypeTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStored.PetStored_C.GetRarityTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPetStored_C::GetRarityTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStored.PetStored_C.GetRarityTextBlock");

	UPetStored_C_GetRarityTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStored.PetStored_C.GetPetSkillList
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkillDisplayListWidget* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkillDisplayListWidget* UPetStored_C::GetPetSkillList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStored.PetStored_C.GetPetSkillList");

	UPetStored_C_GetPetSkillList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStored.PetStored_C.GetPetIconWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPetIconWidget*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UPetIconWidget* UPetStored_C::GetPetIconWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStored.PetStored_C.GetPetIconWidget");

	UPetStored_C_GetPetIconWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStored.PetStored_C.GetPetName
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPetStored_C::GetPetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStored.PetStored_C.GetPetName");

	UPetStored_C_GetPetName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PetStored.PetStored_C.PlayChangedAnimation
// (Event, Public, BlueprintEvent)
void UPetStored_C::PlayChangedAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStored.PetStored_C.PlayChangedAnimation");

	UPetStored_C_PlayChangedAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetStored.PetStored_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UPetStored_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStored.PetStored_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPetStored_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PetStored.PetStored_C.ExecuteUbergraph_PetStored
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPetStored_C::ExecuteUbergraph_PetStored(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PetStored.PetStored_C.ExecuteUbergraph_PetStored");

	UPetStored_C_ExecuteUbergraph_PetStored_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
