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

// BlueprintGeneratedClass npcstretch_mapvendor_Act2_bp.npcstretch_mapvendor_Act2_bp_C
// 0x0008 (FullSize[0x04D0] - InheritedSize[0x04C8])
class Anpcstretch_mapvendor_Act2_bp_C : public Anpcbasevendor_bp_C
{
public:
	class USkeletalMeshComponent*                      Hair;                                                      // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass npcstretch_mapvendor_Act2_bp.npcstretch_mapvendor_Act2_bp_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
