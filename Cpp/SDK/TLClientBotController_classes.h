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

// BlueprintGeneratedClass TLClientBotController.TLClientBotController_C
// 0x0008 (FullSize[0x03A0] - InheritedSize[0x0398])
class ATLClientBotController_C : public ATLAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TLClientBotController.TLClientBotController_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_TLClientBotController(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
