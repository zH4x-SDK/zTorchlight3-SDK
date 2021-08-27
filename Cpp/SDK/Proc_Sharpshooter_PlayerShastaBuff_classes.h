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

// BlueprintGeneratedClass Proc_Sharpshooter_PlayerShastaBuff.Proc_Sharpshooter_PlayerShastaBuff_C
// 0x0004 (FullSize[0x0564] - InheritedSize[0x0560])
class UProc_Sharpshooter_PlayerShastaBuff_C : public UBaseProcSkill_C
{
public:
	float                                              healing;                                                   // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proc_Sharpshooter_PlayerShastaBuff.Proc_Sharpshooter_PlayerShastaBuff_C");
		return ptr;
	}



	void OnSkillStart(class AActor* Actor, class AActor* SkillTarget, const struct FVector& Location, float Param, int SkillInstanceId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
