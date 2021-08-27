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

// BlueprintGeneratedClass Missile_FlamingDestroyer_Fireball.Missile_FlamingDestroyer_Fireball_C
// 0x001C (FullSize[0x069C] - InheritedSize[0x0680])
class AMissile_FlamingDestroyer_Fireball_C : public AMissileBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        misisle_light;                                             // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              BurnDuration;                                              // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Missile_FlamingDestroyer_Fireball.Missile_FlamingDestroyer_Fireball_C");
		return ptr;
	}



	void DoHit(class AActor* Actor, bool bBlockingHit);
	void ExecuteUbergraph_Missile_FlamingDestroyer_Fireball(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
