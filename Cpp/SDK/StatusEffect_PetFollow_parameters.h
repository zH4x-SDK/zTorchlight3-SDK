#pragma once

// Name: Torchlight3, Version: 4.26.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.SetNewBaseSpeed
struct UStatusEffect_PetFollow_C_SetNewBaseSpeed_Params
{
	float                                              NewBaseSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.MatchesBaseSpeed
struct UStatusEffect_PetFollow_C_MatchesBaseSpeed_Params
{
	float                                              Speed;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.IsBehindActor
struct UStatusEffect_PetFollow_C_IsBehindActor_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.OnEventTimerTick
struct UStatusEffect_PetFollow_C_OnEventTimerTick_Params
{
};

// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.OnPreApply
struct UStatusEffect_PetFollow_C_OnPreApply_Params
{
};

// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.OnCleared
struct UStatusEffect_PetFollow_C_OnCleared_Params
{
};

// Function StatusEffect_PetFollow.StatusEffect_PetFollow_C.ExecuteUbergraph_StatusEffect_PetFollow
struct UStatusEffect_PetFollow_C_ExecuteUbergraph_StatusEffect_PetFollow_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
