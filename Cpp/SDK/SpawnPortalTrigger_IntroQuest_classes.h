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

// BlueprintGeneratedClass SpawnPortalTrigger_IntroQuest.SpawnPortalTrigger_IntroQuest_C
// 0x0018 (FullSize[0x04C0] - InheritedSize[0x04A8])
class ASpawnPortalTrigger_IntroQuest_C : public ABaseGadget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UQuestObjectComponent*                       QuestObject;                                               // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                            Sphere;                                                    // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpawnPortalTrigger_IntroQuest.SpawnPortalTrigger_IntroQuest_C");
		return ptr;
	}



	void OnOperated(class AActor* Operator);
	void ExecuteUbergraph_SpawnPortalTrigger_IntroQuest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
