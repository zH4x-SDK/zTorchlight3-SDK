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

// BlueprintGeneratedClass WeaponBowBase.WeaponBowBase_C
// 0x0040 (FullSize[0x0490] - InheritedSize[0x0450])
class AWeaponBowBase_C : public AWeaponSkeletalBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      ArrowClass;                                                // 0x0458(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           Bow_On_Ground_Anim;                                        // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Arrow[0x28];                                               // 0x0468(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponBowBase.WeaponBowBase_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void BndEvt__ItemOnGround_K2Node_ComponentBoundEvent_0_ItemOnGroundEvent__DelegateSignature();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_WeaponBowBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
