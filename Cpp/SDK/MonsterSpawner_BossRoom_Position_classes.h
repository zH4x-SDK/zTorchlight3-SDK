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

// BlueprintGeneratedClass MonsterSpawner_BossRoom_Position.MonsterSpawner_BossRoom_Position_C
// 0x0008 (FullSize[0x0320] - InheritedSize[0x0318])
class AMonsterSpawner_BossRoom_Position_C : public AMonsterSpawner_BossRoom_Base_C
{
public:
	class UMonsterSpawnPosition*                       MonsterSpawnPosition;                                      // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MonsterSpawner_BossRoom_Position.MonsterSpawner_BossRoom_Position_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
