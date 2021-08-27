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

// BlueprintGeneratedClass Skill_PetImmobilize.Skill_PetImmobilize_C
// 0x0018 (FullSize[0x0558] - InheritedSize[0x0540])
class USkill_PetImmobilize_C : public USkill
{
public:
	float                                              Chance;                                                    // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ImmobilizeDuration;                                        // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               NewVar_1;                                                  // 0x0548(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_PetImmobilize.Skill_PetImmobilize_C");
		return ptr;
	}



	void OnSkillEquipped(class AActor* Actor);
	void OnSkillUnequipped(class AActor* Actor);
	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
