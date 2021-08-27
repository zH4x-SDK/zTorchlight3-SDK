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

// WidgetBlueprintGeneratedClass PartyMemberWidget.PartyMemberWidget_C
// 0x0048 (FullSize[0x1920] - InheritedSize[0x18D8])
class UPartyMemberWidget_C : public UPartyMemberWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x18D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLTextBlock*                                AccountNameText;                                           // 0x18E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 ContextMenuAnchor;                                         // 0x18E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                CurrentArea;                                               // 0x18F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                DisplayedName;                                             // 0x18F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                            InvalidationBox_1;                                         // 0x1900(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPetInfoWidget_C*                        MiniPetInfoWidget;                                         // 0x1908(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyMemberHUDInfoWidget_C*                 PartyMemberHUDInfoWidget;                                  // 0x1910(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_191;                                               // 0x1918(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyMemberWidget.PartyMemberWidget_C");
		return ptr;
	}



	class UTLTextBlock* GetAccountNameTextBlock();
	class UTLTextBlock* GetCharacterNameTextBlock();
	class UTLTextBlock* GetAreaNameTextBlock();
	class UTLImage* GetSpeakerIcon();
	class UMenuAnchor* GetContextMenuAnchor();
	class UAllyInfoWidget* GetAllyInfoWidget();
	void OnDataSet();
	void ExecuteUbergraph_PartyMemberWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
