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

// WidgetBlueprintGeneratedClass CombatCriticalDamageNotify.CombatCriticalDamageNotify_C
// 0x0018 (FullSize[0x0668] - InheritedSize[0x0650])
class UCombatCriticalDamageNotify_C : public UFloatingTextWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            RiseAndFade;                                               // 0x0658(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLTextBlock*                                DamageText;                                                // 0x0660(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CombatCriticalDamageNotify.CombatCriticalDamageNotify_C");
		return ptr;
	}



	class UTLTextBlock* GetTextBlock();
	void Construct();
	void ExecuteUbergraph_CombatCriticalDamageNotify(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
