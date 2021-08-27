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

// BlueprintGeneratedClass StatusEffect_Charged.StatusEffect_Charged_C
// 0x0020 (FullSize[0x02A0] - InheritedSize[0x0280])
class UStatusEffect_Charged_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       ExtraDescription;                                          // 0x0288(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_Charged.StatusEffect_Charged_C");
		return ptr;
	}



	struct FText GetDescription(class AActor* ActorOwner);
	void OnPreApply();
	void OnEventTimerTick();
	void OnCleared();
	void OnExpired();
	void ExecuteUbergraph_StatusEffect_Charged(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
