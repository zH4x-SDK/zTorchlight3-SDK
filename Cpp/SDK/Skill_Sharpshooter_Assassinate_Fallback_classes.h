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

// BlueprintGeneratedClass Skill_Sharpshooter_Assassinate_Fallback.Skill_Sharpshooter_Assassinate_Fallback_C
// 0x0008 (FullSize[0x0548] - InheritedSize[0x0540])
class USkill_Sharpshooter_Assassinate_Fallback_C : public USkill
{
public:
	class UClass*                                      FallbackStatus;                                            // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_Sharpshooter_Assassinate_Fallback.Skill_Sharpshooter_Assassinate_Fallback_C");
		return ptr;
	}



	bool OnSkillEventHit01(class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation, int SkillInstanceId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
