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

// WidgetBlueprintGeneratedClass TextInputWidget.TextInputWidget_C
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class UTextInputWidget_C : public UTextInputWidget
{
public:
	class UTLEditableTextBox*                          EditTextBox;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TextInputWidget.TextInputWidget_C");
		return ptr;
	}



	class UWidget* GetEditableText();
	struct FString GetInputValue();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
