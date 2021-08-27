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

// WidgetBlueprintGeneratedClass OtherPlayerMenu.OtherPlayerMenu_C
// 0x0038 (FullSize[0x0690] - InheritedSize[0x0658])
class UOtherPlayerMenu_C : public UOtherPlayerMenuWidget
{
public:
	class UTLImage*                                    FiligreeLeft;                                              // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    FiligreeRight;                                             // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                FortOwnerVerticalBox;                                      // 0x0668(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterMenuOtherPlayerWidget_C*           FortOwnerWidget;                                           // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOtherPlayerListWidget*                      NearbyPlayerList;                                          // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                SkillCategoryHeader;                                       // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLTextBlock*                                TLTextBlock_2;                                             // 0x0688(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OtherPlayerMenu.OtherPlayerMenu_C");
		return ptr;
	}



	class UOtherPlayerWidget* GetFortOwnerWidget();
	class UOtherPlayerListWidget* GetNearbyPlayersListWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
