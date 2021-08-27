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

// WidgetBlueprintGeneratedClass ClassMechanicsHelpScreen.ClassMechanicsHelpScreen_C
// 0x0030 (FullSize[0x0688] - InheritedSize[0x0658])
class UClassMechanicsHelpScreen_C : public UClassMechanicsTabbedMenu
{
public:
	class UClassMechanicHelpScreen_CC_C*               ClassMechanicHelpScreen_CC;                                // 0x0658(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassMechanicHelpScreen_DM_C*               ClassMechanicHelpScreen_DM;                                // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassMechanicHelpScreen_FG_C*               ClassMechanicHelpScreen_FG;                                // 0x0668(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassMechanicHelpScreen_RM_C*               ClassMechanicHelpScreen_RM;                                // 0x0670(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassMechanicHelpScreen_SS_C*               ClassMechanicHelpScreen_SS;                                // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLWidgetSwitcher*                           TLWidgetSwitcher_37;                                       // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ClassMechanicsHelpScreen.ClassMechanicsHelpScreen_C");
		return ptr;
	}



	class UWidgetSwitcher* GetWidgetSwitcher();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
