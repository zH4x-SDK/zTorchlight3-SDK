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

// AnimBlueprintGeneratedClass io_prop_fishb_01_anim02.io_prop_fishb_01_anim02_C
// 0x00C0 (FullSize[0x0378] - InheritedSize[0x02B8])
class Uio_prop_fishb_01_anim02_C : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_HCPO[0x8];                                     // 0x02B8(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x02C8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x02F8(0x0080)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass io_prop_fishb_01_anim02.io_prop_fishb_01_anim02_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_io_prop_fishb_01_anim02(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
