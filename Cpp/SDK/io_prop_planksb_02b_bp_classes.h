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

// BlueprintGeneratedClass io_prop_planksb_02b_bp.io_prop_planksb_02b_bp_C
// 0x0018 (FullSize[0x04C0] - InheritedSize[0x04A8])
class Aio_prop_planksb_02b_bp_C : public ABaseGadget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAutoOperateTriggerSphere*                   AutoOperateTriggerSphere;                                  // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Door;                                                      // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass io_prop_planksb_02b_bp.io_prop_planksb_02b_bp_C");
		return ptr;
	}



	void OnOperatedClient(class AActor* Other);
	void ExecuteUbergraph_io_prop_planksb_02b_bp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
