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

// BlueprintGeneratedClass StatusEffect_RelicEnergyGainOnHit.StatusEffect_RelicEnergyGainOnHit_C
// 0x000C (FullSize[0x028C] - InheritedSize[0x0280])
class UStatusEffect_RelicEnergyGainOnHit_C : public UStatusEffectBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              BaseRegenValue;                                            // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_RelicEnergyGainOnHit.StatusEffect_RelicEnergyGainOnHit_C");
		return ptr;
	}



	void OnPreApply();
	void ExecuteUbergraph_StatusEffect_RelicEnergyGainOnHit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
