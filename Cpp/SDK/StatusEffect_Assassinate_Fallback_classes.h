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

// BlueprintGeneratedClass StatusEffect_Assassinate_Fallback.StatusEffect_Assassinate_Fallback_C
// 0x0014 (FullSize[0x0294] - InheritedSize[0x0280])
class UStatusEffect_Assassinate_Fallback_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     OriginalLocation;                                          // 0x0288(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_Assassinate_Fallback.StatusEffect_Assassinate_Fallback_C");
		return ptr;
	}



	void OnPreApply();
	void ExecuteUbergraph_StatusEffect_Assassinate_Fallback(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
