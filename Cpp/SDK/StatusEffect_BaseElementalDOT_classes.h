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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StatusEffect_BaseElementalDOT.StatusEffect_BaseElementalDOT_C
// 0x0029 (FullSize[0x02A9] - InheritedSize[0x0280])
class UStatusEffect_BaseElementalDOT_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                                ProcTag;                                                   // 0x0288(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventReference                         SoundEffect;                                               // 0x0290(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	Frontiers_EWeaponSlot                              WeaponSlot;                                                // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_BaseElementalDOT.StatusEffect_BaseElementalDOT_C");
		return ptr;
	}



	TArray<struct FTraitKey> GetBlueprintRelevantInstigatorTraitKeys();
	void OnPreApply();
	void ExecuteUbergraph_StatusEffect_BaseElementalDOT(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
