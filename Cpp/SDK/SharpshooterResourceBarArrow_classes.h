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

// WidgetBlueprintGeneratedClass SharpshooterResourceBarArrow.SharpshooterResourceBarArrow_C
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class USharpshooterResourceBarArrow_C : public UResourcePip
{
public:
	class UWidgetAnimation*                            Reset;                                                     // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Shot;                                                      // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SharpshooterResourceBarArrow.SharpshooterResourceBarArrow_C");
		return ptr;
	}



	class UWidgetAnimation* GetFullAnimation();
	class UWidgetAnimation* GetSpendAnimation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
