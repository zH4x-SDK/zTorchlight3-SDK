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

// AnimBlueprintGeneratedClass dm_anim_charactercreate_bp.dm_anim_charactercreate_bp_C
// 0x0258 (FullSize[0x05B8] - InheritedSize[0x0360])
class Udm_anim_charactercreate_bp_C : public UTLCharacterSelectAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0368(0x0030)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0x0398(0x00C8)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot;                                // 0x0460(0x0090)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x04F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0538(0x0080)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass dm_anim_charactercreate_bp.dm_anim_charactercreate_bp_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_dm_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_BF29CBD5452A7A54626E6DB8CC1FDA1F();
	void ExecuteUbergraph_dm_anim_charactercreate_bp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
