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

// BlueprintGeneratedClass BasePet.BasePet_C
// 0x0170 (FullSize[0x08A0] - InheritedSize[0x0730])
class ABasePet_C : public ATLCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0730(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UATM_Pet_LowHealth_C*                        ATM_Pet_LowHealth;                                         // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBlobShadowComponent*                        BlobShadow;                                                // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlayerAffixComponent*                       PlayerAffix;                                               // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAudioImportanceComponent*                   AudioImportance;                                           // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNameDataComponent*                          NameData;                                                  // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMapMarkerComponent*                         MapMarker;                                                 // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialManagerComponent*                   MaterialManager;                                           // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkillList*                                  Spawn_Skills;                                              // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UProcComponent*                              Proc;                                                      // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkillList*                                  SkillList;                                                 // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkillList*                                  Base_Skills;                                               // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAudioEffectMap*                             AudioEffectMap;                                            // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTLPathFollowing*                            TLPathFollowing;                                           // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FFMODEventReference                         PetFlee;                                                   // 0x07A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFMODEventReference                         PetSendToTown;                                             // 0x07B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FEffectDefinition                           BlinkEffectDefinition;                                     // 0x07D0(0x00D0) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BasePet.BasePet_C");
		return ptr;
	}



	void PlayBlinkEffect();
	void OnHitpointsHitZero(class UActiveTrait* Trait);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BasePet(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
