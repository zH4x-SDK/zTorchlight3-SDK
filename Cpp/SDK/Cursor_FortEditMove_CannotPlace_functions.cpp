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

// Function Cursor_FortEditMove_CannotPlace.Cursor_FortEditMove_CannotPlace_C.GetImage
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UImage*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UImage* UCursor_FortEditMove_CannotPlace_C::GetImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cursor_FortEditMove_CannotPlace.Cursor_FortEditMove_CannotPlace_C.GetImage");

	UCursor_FortEditMove_CannotPlace_C_GetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
