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

// BlueprintGeneratedClass Skill_Potion_Master.Skill_Potion_Master_C
// 0x0038 (FullSize[0x0578] - InheritedSize[0x0540])
class USkill_Potion_Master_C : public USkill
{
public:
	float                                              StatusDuration;                                            // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RWT5[0x4];                                     // 0x0544(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PotionStatusEffect;                                        // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ApplyPotionToSelf;                                         // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ApplyPotionToMinions;                                      // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DEYR[0x6];                                     // 0x0552(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FFMODEventReference                         PotionSound;                                               // 0x0558(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                      AssociatedPotionActor;                                     // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_Potion_Master.Skill_Potion_Master_C");
		return ptr;
	}



	void ActivateOnPotionEffects(class AActor* Actor);
	void ActivateEffectsOnMinions(class AActor* Owner, class AActor* Inflictor);
	void ActivateEffectsOnSelf(class AActor* Target, class AActor* Inflictor);
	void ActivateNearbyPotionObjects(class AActor* Operator);
	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
	void OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
