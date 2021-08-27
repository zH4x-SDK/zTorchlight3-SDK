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

// WidgetBlueprintGeneratedClass TextTooltip.TextTooltip_C
// 0x0010 (FullSize[0x0690] - InheritedSize[0x0680])
class UTextTooltip_C : public UTooltipWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLRichTextBlock*                            TextBlock;                                                 // 0x0688(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TextTooltip.TextTooltip_C");
		return ptr;
	}



	class UTLRichTextBlock* GetTextBlock();
	void SetText(const struct FText& Text);
	void ExecuteUbergraph_TextTooltip(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
