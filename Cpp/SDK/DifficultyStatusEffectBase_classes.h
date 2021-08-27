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

// BlueprintGeneratedClass DifficultyStatusEffectBase.DifficultyStatusEffectBase_C
// 0x0018 (FullSize[0x0298] - InheritedSize[0x0280])
class UDifficultyStatusEffectBase_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FDifficultyTableRowHandle                   DifficultyRow;                                             // 0x0288(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DifficultyStatusEffectBase.DifficultyStatusEffectBase_C");
		return ptr;
	}



	void OnPreApply();
	void ExecuteUbergraph_DifficultyStatusEffectBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
