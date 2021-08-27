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

// Function BaseBreakable.BaseBreakable_C.GetDestructibleComponent
struct ABaseBreakable_C_GetDestructibleComponent_Params
{
	class UDestructibleComponent*                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseBreakable.BaseBreakable_C.OnBreak
struct ABaseBreakable_C_OnBreak_Params
{
	class AActor*                                      Attacker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BaseBreakable.BaseBreakable_C.ExecuteUbergraph_BaseBreakable
struct ABaseBreakable_C_ExecuteUbergraph_BaseBreakable_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
