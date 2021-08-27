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

// BlueprintGeneratedClass npcgeneralgraye_intro_bp.npcgeneralgraye_intro_bp_C
// 0x0008 (FullSize[0x04D0] - InheritedSize[0x04C8])
class Anpcgeneralgraye_intro_bp_C : public Anpc_quest_base_C
{
public:
	class UBoxComponent*                               QuipBox;                                                   // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass npcgeneralgraye_intro_bp.npcgeneralgraye_intro_bp_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
