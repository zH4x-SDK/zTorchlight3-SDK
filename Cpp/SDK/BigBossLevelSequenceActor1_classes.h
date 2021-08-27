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

// BlueprintGeneratedClass BigBossLevelSequenceActor1.BigBossLevelSequenceActor1_C
// 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
class ABigBossLevelSequenceActor1_C : public ALevelSequenceActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BigBossLevelSequenceActor1.BigBossLevelSequenceActor1_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BigBossLevelSequenceActor1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
