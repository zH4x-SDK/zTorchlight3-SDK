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

// BlueprintGeneratedClass Skill_Basic_Sword_Offhand.Skill_Basic_Sword_Offhand_C
// 0x0000 (FullSize[0x0540] - InheritedSize[0x0540])
class USkill_Basic_Sword_Offhand_C : public USkill_Basic_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_Basic_Sword_Offhand.Skill_Basic_Sword_Offhand_C");
		return ptr;
	}



	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
	void OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
