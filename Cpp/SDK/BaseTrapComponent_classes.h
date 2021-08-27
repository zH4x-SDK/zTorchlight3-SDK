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

// BlueprintGeneratedClass BaseTrapComponent.BaseTrapComponent_C
// 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])
class UBaseTrapComponent_C : public UTrapComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseTrapComponent.BaseTrapComponent_C");
		return ptr;
	}



	void TrapTriggeredOnClient(class AActor* TriggeredBy, float Delay);
	void ExecuteUbergraph_BaseTrapComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
