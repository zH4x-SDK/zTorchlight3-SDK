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

// BlueprintGeneratedClass AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C
// 0x0002 (FullSize[0x0032] - InheritedSize[0x0030])
class UAnimNotifyState_CapeBlendOff_C : public UAnimNotifyState
{
public:
	bool                                               UseCurve;                                                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               debugPrint;                                                // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyState_CapeBlendOff.AnimNotifyState_CapeBlendOff_C");
		return ptr;
	}



	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	void OnRep_AnimBP();
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	void Set_Cape_Blend(float AutoCapeBlend, class UTLAnimInstance** TLAnimInst, bool* Success);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
