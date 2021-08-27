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

// AnimBlueprintGeneratedClass cc_anim_bp.cc_anim_bp_C
// 0x0ABC (FullSize[0x10CC] - InheritedSize[0x0610])
class Ucc_anim_bp_C : public UTLAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0618(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2;                          // 0x0648(0x00E8)
	struct FTLAnimNode_Slot                            TLAnimGraphNode_Slot;                                      // 0x0730(0x0050)
	struct FAnimNode_Trail                             AnimGraphNode_Trail_3;                                     // 0x0780(0x0260)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2;                     // 0x09E0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2;                     // 0x0A00(0x0020)
	struct FAnimNode_Trail                             AnimGraphNode_Trail_2;                                     // 0x0A20(0x0260)
	struct FAnimNode_Trail                             AnimGraphNode_Trail;                                       // 0x0C80(0x0260)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend;                            // 0x0EE0(0x00C0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace;                       // 0x0FA0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace;                       // 0x0FC0(0x0020)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x0FE0(0x00E8)
	float                                              CapeOverride;                                              // 0x10C8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass cc_anim_bp.cc_anim_bp_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetCapeOverride(float CapeBlendAmount, bool UseCurve, float* blendValue);
	void ExecuteUbergraph_cc_anim_bp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
