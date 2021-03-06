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

// AnimBlueprintGeneratedClass petwolf_anim_bp.petwolf_anim_bp_C
// 0x0170 (FullSize[0x0780] - InheritedSize[0x0610])
class Upetwolf_anim_bp_C : public UTLAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root;                                        // 0x0618(0x0030)
	struct FTLAnimNode_Slot                            TLAnimGraphNode_Slot;                                      // 0x0648(0x0050)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer;                            // 0x0698(0x00E8)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass petwolf_anim_bp.petwolf_anim_bp_C");
		return ptr;
	}



	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_petwolf_anim_bp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
