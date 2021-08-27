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

// Function SkillTierProgressHeader.SkillTierProgressHeader_C.SetProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ProgressNum                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ProgressMax                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TotalPointsRequired            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillTierProgressHeader_C::SetProgress(int ProgressNum, int ProgressMax, int TotalPointsRequired)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTierProgressHeader.SkillTierProgressHeader_C.SetProgress");

	USkillTierProgressHeader_C_SetProgress_Params params;
	params.ProgressNum = ProgressNum;
	params.ProgressMax = ProgressMax;
	params.TotalPointsRequired = TotalPointsRequired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillTierProgressHeader.SkillTierProgressHeader_C.BlueprintRefresh
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsNewTab                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            TierIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bIsUnlocked                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            LevelsGainedInTier             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            LevelForTab                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            LevelsRequiredForPreviousTier  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            LevelsRequiredForCurrentTier   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillTierProgressHeader_C::BlueprintRefresh(bool bIsNewTab, int TierIndex, bool bIsUnlocked, int LevelsGainedInTier, int LevelForTab, int LevelsRequiredForPreviousTier, int LevelsRequiredForCurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTierProgressHeader.SkillTierProgressHeader_C.BlueprintRefresh");

	USkillTierProgressHeader_C_BlueprintRefresh_Params params;
	params.bIsNewTab = bIsNewTab;
	params.TierIndex = TierIndex;
	params.bIsUnlocked = bIsUnlocked;
	params.LevelsGainedInTier = LevelsGainedInTier;
	params.LevelForTab = LevelForTab;
	params.LevelsRequiredForPreviousTier = LevelsRequiredForPreviousTier;
	params.LevelsRequiredForCurrentTier = LevelsRequiredForCurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillTierProgressHeader.SkillTierProgressHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USkillTierProgressHeader_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTierProgressHeader.SkillTierProgressHeader_C.PreConstruct");

	USkillTierProgressHeader_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SkillTierProgressHeader.SkillTierProgressHeader_C.ExecuteUbergraph_SkillTierProgressHeader
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USkillTierProgressHeader_C::ExecuteUbergraph_SkillTierProgressHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTierProgressHeader.SkillTierProgressHeader_C.ExecuteUbergraph_SkillTierProgressHeader");

	USkillTierProgressHeader_C_ExecuteUbergraph_SkillTierProgressHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
