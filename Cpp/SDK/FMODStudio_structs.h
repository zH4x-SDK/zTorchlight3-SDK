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
// Enums
//---------------------------------------------------------------------------

// Enum FMODStudio.EFMOD_STUDIO_STOP_MODE
enum class FMODStudio_EFMOD_STUDIO_STOP_MODE : uint8_t
{
	ALLOWFADEOUT                   = 0,
	IMMEDIATE                      = 1,
	EFMOD_STUDIO_STOP_MODE_MAX     = 2,

};

// Enum FMODStudio.EFMODSpeakerMode
enum class FMODStudio_EFMODSpeakerMode : uint8_t
{
	EFMODSpeakerMode__Stereo       = 0,
	EFMODSpeakerMode__Surround_5   = 1,
	EFMODSpeakerMode__Surround_7   = 2,
	EFMODSpeakerMode__EFMODSpeakerMode_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FMODStudio.FMODLocalizedEventAudioTableEntry
// 0x0010
struct FFMODLocalizedEventAudioTableEntry
{
	struct FString                                     AudioTableEntry;                                           // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.FMODAssetReference
// 0x0018
struct FFMODAssetReference
{
	struct FGuid                                       AssetGuid;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFMODAsset*                                  AssetReference;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct FMODStudio.FMODEventReference
// 0x0000 (0x0018 - 0x0018)
struct FFMODEventReference : public FFMODAssetReference
{

};

// ScriptStruct FMODStudio.CustomPoolSizes
// 0x0014
struct FCustomPoolSizes
{
	int                                                Desktop;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Mobile;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PS4;                                                       // 0x0008(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SWITCH;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XboxOne;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.AudioImportanceBucketParameters
// 0x0020
struct FAudioImportanceBucketParameters
{
	int                                                MaxCount;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      DebugDisplayColor;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeDecibels;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PeakingFilterGainDecibels;                                 // 0x000C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PeakingFilterFrequencyHz;                                  // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PeakingFilterQ;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HighShelfFilterGainDecibels;                               // 0x0018(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HighShelfFilterFrequencyHz;                                // 0x001C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.LocalizedAudioTableEntryOption
// 0x0018
struct FLocalizedAudioTableEntryOption
{
	struct FString                                     AudioTableEntry;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LengthSeconds;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldStream;                                             // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BQ7M[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FMODStudio.FMODBankReference
// 0x0000 (0x0018 - 0x0018)
struct FFMODBankReference : public FFMODAssetReference
{

};

// ScriptStruct FMODStudio.FMODEventInstance
// 0x0004
struct FFMODEventInstance
{
	unsigned char                                      UnknownData_SEJ0[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct FMODStudio.FMODBusReference
// 0x0000 (0x0018 - 0x0018)
struct FFMODBusReference : public FFMODAssetReference
{

};

// ScriptStruct FMODStudio.FMODSnapshotReference
// 0x0000 (0x0018 - 0x0018)
struct FFMODSnapshotReference : public FFMODAssetReference
{

};

// ScriptStruct FMODStudio.FMODVCAReference
// 0x0000 (0x0018 - 0x0018)
struct FFMODVCAReference : public FFMODAssetReference
{

};

// ScriptStruct FMODStudio.TLFMODAudioSectionTemplateData
// 0x0170
struct FTLFMODAudioSectionTemplateData
{
	struct FFMODEventReference                         Event;                                                     // 0x0000(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	float                                              AudioStartOffset;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MYU4[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             SectionStartTimeSeconds;                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     AudioPitchMultiplierCurve;                                 // 0x0028(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     AudioVolumeCurve;                                          // 0x00C8(0x00A0) (NativeAccessSpecifierPublic)
	int                                                RowIndex;                                                  // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopSoundWhenSequenceStops;                               // 0x016C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6NHH[0x3];                                     // 0x016D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct FMODStudio.TLFMODAudioSectionTemplate
// 0x0170 (0x0190 - 0x0020)
struct FTLFMODAudioSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FTLFMODAudioSectionTemplateData             AudioData;                                                 // 0x0020(0x0170) (NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.LocalizedAudioTableEntry
// 0x0010
struct FLocalizedAudioTableEntry
{
	TArray<struct FLocalizedAudioTableEntryOption>     AudioTableEntryOptions;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.LocalizedAudioTable
// 0x0050
struct FLocalizedAudioTable
{
	TMap<struct FString, struct FLocalizedAudioTableEntry> AudioTableEntries;                                         // 0x0000(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
