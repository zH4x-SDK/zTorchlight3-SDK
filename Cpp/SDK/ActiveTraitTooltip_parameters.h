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

// Function ActiveTraitTooltip.ActiveTraitTooltip_C.GetTraitNameBlock
struct UActiveTraitTooltip_C_GetTraitNameBlock_Params
{
	class UTLTextBlock*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActiveTraitTooltip.ActiveTraitTooltip_C.GetCurrentTraitText
struct UActiveTraitTooltip_C_GetCurrentTraitText_Params
{
	class UActiveTraitTextBlock*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActiveTraitTooltip.ActiveTraitTooltip_C.GetMaxTraitText
struct UActiveTraitTooltip_C_GetMaxTraitText_Params
{
	class UTraitTextBlock*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
