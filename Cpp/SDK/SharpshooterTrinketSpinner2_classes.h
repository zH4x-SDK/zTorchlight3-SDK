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

// WidgetBlueprintGeneratedClass SharpshooterTrinketSpinner2.SharpshooterTrinketSpinner2_C
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class USharpshooterTrinketSpinner2_C : public UHUDElementNoTick
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Spin;                                                      // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTLImage*                                    TLImage_1;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SharpshooterTrinketSpinner2.SharpshooterTrinketSpinner2_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_SharpshooterTrinketSpinner2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif