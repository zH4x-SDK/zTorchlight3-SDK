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

// AnimBlueprintGeneratedClass cc_anim_charactercreate_bp.cc_anim_charactercreate_bp_C
// 0x025C (FullSize[0x05BC] - InheritedSize[0x0360])
class Ucc_anim_charactercreate_bp_C : public UTLCharacterSelectAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0368(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer;                              // 0x0398(0x0080)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend;                                 // 0x0418(0x00C8)
	struct FAnimNode_PoseSnapshot                      AnimGraphNode_PoseSnapshot;                                // 0x04E0(0x0090)
	struct FAnimNode_Slot                              AnimGraphNode_Slot;                                        // 0x0570(0x0048)
	float                                              CapeSpeed;                                                 // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass cc_anim_charactercreate_bp.cc_anim_charactercreate_bp_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_cc_anim_charactercreate_bp_AnimGraphNode_SequencePlayer_9B5B3D474207A69108402A952792F3E6();
	void ExecuteUbergraph_cc_anim_charactercreate_bp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
