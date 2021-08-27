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

// WidgetBlueprintGeneratedClass CombatInvulnerableNotify.CombatInvulnerableNotify_C
// 0x0010 (FullSize[0x0660] - InheritedSize[0x0650])
class UCombatInvulnerableNotify_C : public UFloatingTextWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            RiseAndFade;                                               // 0x0658(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CombatInvulnerableNotify.CombatInvulnerableNotify_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_CombatInvulnerableNotify(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
