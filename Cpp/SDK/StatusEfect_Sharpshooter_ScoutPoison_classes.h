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

// BlueprintGeneratedClass StatusEfect_Sharpshooter_ScoutPoison.StatusEfect_Sharpshooter_ScoutPoison_C
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UStatusEfect_Sharpshooter_ScoutPoison_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEfect_Sharpshooter_ScoutPoison.StatusEfect_Sharpshooter_ScoutPoison_C");
		return ptr;
	}



	void OnPreApply();
	void ExecuteUbergraph_StatusEfect_Sharpshooter_ScoutPoison(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
