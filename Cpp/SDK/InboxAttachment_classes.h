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

// WidgetBlueprintGeneratedClass InboxAttachment.InboxAttachment_C
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UInboxAttachment_C : public UInboxAttachmentWidget
{
public:
	class UGenericResourceWidget_C*                    GenericResourceWidget;                                     // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InboxAttachment.InboxAttachment_C");
		return ptr;
	}



	class UGenericResourceWidget* GetGenericResourceWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
