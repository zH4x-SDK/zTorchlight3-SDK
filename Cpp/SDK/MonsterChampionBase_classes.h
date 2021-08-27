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

// BlueprintGeneratedClass MonsterChampionBase.MonsterChampionBase_C
// 0x0010 (FullSize[0x0128] - InheritedSize[0x0118])
class UMonsterChampionBase_C : public UMonsterChampionComponent
{
public:
	TArray<class AActor*>                              AffixActors;                                               // 0x0118(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MonsterChampionBase.MonsterChampionBase_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
