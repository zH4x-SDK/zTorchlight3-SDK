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

// BlueprintGeneratedClass GenericBossLevelSequenceActor.GenericBossLevelSequenceActor_C
// 0x0008 (FullSize[0x02A8] - InheritedSize[0x02A0])
class AGenericBossLevelSequenceActor_C : public ALevelSequenceActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GenericBossLevelSequenceActor.GenericBossLevelSequenceActor_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_GenericBossLevelSequenceActor(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
