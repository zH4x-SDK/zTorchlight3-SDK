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

// BlueprintGeneratedClass BasePotion.BasePotion_C
// 0x0030 (FullSize[0x0458] - InheritedSize[0x0428])
class ABasePotion_C : public ABaseAutoPickupItem_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkillList*                                  SkillList;                                                 // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FLinearColor                                PotionColor;                                               // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PotionPickup;                                              // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      PotionWidget;                                              // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BasePotion.BasePotion_C");
		return ptr;
	}



	void BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_DoPickedUpDelegate__DelegateSignature(class AActor* Actor);
	void ExecuteUbergraph_BasePotion(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
