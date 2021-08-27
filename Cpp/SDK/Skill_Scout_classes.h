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

// BlueprintGeneratedClass Skill_Scout.Skill_Scout_C
// 0x000B (FullSize[0x0564] - InheritedSize[0x0559])
class USkill_Scout_C : public USkill_Sharpshooter_Adventurer_Base_C
{
public:
	unsigned char                                      UnknownData_XLM7[0x3];                                     // 0x0559(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              damage1;                                                   // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              statuseffect_duration;                                     // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_Scout.Skill_Scout_C");
		return ptr;
	}



	void OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId);
	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
