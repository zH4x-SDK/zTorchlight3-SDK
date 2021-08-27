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

// WidgetBlueprintGeneratedClass LoaderText1.LoaderText1_C
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class ULoaderText1_C : public UUserWidget
{
public:
	class UWidgetAnimation*                            FadeIn;                                                    // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLRichTextBlock*                            TLRichTextBlock_1;                                         // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoaderText1.LoaderText1_C");
		return ptr;
	}



	void GetTextBlock(class UTLRichTextBlock** TextBlock);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
