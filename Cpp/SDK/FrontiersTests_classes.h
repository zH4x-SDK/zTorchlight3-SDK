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

// Class FrontiersTests.TestAreaWithMapWorksEntries
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UTestAreaWithMapWorksEntries : public UArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestAreaWithMapWorksEntries");
		return ptr;
	}



};

// Class FrontiersTests.TestArea_NoMinions
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UTestArea_NoMinions : public UArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestArea_NoMinions");
		return ptr;
	}



};

// Class FrontiersTests.TestArea_MinionA_SkillA
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UTestArea_MinionA_SkillA : public UArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestArea_MinionA_SkillA");
		return ptr;
	}



};

// Class FrontiersTests.TestArea_MinionB_SkillB
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UTestArea_MinionB_SkillB : public UArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestArea_MinionB_SkillB");
		return ptr;
	}



};

// Class FrontiersTests.TestArea_IceMinionA_FireMinionB
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UTestArea_IceMinionA_FireMinionB : public UArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestArea_IceMinionA_FireMinionB");
		return ptr;
	}



};

// Class FrontiersTests.TestSkill
// 0x00C0 (FullSize[0x0600] - InheritedSize[0x0540])
class UTestSkill : public USkill
{
public:
	unsigned char                                      UnknownData_GNH1[0xC0];                                    // 0x0540(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkill");
		return ptr;
	}



};

// Class FrontiersTests.TestProcSkill1
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestProcSkill1 : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestProcSkill1");
		return ptr;
	}



};

// Class FrontiersTests.TestProcSkill2
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestProcSkill2 : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestProcSkill2");
		return ptr;
	}



};

// Class FrontiersTests.TestProcSkill3
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestProcSkill3 : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestProcSkill3");
		return ptr;
	}



};

// Class FrontiersTests.TestActiveTrait
// 0x0010 (FullSize[0x01C8] - InheritedSize[0x01B8])
class UTestActiveTrait : public UActiveTrait
{
public:
	unsigned char                                      UnknownData_7AQP[0x10];                                    // 0x01B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestActiveTrait");
		return ptr;
	}



	void HitMinCallback(class UActiveTrait* Trait);
	void HitMaxCallback(class UActiveTrait* Trait);
};

// Class FrontiersTests.TestActorProxyNode
// 0x0000 (FullSize[0x02A0] - InheritedSize[0x02A0])
class ATestActorProxyNode : public AActorProxyNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestActorProxyNode");
		return ptr;
	}



};

// Class FrontiersTests.TestActorProxy
// 0x0000 (FullSize[0x0248] - InheritedSize[0x0248])
class ATestActorProxy : public AActorProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestActorProxy");
		return ptr;
	}



};

// Class FrontiersTests.TestHandledObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTestHandledObject : public UObject
{
public:
	unsigned char                                      UnknownData_B92S[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestHandledObject");
		return ptr;
	}



};

// Class FrontiersTests.TestConductorHandler
// 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
class UTestConductorHandler : public UConductorHandler
{
public:
	unsigned char                                      UnknownData_XB92[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestConductorHandler");
		return ptr;
	}



};

// Class FrontiersTests.TestHazard
// 0x0008 (FullSize[0x0448] - InheritedSize[0x0440])
class ATestHazard : public AHazard
{
public:
	unsigned char                                      UnknownData_BJRB[0x8];                                     // 0x0440(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestHazard");
		return ptr;
	}



};

// Class FrontiersTests.TestListWidget
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class UTestListWidget : public UListWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestListWidget");
		return ptr;
	}



};

// Class FrontiersTests.TestListSelectableWidget
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UTestListSelectableWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_H6IH[0x18];                                    // 0x0260(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestListSelectableWidget");
		return ptr;
	}



};

// Class FrontiersTests.TestOperableComponent
// 0x0008 (FullSize[0x00C8] - InheritedSize[0x00C0])
class UTestOperableComponent : public UOperableComponent
{
public:
	unsigned char                                      UnknownData_JBRE[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestOperableComponent");
		return ptr;
	}



};

// Class FrontiersTests.TestPerPlayerActorNode
// 0x0000 (FullSize[0x0268] - InheritedSize[0x0268])
class ATestPerPlayerActorNode : public APerPlayerActorNode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestPerPlayerActorNode");
		return ptr;
	}



};

// Class FrontiersTests.TestQuestActivatedActor
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class ATestQuestActivatedActor : public AActor
{
public:
	class UQuestObjectComponent*                       QuestObject;                                               // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestQuestActivatedActor");
		return ptr;
	}



};

// Class FrontiersTests.TestProjectile
// 0x0000 (FullSize[0x0680] - InheritedSize[0x0680])
class ATestProjectile : public AMissile
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestProjectile");
		return ptr;
	}



};

// Class FrontiersTests.TestSkill_2
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestSkill_2 : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkill_2");
		return ptr;
	}



};

// Class FrontiersTests.TestSkill_3
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestSkill_3 : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkill_3");
		return ptr;
	}



};

// Class FrontiersTests.TestSkill_4
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestSkill_4 : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkill_4");
		return ptr;
	}



};

// Class FrontiersTests.TestSkill_5
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestSkill_5 : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkill_5");
		return ptr;
	}



};

// Class FrontiersTests.TestSkill_6
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestSkill_6 : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkill_6");
		return ptr;
	}



};

// Class FrontiersTests.TestSkill_7
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestSkill_7 : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkill_7");
		return ptr;
	}



};

