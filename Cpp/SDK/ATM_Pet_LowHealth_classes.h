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

// BlueprintGeneratedClass ATM_Pet_LowHealth.ATM_Pet_LowHealth_C
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UATM_Pet_LowHealth_C : public UActiveTraitMonitorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ATM_Pet_LowHealth.ATM_Pet_LowHealth_C");
		return ptr;
	}



	void OnRuleTriggered(const struct FName& Data);
	void ExecuteUbergraph_ATM_Pet_LowHealth(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
