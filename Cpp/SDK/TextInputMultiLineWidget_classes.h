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

// WidgetBlueprintGeneratedClass TextInputMultiLineWidget.TextInputMultiLineWidget_C
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class UTextInputMultiLineWidget_C : public UTextInputWidget
{
public:
	class UMultiLineEditableTextBox*                   TextInput;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TextInputMultiLineWidget.TextInputMultiLineWidget_C");
		return ptr;
	}



	class UWidget* GetEditableText();
	struct FString GetInputValue();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
