#pragma once

// Name: Torchlight3, Version: 1.0.0


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

// Function StatusEffect_Champion.StatusEffect_Champion_C.ShouldPlayDeathEffects
struct UStatusEffect_Champion_C_ShouldPlayDeathEffects_Params
{
	bool                                               ShouldPlay;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StatusEffect_Champion.StatusEffect_Champion_C.ShouldPlaySpawnEffects
struct UStatusEffect_Champion_C_ShouldPlaySpawnEffects_Params
{
	bool                                               ShouldPlay;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StatusEffect_Champion.StatusEffect_Champion_C.OnPreApply
struct UStatusEffect_Champion_C_OnPreApply_Params
{
};

// Function StatusEffect_Champion.StatusEffect_Champion_C.ExecuteUbergraph_StatusEffect_Champion
struct UStatusEffect_Champion_C_ExecuteUbergraph_StatusEffect_Champion_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
