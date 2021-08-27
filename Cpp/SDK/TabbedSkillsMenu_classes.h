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

// WidgetBlueprintGeneratedClass TabbedSkillsMenu.TabbedSkillsMenu_C
// 0x0018 (FullSize[0x0740] - InheritedSize[0x0728])
class UTabbedSkillsMenu_C : public USkillsTabbedMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0728(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTabbedMenuButtonList*                       MenuButtonList;                                            // 0x0730(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      WidgetClass;                                               // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TabbedSkillsMenu.TabbedSkillsMenu_C");
		return ptr;
	}



	class UTabbedMenuButtonList* GetMenuButtonList();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TabbedSkillsMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
