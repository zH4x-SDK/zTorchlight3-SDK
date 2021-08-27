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

// BlueprintGeneratedClass StatusEffect_ChargeBarLock_DMDark.StatusEffect_ChargeBarLock_DMDark_C
// 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
class UStatusEffect_ChargeBarLock_DMDark_C : public UStatusEffect_ChargeBarLock_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_ChargeBarLock_DMDark.StatusEffect_ChargeBarLock_DMDark_C");
		return ptr;
	}



	void OnPreApply();
	void OnEventTimerTick();
	void ExecuteUbergraph_StatusEffect_ChargeBarLock_DMDark(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
