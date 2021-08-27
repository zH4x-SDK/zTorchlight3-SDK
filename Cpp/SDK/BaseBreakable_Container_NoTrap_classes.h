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

// BlueprintGeneratedClass BaseBreakable_Container_NoTrap.BaseBreakable_Container_NoTrap_C
// 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
class ABaseBreakable_Container_NoTrap_C : public ABaseBreakable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseBreakable_Container_NoTrap.BaseBreakable_Container_NoTrap_C");
		return ptr;
	}



	void OnBreak(class AActor* Attacker);
	void ExecuteUbergraph_BaseBreakable_Container_NoTrap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
