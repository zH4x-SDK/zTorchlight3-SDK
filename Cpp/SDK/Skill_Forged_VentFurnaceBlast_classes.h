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

// BlueprintGeneratedClass Skill_Forged_VentFurnaceBlast.Skill_Forged_VentFurnaceBlast_C
// 0x0006 (FullSize[0x0548] - InheritedSize[0x0542])
class USkill_Forged_VentFurnaceBlast_C : public USkill_ForgedBase_C
{
public:
	unsigned char                                      UnknownData_O049[0x2];                                     // 0x0542(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BurnDuration;                                              // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Skill_Forged_VentFurnaceBlast.Skill_Forged_VentFurnaceBlast_C");
		return ptr;
	}



	bool BlueprintCanSkillStart(class AActor* SourceActor, class AActor* TargetActor, const struct FVector& TargetLocation);
	void GetSkillShapeClass(class AActor* Source, class UClass** SkillShape);
	void OnSkillActorOverlap(class AActor* Instigator, class AActor* Actor, class ASkillShape* Shape, bool bIsPrimaryTarget, int SkillInstanceId);
	bool OnSkillEventHit01(class AActor* Actor, class AActor* TargetActor, const struct FVector& TargetLocation, int SkillInstanceId);
	struct FText GetSkillDescription(class AActor* Actor, int SkillLevel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
