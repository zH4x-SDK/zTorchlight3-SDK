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

// WidgetBlueprintGeneratedClass DyeWidget.DyeWidget_C
// 0x0018 (FullSize[0x0678] - InheritedSize[0x0660])
class UDyeWidget_C : public UDyeWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0660(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLButton*                                   Button;                                                    // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    DyeImage;                                                  // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DyeWidget.DyeWidget_C");
		return ptr;
	}



	class UTLImage* GetDyeImage();
	void BndEvt__Button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_DyeWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
