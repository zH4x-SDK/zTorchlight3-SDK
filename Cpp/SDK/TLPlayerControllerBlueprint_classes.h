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

// BlueprintGeneratedClass TLPlayerControllerBlueprint.TLPlayerControllerBlueprint_C
// 0x00D9 (FullSize[0x1021] - InheritedSize[0x0F48])
class ATLPlayerControllerBlueprint_C : public ATLPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F48(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTLTransmogDye*                              TLTransmogDye;                                             // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCritterSpawnerComponent*                    CritterSpawner;                                            // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UDungeonPlayerComponent*                     DungeonPlayer;                                             // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlatformComponent*                          Platform;                                                  // 0x0F68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ULorePlayerComponent*                        LorePlayer;                                                // 0x0F70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFriendsComponent*                           Friends;                                                   // 0x0F78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlayerUINotificationComponent*              PlayerUINotification;                                      // 0x0F80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UDefaultContractComponent_C*                 DefaultContractComponent;                                  // 0x0F88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlayerCraftingComponent*                    PlayerCrafting;                                            // 0x0F90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UDefaultFortEditComponent_C*                 DefaultFortEditComponent;                                  // 0x0F98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlayerDialogueComponent*                    PlayerDialogue;                                            // 0x0FA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UUILightComponent*                           UILight;                                                   // 0x0FA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlayerLevelSequenceWrapper*                 PlayerLevelSequenceWrapper;                                // 0x0FB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMetricsLoggerComponent*                     MetricsLogger;                                             // 0x0FB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlayerSaveComponent*                        PlayerSave;                                                // 0x0FC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNarratorTraitMonitorComponent_C*            NarratorTraitMonitorComponent;                             // 0x0FC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UNarratorComponentBlueprint_C*               NarratorComponent;                                         // 0x0FD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UChatComponent*                              Chat;                                                      // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UDefaultPlayerPortalComponent_C*             DefaultPlayerPortalComponent;                              // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlayerQuestComponent*                       PlayerQuest;                                               // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTLTravelComponent*                          TLTravel;                                                  // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCombatConductorHandler*                     CombatConductorHandler;                                    // 0x0FF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBossFightComponent*                         BossFight;                                                 // 0x1000(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMonsterManagerPlayerComponent*              MonsterManagerPlayer;                                      // 0x1008(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UConductorComponent*                         Conductor;                                                 // 0x1010(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPlayerLevelManagerComponent*                PlayerLevelManager;                                        // 0x1018(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               CanEditSkills;                                             // 0x1020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TLPlayerControllerBlueprint.TLPlayerControllerBlueprint_C");
		return ptr;
	}



	void CreateHUDWidget();
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_RightBracket_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_LeftBracket_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ExecuteUbergraph_TLPlayerControllerBlueprint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
