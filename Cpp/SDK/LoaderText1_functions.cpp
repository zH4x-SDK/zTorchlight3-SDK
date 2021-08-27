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

// Function LoaderText1.LoaderText1_C.GetTextBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTLRichTextBlock*        TextBlock                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoaderText1_C::GetTextBlock(class UTLRichTextBlock** TextBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoaderText1.LoaderText1_C.GetTextBlock");

	ULoaderText1_C_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextBlock != nullptr)
		*TextBlock = params.TextBlock;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
