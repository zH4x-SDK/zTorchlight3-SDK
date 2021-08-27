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

// BlueprintGeneratedClass StatusEffect_ResistShocked.StatusEffect_ResistShocked_C
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UStatusEffect_ResistShocked_C : public UStatusEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StatusEffect_ResistShocked.StatusEffect_ResistShocked_C");
		return ptr;
	}



	void OnPreApply();
	void OnEventTimerTick();
	void ExecuteUbergraph_StatusEffect_ResistShocked(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
