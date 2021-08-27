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

// WidgetBlueprintGeneratedClass CursedCaptainResourceSkullGlowLoop.CursedCaptainResourceSkullGlowLoop_C
// 0x0010 (FullSize[0x0280] - InheritedSize[0x0270])
class UCursedCaptainResourceSkullGlowLoop_C : public UResourcePip
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            GlowLoop;                                                  // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CursedCaptainResourceSkullGlowLoop.CursedCaptainResourceSkullGlowLoop_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_CursedCaptainResourceSkullGlowLoop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
