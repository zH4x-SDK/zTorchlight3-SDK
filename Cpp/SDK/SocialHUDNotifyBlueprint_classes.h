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

// WidgetBlueprintGeneratedClass SocialHUDNotifyBlueprint.SocialHUDNotifyBlueprint_C
// 0x0020 (FullSize[0x0678] - InheritedSize[0x0658])
class USocialHUDNotifyBlueprint_C : public USocialHUDNotificationWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0658(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLButton*                                   InteractiveButton;                                         // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_1;                                                 // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                TLTextBlock_1;                                             // 0x0670(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SocialHUDNotifyBlueprint.SocialHUDNotifyBlueprint_C");
		return ptr;
	}



	void BndEvt__TLButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_SocialHUDNotifyBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
