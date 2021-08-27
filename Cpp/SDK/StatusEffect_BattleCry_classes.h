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

// BlueprintGeneratedClass StatusEffect_BattleCry.StatusEffect_BattleCry_C
// 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
class UStatusEffect_BattleCry_C : public UStatusEffectBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_BattleCry.StatusEffect_BattleCry_C");
		return ptr;
	}



	struct FText GetDescription(class AActor* ActorOwner);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
