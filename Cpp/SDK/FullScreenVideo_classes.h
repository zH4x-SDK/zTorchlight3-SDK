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

// WidgetBlueprintGeneratedClass FullScreenVideo.FullScreenVideo_C
// 0x0018 (FullSize[0x0680] - InheritedSize[0x0668])
class UFullScreenVideo_C : public UFullscreenVideoWidget
{
public:
	class UTLImage*                                    BlackBackground;                                           // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCinematicConfirmation_C*                    CinematicConfirmation;                                     // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLVideo*                                    Video;                                                     // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FullScreenVideo.FullScreenVideo_C");
		return ptr;
	}



	class UTLUserWidget* GetConfirmationWidget();
	class UTLVideo* GetTLVideo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
