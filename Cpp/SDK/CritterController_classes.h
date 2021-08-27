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

// BlueprintGeneratedClass CritterController.CritterController_C
// 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
class ACritterController_C : public AAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CritterController.CritterController_C");
		return ptr;
	}



	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_CritterController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
