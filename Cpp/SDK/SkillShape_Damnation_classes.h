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

// BlueprintGeneratedClass SkillShape_Damnation.SkillShape_Damnation_C
// 0x0030 (FullSize[0x0470] - InheritedSize[0x0440])
class ASkillShape_Damnation_C : public AHazard
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           Capsule;                                                   // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTLDecalComponent*                           damnation_decal_small;                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTLDecalComponent*                           damnation_decal_01;                                        // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTLDecalComponent*                           shadow_decal;                                              // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Sigil;                                                     // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SkillShape_Damnation.SkillShape_Damnation_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnHitTarget(class AActor* ActorInContact);
	void ExecuteUbergraph_SkillShape_Damnation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
