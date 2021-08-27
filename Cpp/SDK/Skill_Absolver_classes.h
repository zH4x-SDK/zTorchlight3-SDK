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

// BlueprintGeneratedClass Skill_Absolver.Skill_Absolver_C
// 0x0007 (FullSize[0x0548] - InheritedSize[0x0541])
class USkill_Absolver_C : public USkill_DuskMageLight_Base_C
{
public:
	unsigned char                                      UnknownData_K2FR[0x3];                                     // 0x0541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StatusDuration;                                            // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_Absolver.Skill_Absolver_C");
		return ptr;
	}



	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
	void OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId);
	void OnSkillDidDamage(class AActor* Actor, class AActor* DeliveryActor, class AActor* TargetActor, float Amount, bool bKilledTarget, bool bCritical, int SkillInstanceId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
