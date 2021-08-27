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

// BlueprintGeneratedClass ss_f_charactercreate.ss_f_charactercreate_C
// 0x0010 (FullSize[0x0318] - InheritedSize[0x0308])
class Ass_f_charactercreate_C : public ACharacterCreate_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0308(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SkinnedBow;                                                // 0x0310(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ss_f_charactercreate.ss_f_charactercreate_C");
		return ptr;
	}



	TArray<class USkeletalMeshComponent*> GetComponentsToHide();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ss_f_charactercreate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
