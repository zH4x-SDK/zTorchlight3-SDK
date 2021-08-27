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

// BlueprintGeneratedClass TLMonsterController.TLMonsterController_C
// 0x0010 (FullSize[0x03A8] - InheritedSize[0x0398])
class ATLMonsterController_C : public ATLAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMetricsLoggerComponent*                     MetricsLogger;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TLMonsterController.TLMonsterController_C");
		return ptr;
	}



	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_TLMonsterController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
