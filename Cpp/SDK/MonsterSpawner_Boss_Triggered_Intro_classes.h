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

// BlueprintGeneratedClass MonsterSpawner_Boss_Triggered_Intro.MonsterSpawner_Boss_Triggered_Intro_C
// 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
class AMonsterSpawner_Boss_Triggered_Intro_C : public AMonsterSpawner_Boss_C
{
public:
	class UBoxComponent*                               Box;                                                       // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMonsterSpawnerTrigger*                      MonsterSpawnerTrigger;                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MonsterSpawner_Boss_Triggered_Intro.MonsterSpawner_Boss_Triggered_Intro_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
