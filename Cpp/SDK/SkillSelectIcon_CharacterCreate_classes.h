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

// WidgetBlueprintGeneratedClass SkillSelectIcon_CharacterCreate.SkillSelectIcon_CharacterCreate_C
// 0x0030 (FullSize[0x0EB8] - InheritedSize[0x0E88])
class USkillSelectIcon_CharacterCreate_C : public USkillInTabWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0E88(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Over;                                                      // 0x0E90(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_1;                                              // 0x0E98(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    SelectedBorder;                                            // 0x0EA0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAsyncImage*                                 SkillIcon;                                                 // 0x0EA8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_4;                                                 // 0x0EB0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillSelectIcon_CharacterCreate.SkillSelectIcon_CharacterCreate_C");
		return ptr;
	}



	class UWidgetAnimation* GetShowAnimation();
	class UWidgetAnimation* GetSelectAnimation();
	class UWidget* GetSelectedBorder();
	class UMenuAnchor* GetDescriptionAnchor();
	class UAsyncImage* GetIconImage();
	void BndEvt__UpgradeButtonFull_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UnlockButtonFull_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_SkillSelectIcon_CharacterCreate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
