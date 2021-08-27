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

// WidgetBlueprintGeneratedClass PlayerNotification.PlayerNotification_C
// 0x0018 (FullSize[0x0678] - InheritedSize[0x0660])
class UPlayerNotification_C : public UPlayerNotificationWidget
{
public:
	class UWidgetAnimation*                            Intro;                                                     // 0x0660(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLRichTextBlock*                            NotificationRichText;                                      // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    Portrait;                                                  // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerNotification.PlayerNotification_C");
		return ptr;
	}



	class UWidgetAnimation* GetShowAnimation();
	class UTLImage* GetPortraitImage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
