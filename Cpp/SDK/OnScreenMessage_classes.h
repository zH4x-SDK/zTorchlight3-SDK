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

// WidgetBlueprintGeneratedClass OnScreenMessage.OnScreenMessage_C
// 0x0018 (FullSize[0x06F0] - InheritedSize[0x06D8])
class UOnScreenMessage_C : public UMessageWidget
{
public:
	class UWidgetAnimation*                            Hide;                                                      // 0x06D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            show;                                                      // 0x06E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLTextBlock*                                MessageText;                                               // 0x06E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OnScreenMessage.OnScreenMessage_C");
		return ptr;
	}



	class UWidgetAnimation* GetHideAnimation();
	class UWidgetAnimation* GetShowAnimation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
