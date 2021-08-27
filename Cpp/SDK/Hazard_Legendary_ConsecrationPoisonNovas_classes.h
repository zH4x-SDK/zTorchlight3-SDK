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

// BlueprintGeneratedClass Hazard_Legendary_ConsecrationPoisonNovas.Hazard_Legendary_ConsecrationPoisonNovas_C
// 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
class AHazard_Legendary_ConsecrationPoisonNovas_C : public ABaseAreaHazard_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hazard_Legendary_ConsecrationPoisonNovas.Hazard_Legendary_ConsecrationPoisonNovas_C");
		return ptr;
	}



	void OnPulse();
	void ExecuteUbergraph_Hazard_Legendary_ConsecrationPoisonNovas(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
