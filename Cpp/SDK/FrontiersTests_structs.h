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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FrontiersTests.LegendaryItemDescription
// 0x0030
struct FLegendaryItemDescription
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0018(0x0018) (NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.LegendaryBundle
// 0x0010
struct FLegendaryBundle
{
	TArray<struct FLegendaryItemDescription>           LegendaryItems;                                            // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.SkillLevelDescription
// 0x0058
struct FSkillLevelDescription
{
	struct FText                                       Description;                                               // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	struct FText                                       CooldownText;                                              // 0x0018(0x0018) (NativeAccessSpecifierPublic)
	struct FText                                       EnergyCostText;                                            // 0x0030(0x0018) (NativeAccessSpecifierPublic)
	TArray<struct FText>                               BonusAmounts;                                              // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.SkillDescription
// 0x00F0
struct FSkillDescription
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	int                                                RequiredLevelInSkillTab;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillTabRow;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillTabColumn;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_APHB[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SkillType;                                                 // 0x0028(0x0018) (NativeAccessSpecifierPublic)
	TArray<struct FText>                               PerLevelBonusTexts;                                        // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int, struct FSkillLevelDescription>           PerLevelDescriptions;                                      // 0x0050(0x0050) (NativeAccessSpecifierPublic)
	TMap<int, struct FText>                            TierBonusDescriptions;                                     // 0x00A0(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.SkillTabDescription
// 0x0028
struct FSkillTabDescription
{
	struct FText                                       DisplayName;                                               // 0x0000(0x0018) (NativeAccessSpecifierPublic)
	TArray<struct FSkillDescription>                   Skills;                                                    // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.SkillDescriptionBundle
// 0x0010
struct FSkillDescriptionBundle
{
	TArray<struct FSkillTabDescription>                SkillTabs;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.TestDataRow
// 0x0020 (0x0028 - 0x0008)
struct FTestDataRow : public FTableRowBase
{
	struct FText                                       Text;                                                      // 0x0008(0x0018) (NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IBEP[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersTests.TraitEntry_Test3000
// 0x0040
struct FTraitEntry_Test3000
{
	struct FString                                     TraitName;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PrimarySlot;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SecondarySlot;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Param;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FVH6[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersTests.CharacterData_Test3000
// 0x0040
struct FCharacterData_Test3000
{
	struct FName                                       PlayerClassRowName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Extra1000Bool;                                             // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_90GZ[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Extra2000Value;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Extra3000String;                                           // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTraitEntry_Test3000>                Traits;                                                    // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.AccountwideData_Test3000
// 0x0028
struct FAccountwideData_Test3000
{
	TArray<struct FTraitEntry_Test3000>                Traits;                                                    // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DataVersion;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Extra1000BoolAccount;                                      // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HO0D[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Extra2000ValueAccount;                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.CharacterAccountwide_Test3000
// 0x0028 (0x0068 - 0x0040)
struct FCharacterAccountwide_Test3000 : public FCharacterData_Test3000
{
	struct FAccountwideData_Test3000                   Accountwide;                                               // 0x0040(0x0028) (NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.FortInventoryEntry_Test3000
// 0x0004
struct FFortInventoryEntry_Test3000
{
	int                                                RenamedId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.FortInventoryResponse_Test3000
// 0x0020
struct FFortInventoryResponse_Test3000
{
	struct FString                                     DataVersion;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortInventoryEntry_Test3000>        Entries;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.FortInventoryEntry_Test2000
// 0x0004
struct FFortInventoryEntry_Test2000
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.FortInventoryResponse_Test2000
// 0x0020
struct FFortInventoryResponse_Test2000
{
	struct FString                                     DataVersion;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortInventoryEntry_Test2000>        Entries;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.AccountwideData_Test2000
// 0x0018
struct FAccountwideData_Test2000
{
	struct FString                                     DataVersion;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Extra1000BoolAccount;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_241S[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Extra2000ValueAccount;                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.CharacterData_Test2000
// 0x0020
struct FCharacterData_Test2000
{
	struct FName                                       PlayerClassRowName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Extra2000Value;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Extra1000Bool;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_53U4[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DataVersion;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FrontiersTests.QuestInstanceData_Test1000
// 0x0018
struct FQuestInstanceData_Test1000
{
	struct FString                                     DataVersion;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCompleted;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HEEH[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersTests.AccountwideData_Test1000
// 0x0018
struct FAccountwideData_Test1000
{
	struct FString                                     DataVersion;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Extra1000BoolAccount;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L862[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct FrontiersTests.CharacterData_Test1000
// 0x0020
struct FCharacterData_Test1000
{
	struct FName                                       PlayerClassRowName;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Extra1000Bool;                                             // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D60F[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DataVersion;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
