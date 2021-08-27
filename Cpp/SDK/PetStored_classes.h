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

// WidgetBlueprintGeneratedClass PetStored.PetStored_C
// 0x0050 (FullSize[0x0958] - InheritedSize[0x0908])
class UPetStored_C : public UPetStoredWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0908(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Refresh;                                                   // 0x0910(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLButton*                                   CloseButton;                                               // 0x0918(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    DeleteButton;                                              // 0x0920(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    Flash;                                                     // 0x0928(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPetIconWidget_C*                            PetIconWidget;                                             // 0x0930(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                PetName;                                                   // 0x0938(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                PetRarity;                                                 // 0x0940(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillDisplayListWidget*                     PetSkills;                                                 // 0x0948(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                PetType;                                                   // 0x0950(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PetStored.PetStored_C");
		return ptr;
	}



	class UWidget* GetReleaseButtonWidget();
	class UTLTextBlock* GetPetTypeTextBlock();
	class UTLTextBlock* GetRarityTextBlock();
	class USkillDisplayListWidget* GetPetSkillList();
	class UPetIconWidget* GetPetIconWidget();
	class UTLTextBlock* GetPetName();
	void PlayChangedAnimation();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_PetStored(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
