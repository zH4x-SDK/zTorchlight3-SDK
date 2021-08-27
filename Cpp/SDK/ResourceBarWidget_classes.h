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

// WidgetBlueprintGeneratedClass ResourceBarWidget.ResourceBarWidget_C
// 0x0161 (FullSize[0x09D9] - InheritedSize[0x0878])
class UResourceBarWidget_C : public UActiveTraitBarWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLImage*                                    BGImage;                                                   // 0x0880(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLImage*                                    FrameImage;                                                // 0x0888(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTLProgressBar*                              HitpointBall;                                              // 0x0890(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                                 MenuAnchor_121;                                            // 0x0898(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                                 FrameStyle;                                                // 0x08A0(0x0088) (Edit, BlueprintVisible)
	struct FMargin                                     BarPadding;                                                // 0x0928(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                                 BGStyle;                                                   // 0x0938(0x0088) (Edit, BlueprintVisible)
	class UMaterial*                                   FrameMaterial;                                             // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  FrameNormalMap;                                            // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   BarInnerPadding;                                           // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasTooltip;                                                // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ResourceBarWidget.ResourceBarWidget_C");
		return ptr;
	}



	class UMenuAnchor* GetTooltipAnchor();
	class UProgressBar* GetProgressBar();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ResourceBarWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
