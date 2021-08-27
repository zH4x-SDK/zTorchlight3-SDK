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

// BlueprintGeneratedClass Missile_Forged_ShootCannon.Missile_Forged_ShootCannon_C
// 0x0011 (FullSize[0x0691] - InheritedSize[0x0680])
class AMissile_Forged_ShootCannon_C : public AMissileBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               Piercing;                                                  // 0x0690(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Missile_Forged_ShootCannon.Missile_Forged_ShootCannon_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnMissileLaunched();
	void ExecuteUbergraph_Missile_Forged_ShootCannon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
