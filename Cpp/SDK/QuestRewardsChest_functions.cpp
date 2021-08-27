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

// Function QuestRewardsChest.QuestRewardsChest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AQuestRewardsChest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardsChest.QuestRewardsChest_C.ReceiveBeginPlay");

	AQuestRewardsChest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardsChest.QuestRewardsChest_C.OnOperated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Operator                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuestRewardsChest_C::OnOperated(class AActor* Operator)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardsChest.QuestRewardsChest_C.OnOperated");

	AQuestRewardsChest_C_OnOperated_Params params;
	params.Operator = Operator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardsChest.QuestRewardsChest_C.StartFalling
// (BlueprintCallable, BlueprintEvent)
void AQuestRewardsChest_C::StartFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardsChest.QuestRewardsChest_C.StartFalling");

	AQuestRewardsChest_C_StartFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardsChest.QuestRewardsChest_C.SetQuestId
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   QuestId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuestRewardsChest_C::SetQuestId(const struct FName& QuestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardsChest.QuestRewardsChest_C.SetQuestId");

	AQuestRewardsChest_C_SetQuestId_Params params;
	params.QuestId = QuestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function QuestRewardsChest.QuestRewardsChest_C.ExecuteUbergraph_QuestRewardsChest
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AQuestRewardsChest_C::ExecuteUbergraph_QuestRewardsChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestRewardsChest.QuestRewardsChest_C.ExecuteUbergraph_QuestRewardsChest");

	AQuestRewardsChest_C_ExecuteUbergraph_QuestRewardsChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
