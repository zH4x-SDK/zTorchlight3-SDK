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

// BlueprintGeneratedClass gob_triggersphere_quest_introthreshold_bp.gob_triggersphere_quest_introthreshold_bp_C
// 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
class Agob_triggersphere_quest_introthreshold_bp_C : public ATriggerSphereQuest_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gob_triggersphere_quest_introthreshold_bp.gob_triggersphere_quest_introthreshold_bp_C");
		return ptr;
	}



	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_gob_triggersphere_quest_introthreshold_bp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
