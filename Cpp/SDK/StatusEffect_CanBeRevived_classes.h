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

// BlueprintGeneratedClass StatusEffect_CanBeRevived.StatusEffect_CanBeRevived_C
// 0x00D0 (FullSize[0x0350] - InheritedSize[0x0280])
class UStatusEffect_CanBeRevived_C : public UStatusEffect
{
public:
	struct FEffectDefinition                           CanBeRevivedEffect;                                        // 0x0280(0x00D0) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_CanBeRevived.StatusEffect_CanBeRevived_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
