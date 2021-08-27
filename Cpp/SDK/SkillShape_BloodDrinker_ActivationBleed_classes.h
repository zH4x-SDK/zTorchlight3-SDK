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

// BlueprintGeneratedClass SkillShape_BloodDrinker_ActivationBleed.SkillShape_BloodDrinker_ActivationBleed_C
// 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
class ASkillShape_BloodDrinker_ActivationBleed_C : public ASkillShapeSphere_C
{
public:
	class UTLParticleSystemComponent*                  Blood_FX_Censored;                                         // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTLParticleSystemComponent*                  Blood_FX;                                                  // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTLDecalComponent*                           Shadow_Decal;                                              // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SkillShape_BloodDrinker_ActivationBleed.SkillShape_BloodDrinker_ActivationBleed_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
