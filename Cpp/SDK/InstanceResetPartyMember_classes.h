﻿#pragma once

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

// WidgetBlueprintGeneratedClass InstanceResetPartyMember.InstanceResetPartyMember_C
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UInstanceResetPartyMember_C : public UInstanceResetPartyMember
{
public:
	class UPartyMemberHUDInfoWidget_C*                 PartyMemberHUDInfoWidget;                                  // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InstanceResetPartyMember.InstanceResetPartyMember_C");
		return ptr;
	}



	class UAllyInfoWidget* GetAllyInfoWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
