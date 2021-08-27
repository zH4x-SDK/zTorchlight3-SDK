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

// BlueprintGeneratedClass SkillShape_Consecration.SkillShape_Consecration_C
// 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
class ASkillShape_Consecration_C : public ASkillShapeSphere_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULifetimeEventsComponent*                    LifetimeEvents;                                            // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTLParticleSystemComponent*                  TLParticleSystem;                                          // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTLDecalComponent*                           TLDecal_outer;                                             // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SkillShape_Consecration.SkillShape_Consecration_C");
		return ptr;
	}



	void UserConstructionScript();
	void BndEvt__LifetimeEvents_K2Node_ComponentBoundEvent_0_NearLifetimeEndSignature__DelegateSignature();
	void ExecuteUbergraph_SkillShape_Consecration(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