// Class FrontiersTests.TestSkill_TargetLocationAboveActor
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestSkill_TargetLocationAboveActor : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkill_TargetLocationAboveActor");
		return ptr;
	}



};

// Class FrontiersTests.TestSkill_AnimationAlwaysCancel
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestSkill_AnimationAlwaysCancel : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkill_AnimationAlwaysCancel");
		return ptr;
	}



};

// Class FrontiersTests.TestSkill_AnimationNeverCancel
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestSkill_AnimationNeverCancel : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkill_AnimationNeverCancel");
		return ptr;
	}



};

// Class FrontiersTests.TestSkill_AnimationDeferToMontage
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UTestSkill_AnimationDeferToMontage : public UTestSkill
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkill_AnimationDeferToMontage");
		return ptr;
	}



};

// Class FrontiersTests.TestSkillShape
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class ATestSkillShape : public ASkillShape
{
public:
	class USphereComponent*                            Collision;                                                 // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestSkillShape");
		return ptr;
	}



};

// Class FrontiersTests.TestStatusEffect2
// 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
class UTestStatusEffect2 : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestStatusEffect2");
		return ptr;
	}



};

// Class FrontiersTests.TestStatusEffect3
// 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
class UTestStatusEffect3 : public UStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestStatusEffect3");
		return ptr;
	}



};

// Class FrontiersTests.TestStatusEffect
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UTestStatusEffect : public UStatusEffect
{
public:
	unsigned char                                      UnknownData_FPZL[0x8];                                     // 0x0280(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestStatusEffect");
		return ptr;
	}



};

// Class FrontiersTests.TestDamageStatusEffect
// 0x0000 (FullSize[0x0288] - InheritedSize[0x0288])
class UTestDamageStatusEffect : public UTestStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestDamageStatusEffect");
		return ptr;
	}



};

// Class FrontiersTests.TestDisallowedTagsStatusEffect
// 0x0000 (FullSize[0x0288] - InheritedSize[0x0288])
class UTestDisallowedTagsStatusEffect : public UTestStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestDisallowedTagsStatusEffect");
		return ptr;
	}



};

// Class FrontiersTests.TestFlagStatusEffect
// 0x0000 (FullSize[0x0288] - InheritedSize[0x0288])
class UTestFlagStatusEffect : public UTestStatusEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestFlagStatusEffect");
		return ptr;
	}



};

// Class FrontiersTests.TestTLUserWidget
// 0x0008 (FullSize[0x0648] - InheritedSize[0x0640])
class UTestTLUserWidget : public UTLUserWidget
{
public:
	class ATLCharacter*                                CurrentCharacter;                                          // 0x0640(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestTLUserWidget");
		return ptr;
	}



};

// Class FrontiersTests.TestTrigger
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UTestTrigger : public UObject
{
public:
	unsigned char                                      UnknownData_PWL3[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestTrigger");
		return ptr;
	}



	void TriggerExit(float InStartTime, float InEndTime);
	void Trigger(float InStartTime, float InEndTime);
};

// Class FrontiersTests.TestTLInventoryContainerInbox
// 0x0000 (FullSize[0x0210] - InheritedSize[0x0210])
class UTestTLInventoryContainerInbox : public UTLInventoryContainerInbox
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestTLInventoryContainerInbox");
		return ptr;
	}



};

// Class FrontiersTests.TestPickupItem
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class ATestPickupItem : public AActor
{
public:
	unsigned char                                      UnknownData_GZQ4[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestPickupItem");
		return ptr;
	}



};

// Class FrontiersTests.TestInventoryContainerItems
// 0x0008 (FullSize[0x01F8] - InheritedSize[0x01F0])
class UTestInventoryContainerItems : public UTLInventoryContainerItems
{
public:
	unsigned char                                      UnknownData_RX1O[0x8];                                     // 0x01F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestInventoryContainerItems");
		return ptr;
	}



};

// Class FrontiersTests.TestInventoryContainerUnequippedItems
// 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
class UTestInventoryContainerUnequippedItems : public UTLInventoryContainerUnequippedItems
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestInventoryContainerUnequippedItems");
		return ptr;
	}



};

// Class FrontiersTests.TestInventoryContainerStatusEffects
// 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
class UTestInventoryContainerStatusEffects : public UTLInventoryContainerStatusEffects
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestInventoryContainerStatusEffects");
		return ptr;
	}



};

// Class FrontiersTests.TestInventoryContainerWardrobe
// 0x0000 (FullSize[0x0310] - InheritedSize[0x0310])
class UTestInventoryContainerWardrobe : public UTLInventoryContainerWardrobe
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestInventoryContainerWardrobe");
		return ptr;
	}



};

// Class FrontiersTests.TestInventoryContainerPetItems
// 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
class UTestInventoryContainerPetItems : public UTLInventoryContainerPetItems
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestInventoryContainerPetItems");
		return ptr;
	}



};

// Class FrontiersTests.TestInventoryContainerMinions
// 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
class UTestInventoryContainerMinions : public UTLInventoryContainerMinions
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.TestInventoryContainerMinions");
		return ptr;
	}



};

// Class FrontiersTests.MockTravelComponent
// 0x0008 (FullSize[0x0700] - InheritedSize[0x06F8])
class UMockTravelComponent : public UTLTravelComponent
{
public:
	unsigned char                                      UnknownData_7NUL[0x8];                                     // 0x06F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FrontiersTests.MockTravelComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
