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

// BlueprintGeneratedClass npc_playtest_dungeon.npc_playtest_dungeon_C
// 0x0008 (FullSize[0x04E8] - InheritedSize[0x04E0])
class Anpc_playtest_dungeon_C : public Anpc_playtest_base_C
{
public:
	class UStaticMeshComponent*                        QuestIndicatorAlways;                                      // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass npc_playtest_dungeon.npc_playtest_dungeon_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
