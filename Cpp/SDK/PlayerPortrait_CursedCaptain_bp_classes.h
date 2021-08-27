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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPortrait_CursedCaptain_bp.PlayerPortrait_CursedCaptain_bp_C
// 0x0008 (FullSize[0x0418] - InheritedSize[0x0410])
class APlayerPortrait_CursedCaptain_bp_C : public APlayerPortrait_Base_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPortrait_CursedCaptain_bp.PlayerPortrait_CursedCaptain_bp_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_PlayerPortrait_CursedCaptain_bp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
