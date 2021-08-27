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

// BlueprintGeneratedClass QuestRewardsChest.QuestRewardsChest_C
// 0x0020 (FullSize[0x04E0] - InheritedSize[0x04C0])
class AQuestRewardsChest_C : public ABaseClickableWithAnims_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLParticleSystemComponent*                  TLParticleSystem;                                          // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMapMarkerComponent*                         MapMarker;                                                 // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       QuestId;                                                   // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QuestRewardsChest.QuestRewardsChest_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnOperated(class AActor* Operator);
	void StartFalling();
	void SetQuestId(const struct FName& QuestId);
	void ExecuteUbergraph_QuestRewardsChest(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
