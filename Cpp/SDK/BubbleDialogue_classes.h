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

// WidgetBlueprintGeneratedClass BubbleDialogue.BubbleDialogue_C
// 0x0018 (FullSize[0x0668] - InheritedSize[0x0650])
class UBubbleDialogue_C : public UFloatingTextWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            show;                                                      // 0x0658(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLRichTextBlock*                            TLRichTextBlock_2;                                         // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BubbleDialogue.BubbleDialogue_C");
		return ptr;
	}



	class UWidgetAnimation* GetShowAnimation();
	class UTLRichTextBlock* GetRichTextBlock();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BubbleDialogue(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
