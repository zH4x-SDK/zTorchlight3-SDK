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

// Function FazeerAnimations.FazeerAnimations_C.GetDialogueAnchor
struct UFazeerAnimations_C_GetDialogueAnchor_Params
{
	class UMenuAnchor*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FazeerAnimations.FazeerAnimations_C.GetDialogueTextBlock
struct UFazeerAnimations_C_GetDialogueTextBlock_Params
{
	class UTLRichTextBlock*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FazeerAnimations.FazeerAnimations_C.GetLoopingIdleAnimation
struct UFazeerAnimations_C_GetLoopingIdleAnimation_Params
{
	class UWidgetAnimation*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FazeerAnimations.FazeerAnimations_C.WinkStart
struct UFazeerAnimations_C_WinkStart_Params
{
	struct FDungeonUIActionMetadata                    MetaData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function FazeerAnimations.FazeerAnimations_C.WinkEnd
struct UFazeerAnimations_C_WinkEnd_Params
{
	struct FDungeonUIActionMetadata                    MetaData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function FazeerAnimations.FazeerAnimations_C.OpenMouth
struct UFazeerAnimations_C_OpenMouth_Params
{
	struct FDungeonUIActionMetadata                    MetaData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function FazeerAnimations.FazeerAnimations_C.CloseMouth
struct UFazeerAnimations_C_CloseMouth_Params
{
	struct FDungeonUIActionMetadata                    MetaData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function FazeerAnimations.FazeerAnimations_C.ExecuteUbergraph_FazeerAnimations
struct UFazeerAnimations_C_ExecuteUbergraph_FazeerAnimations_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
