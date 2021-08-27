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

// BlueprintGeneratedClass MonsterSpawner_BossRoom_Position_Triggered.MonsterSpawner_BossRoom_Position_Triggered_C
// 0x0008 (FullSize[0x0328] - InheritedSize[0x0320])
class AMonsterSpawner_BossRoom_Position_Triggered_C : public AMonsterSpawner_BossRoom_Position_C
{
public:
	class UMonsterSpawnerTrigger*                      MonsterSpawnerTrigger;                                     // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MonsterSpawner_BossRoom_Position_Triggered.MonsterSpawner_BossRoom_Position_Triggered_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
