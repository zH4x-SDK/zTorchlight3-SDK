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

// WidgetBlueprintGeneratedClass VoiceChatOverlay.VoiceChatOverlay_C
// 0x0010 (FullSize[0x0650] - InheritedSize[0x0640])
class UVoiceChatOverlay_C : public UVoiceChatOverlay
{
public:
	class USafeZone*                                   SafeZone_1;                                                // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVoiceChatListWidget*                        VoiceChatListWidget_201;                                   // 0x0648(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VoiceChatOverlay.VoiceChatOverlay_C");
		return ptr;
	}



	class UVoiceChatListWidget* GetVoiceChatListWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
