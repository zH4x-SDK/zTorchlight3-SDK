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

// Function FazeerAnimations.FazeerAnimations_C.GetDialogueAnchor
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UMenuAnchor* UFazeerAnimations_C::GetDialogueAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function FazeerAnimations.FazeerAnimations_C.GetDialogueAnchor");

	UFazeerAnimations_C_GetDialogueAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FazeerAnimations.FazeerAnimations_C.GetDialogueTextBlock
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UTLRichTextBlock*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTLRichTextBlock* UFazeerAnimations_C::GetDialogueTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function FazeerAnimations.FazeerAnimations_C.GetDialogueTextBlock");

	UFazeerAnimations_C_GetDialogueTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FazeerAnimations.FazeerAnimations_C.GetLoopingIdleAnimation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidgetAnimation*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidgetAnimation* UFazeerAnimations_C::GetLoopingIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FazeerAnimations.FazeerAnimations_C.GetLoopingIdleAnimation");

	UFazeerAnimations_C_GetLoopingIdleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function FazeerAnimations.FazeerAnimations_C.WinkStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDungeonUIActionMetadata MetaData                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UFazeerAnimations_C::WinkStart(const struct FDungeonUIActionMetadata& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function FazeerAnimations.FazeerAnimations_C.WinkStart");

	UFazeerAnimations_C_WinkStart_Params params;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FazeerAnimations.FazeerAnimations_C.WinkEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDungeonUIActionMetadata MetaData                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UFazeerAnimations_C::WinkEnd(const struct FDungeonUIActionMetadata& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function FazeerAnimations.FazeerAnimations_C.WinkEnd");

	UFazeerAnimations_C_WinkEnd_Params params;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FazeerAnimations.FazeerAnimations_C.OpenMouth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDungeonUIActionMetadata MetaData                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UFazeerAnimations_C::OpenMouth(const struct FDungeonUIActionMetadata& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function FazeerAnimations.FazeerAnimations_C.OpenMouth");

	UFazeerAnimations_C_OpenMouth_Params params;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FazeerAnimations.FazeerAnimations_C.CloseMouth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDungeonUIActionMetadata MetaData                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UFazeerAnimations_C::CloseMouth(const struct FDungeonUIActionMetadata& MetaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function FazeerAnimations.FazeerAnimations_C.CloseMouth");

	UFazeerAnimations_C_CloseMouth_Params params;
	params.MetaData = MetaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FazeerAnimations.FazeerAnimations_C.ExecuteUbergraph_FazeerAnimations
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFazeerAnimations_C::ExecuteUbergraph_FazeerAnimations(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FazeerAnimations.FazeerAnimations_C.ExecuteUbergraph_FazeerAnimations");

	UFazeerAnimations_C_ExecuteUbergraph_FazeerAnimations_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
