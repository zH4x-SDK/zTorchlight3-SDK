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

// BlueprintGeneratedClass gbl_lootable_corpse_imperial_01_bp.gbl_lootable_corpse_imperial_01_bp_C
// 0x0010 (FullSize[0x04D0] - InheritedSize[0x04C0])
class Agbl_lootable_corpse_imperial_01_bp_C : public ABaseClickableWithAnims_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHighlightMaterialComponent*                 HighlightMaterial;                                         // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gbl_lootable_corpse_imperial_01_bp.gbl_lootable_corpse_imperial_01_bp_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_gbl_lootable_corpse_imperial_01_bp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
