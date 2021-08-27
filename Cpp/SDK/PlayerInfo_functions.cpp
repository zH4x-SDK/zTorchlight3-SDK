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

// Function PlayerInfo.PlayerInfo_C.GetEmberWeaponImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UPlayerInfo_C::GetEmberWeaponImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetEmberWeaponImage");

	UPlayerInfo_C_GetEmberWeaponImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetEmberWeaponTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPlayerInfo_C::GetEmberWeaponTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetEmberWeaponTextBlock");

	UPlayerInfo_C_GetEmberWeaponTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetEmberWeaponWrapper
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UPlayerInfo_C::GetEmberWeaponWrapper()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetEmberWeaponWrapper");

	UPlayerInfo_C_GetEmberWeaponWrapper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.Get_ChangeDifficultyButton_bIsEnabled_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UPlayerInfo_C::Get_ChangeDifficultyButton_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.Get_ChangeDifficultyButton_bIsEnabled_1");

	UPlayerInfo_C_Get_ChangeDifficultyButton_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetDifficultyIcon
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UPlayerInfo_C::GetDifficultyIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetDifficultyIcon");

	UPlayerInfo_C_GetDifficultyIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.SetupAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUIButtonAction         NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UPlayerInfo_C::SetupAction(struct FUIButtonAction* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.SetupAction");

	UPlayerInfo_C_SetupAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function PlayerInfo.PlayerInfo_C.GetChangeDifficultyButton
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UPlayerInfo_C::GetChangeDifficultyButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetChangeDifficultyButton");

	UPlayerInfo_C_GetChangeDifficultyButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetShowAnimation
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UPlayerInfo_C::GetShowAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetShowAnimation");

	UPlayerInfo_C_GetShowAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetElementalDefenseTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPlayerInfo_C::GetElementalDefenseTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetElementalDefenseTextBlock");

	UPlayerInfo_C_GetElementalDefenseTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetDamageOverTimeTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPlayerInfo_C::GetDamageOverTimeTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetDamageOverTimeTextBlock");

	UPlayerInfo_C_GetDamageOverTimeTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetDefenseElement
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLImage*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLImage* UPlayerInfo_C::GetDefenseElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetDefenseElement");

	UPlayerInfo_C_GetDefenseElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetHardcoreWidget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UPlayerInfo_C::GetHardcoreWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetHardcoreWidget");

	UPlayerInfo_C_GetHardcoreWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetDifficultyTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPlayerInfo_C::GetDifficultyTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetDifficultyTextBlock");

	UPlayerInfo_C_GetDifficultyTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetDefenseTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPlayerInfo_C::GetDefenseTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetDefenseTextBlock");

	UPlayerInfo_C_GetDefenseTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetDPSTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPlayerInfo_C::GetDPSTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetDPSTextBlock");

	UPlayerInfo_C_GetDPSTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetEnergyMaxBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTraitTextBlock*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTraitTextBlock* UPlayerInfo_C::GetEnergyMaxBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetEnergyMaxBlock");

	UPlayerInfo_C_GetEnergyMaxBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetEnergyRegenBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTraitTextBlock*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTraitTextBlock* UPlayerInfo_C::GetEnergyRegenBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetEnergyRegenBlock");

	UPlayerInfo_C_GetEnergyRegenBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.GetCharacterNameTextBlock
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLTextBlock*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLTextBlock* UPlayerInfo_C::GetCharacterNameTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.GetCharacterNameTextBlock");

	UPlayerInfo_C_GetCharacterNameTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PlayerInfo.PlayerInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerInfo_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.PreConstruct");

	UPlayerInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfo.PlayerInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UPlayerInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.Construct");

	UPlayerInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerInfo_C::ExecuteUbergraph_PlayerInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo");

	UPlayerInfo_C_ExecuteUbergraph_PlayerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
