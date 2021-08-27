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

// BlueprintGeneratedClass SkillShape_AllyRevive.SkillShape_AllyRevive_C
// 0x0020 (FullSize[0x0300] - InheritedSize[0x02E0])
class ASkillShape_AllyRevive_C : public AAllyReviveShape
{
public:
	class UParticleSystemComponent*                    vfx_dead_player_indicator_01;                              // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTLDecalComponent*                           RevivingDecal;                                             // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTLDecalComponent*                           ReviveRangeDecal;                                          // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTLDecalComponent*                           ReviveExpireDecal;                                         // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SkillShape_AllyRevive.SkillShape_AllyRevive_C");
		return ptr;
	}



	class UTLDecalComponent* GetRevivingDecal();
	class UTLDecalComponent* GetReviveExpireDecal();
	class UTLDecalComponent* GetReviveRangeDecal();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
