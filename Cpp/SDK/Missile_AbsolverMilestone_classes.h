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

// BlueprintGeneratedClass Missile_AbsolverMilestone.Missile_AbsolverMilestone_C
// 0x0018 (FullSize[0x0698] - InheritedSize[0x0680])
class AMissile_AbsolverMilestone_C : public AMissileBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                                // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Missile_AbsolverMilestone.Missile_AbsolverMilestone_C");
		return ptr;
	}



	void NewFunction_1();
	void OnMissileDidDamage(class AActor* Target);
	void ExecuteUbergraph_Missile_AbsolverMilestone(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
