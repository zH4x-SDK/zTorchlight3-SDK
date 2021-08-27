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

// Class FMODStudio.AudioImportanceComponent
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UAudioImportanceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_K7C3[0x20];                                    // 0x00B0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.AudioImportanceComponent");
		return ptr;
	}



};

// Class FMODStudio.FMODAmbientSound
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class AFMODAmbientSound : public AActor
{
public:
	class UFMODAudioComponent*                         AudioComponent;                                            // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODAmbientSound");
		return ptr;
	}



};

// Class FMODStudio.FMODAsset
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UFMODAsset : public UObject
{
public:
	struct FGuid                                       AssetGuid;                                                 // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowAsAsset;                                              // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MYFU[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODAsset*                                  NamedAsset;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODAsset*                                  GuidAsset;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODAsset");
		return ptr;
	}



};

// Class FMODStudio.FMODLocalizedAudioTableEntryAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UFMODLocalizedAudioTableEntryAsset : public UObject
{
public:
	struct FString                                     AudioTableEntry;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODLocalizedAudioTableEntryAsset");
		return ptr;
	}



};

// Class FMODStudio.FMODAudioComponent
// 0x0048 (FullSize[0x0240] - InheritedSize[0x01F8])
class UFMODAudioComponent : public USceneComponent
{
public:
	struct FFMODEventReference                         Event;                                                     // 0x01F8(0x0018) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODLocalizedEventAudioTableEntry          AudioTableEntry;                                           // 0x0210(0x0010) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoDestroy : 1;                                          // 0x0220(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlyPlayOnLocalPlayer : 1;                                // 0x0220(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                               // 0x0220(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V5DP[0x1F];                                    // 0x0221(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODAudioComponent");
		return ptr;
	}



	void Stop();
	void SetVolume(float Volume);
	void SetTimelinePosition(float TimeMs);
	void SetPitch(float Pitch);
	void SetPaused(bool paused);
	void Play();
	bool IsPlaying();
};

// Class FMODStudio.FMODBank
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UFMODBank : public UFMODAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODBank");
		return ptr;
	}



};

// Class FMODStudio.FMODBlueprintStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODBlueprintStatics");
		return ptr;
	}



	void STATIC_VCASetVolume(class UFMODVCA* Vca, float Volume);
	void STATIC_VCAReferenceSetVolume(const struct FFMODVCAReference& Vca, float Volume);
	void STATIC_SetOutputDriverByName(const struct FString& NewDriverName);
	void STATIC_SetOutputDriverByIndex(int NewDriverIndex);
	class UFMODAudioComponent* STATIC_K2_PlayEventReferenceAttached(const struct FFMODEventReference& Event, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, class AActor* Instigator, const struct FFMODLocalizedEventAudioTableEntry& AudioTableEntry);
	struct FFMODEventInstance STATIC_K2_PlayEventReferenceAtLocation(class UObject* WorldContextObject, const struct FFMODEventReference& Event, const struct FTransform& Location, class AActor* Instigator, const struct FFMODLocalizedEventAudioTableEntry& AudioTableEntry);
	struct FFMODEventInstance STATIC_K2_PlayEventReference2D(class UObject* WorldContextObject, const struct FFMODEventReference& Event, class AActor* Instigator, const struct FFMODLocalizedEventAudioTableEntry& AudioTableEntry);
	TArray<struct FString> STATIC_GetOutputDrivers();
	class UFMODEvent* STATIC_FindEventByName(const struct FString& Name);
	class UFMODAsset* STATIC_FindAssetByName(const struct FString& Name);
	void STATIC_EventInstanceStop(const struct FFMODEventInstance& EventInstance);
	void STATIC_EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume);
	void STATIC_EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, const struct FTransform& Location);
	void STATIC_EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch);
	void STATIC_EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool paused);
	void STATIC_EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name, float Value);
	void STATIC_EventInstancePlay(const struct FFMODEventInstance& EventInstance);
	bool STATIC_EventInstanceIsValid(const struct FFMODEventInstance& EventInstance);
	void STATIC_BusStopAllEvents(class UFMODBus* Bus, TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE> stopMode);
	void STATIC_BusSetVolume(class UFMODBus* Bus, float Volume);
	void STATIC_BusSetPaused(class UFMODBus* Bus, bool bPaused);
	void STATIC_BusSetMute(class UFMODBus* Bus, bool bMute);
	void STATIC_BusReferenceStopAllEvents(const struct FFMODBusReference& Bus, TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE> stopMode);
	void STATIC_BusReferenceSetVolume(const struct FFMODBusReference& Bus, float Volume);
	void STATIC_BusReferenceSetPaused(const struct FFMODBusReference& Bus, bool bPaused);
	void STATIC_BusReferenceSetMute(const struct FFMODBusReference& Bus, bool bMute);
};

// Class FMODStudio.FMODBus
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UFMODBus : public UFMODAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODBus");
		return ptr;
	}



};

// Class FMODStudio.FMODEvent
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UFMODEvent : public UFMODAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODEvent");
		return ptr;
	}



};

// Class FMODStudio.FMODEventHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFMODEventHelpers : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODEventHelpers");
		return ptr;
	}



	class UFMODEvent* STATIC_Conv_EventReferenceToEvent(const struct FFMODEventReference& EventReference);
};

// Class FMODStudio.FMODSettings
// 0x01C0 (FullSize[0x01E8] - InheritedSize[0x0028])
class UFMODSettings : public UObject
{
public:
	bool                                               bLoadAllBanks;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoadAllSampleData;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableLiveUpdate;                                         // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableEditorLiveUpdate;                                   // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G82C[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDirectoryPath                              BankOutputDirectory;                                       // 0x0030(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	TEnumAsByte<FMODStudio_EFMODSpeakerMode>           OutputFormat;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVol0Virtual;                                              // 0x0041(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BNHK[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Vol0VirtualLevel;                                          // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SampleRate;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchHardwareSampleRate;                                  // 0x004C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PHM7[0x3];                                     // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RealChannelCount;                                          // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalChannelCount;                                         // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DSPBufferLength;                                           // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DSPBufferCount;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StudioUpdatePeriod;                                        // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ODN8[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InitialOutputDriverName;                                   // 0x0068(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockAllBuses;                                             // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5N40[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomPoolSizes                            MemoryPoolSizes;                                           // 0x007C(0x0014) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LiveUpdatePort;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EditorLiveUpdatePort;                                      // 0x0094(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PluginFiles;                                               // 0x0098(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FString                                     ContentBrowserPrefix;                                      // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ForcePlatformName;                                         // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MasterBankName;                                            // 0x00C8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SourceAudioContentDirectory;                               // 0x00D8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LocalizedSourceAudioRoot;                                  // 0x00E8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LocalizedBankName;                                         // 0x00F8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               LocaleToSuffixMap;                                         // 0x0108(0x0050) (Edit, Config, NativeAccessSpecifierPublic)
	struct FString                                     FallbackLocale;                                            // 0x0158(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      LocalizedAudioTableAsset[0x28];                            // 0x0168(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FString                                     WavWriterPath;                                             // 0x0190(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAudioImportanceBucketParameters>    ImportanceBuckets;                                         // 0x01A0(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                              ImportanceFadetime;                                        // 0x01B0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ImportanceDetectionRadius;                                 // 0x01B4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              IdentityScalingFactor;                                     // 0x01B8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceToCenterOfScreenScalingFactor;                     // 0x01BC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MonsterDramaScalingFactor;                                 // 0x01C0(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SkillScalingFactor;                                        // 0x01C4(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                       ImportantSkillTags;                                        // 0x01C8(0x0020) (Edit, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODSettings");
		return ptr;
	}



};

// Class FMODStudio.FMODSnapshot
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UFMODSnapshot : public UFMODEvent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODSnapshot");
		return ptr;
	}



};

// Class FMODStudio.FMODVCA
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UFMODVCA : public UFMODAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.FMODVCA");
		return ptr;
	}



};

// Class FMODStudio.LocalizedAudioTableAsset
// 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
class ULocalizedAudioTableAsset : public UObject
{
public:
	struct FLocalizedAudioTable                        AudioTable;                                                // 0x0028(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FFMODBankReference>      MusicEvents;                                               // 0x0078(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.LocalizedAudioTableAsset");
		return ptr;
	}



};

// Class FMODStudio.TLFMODAudioSection
// 0x0160 (FullSize[0x0248] - InheritedSize[0x00E8])
class UTLFMODAudioSection : public UMovieSceneSection
{
public:
	struct FFMODEventReference                         Event;                                                     // 0x00E8(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPrivate)
	float                                              StartOffset;                                               // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bStopSoundWhenSequenceStops;                               // 0x0104(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YOH3[0x3];                                     // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneFloatChannel                     EventVolume;                                               // 0x0108(0x00A0) (Edit, NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel                     PitchMultiplier;                                           // 0x01A8(0x00A0) (Edit, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.TLFMODAudioSection");
		return ptr;
	}



};

// Class FMODStudio.TLFMODAudioTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UTLFMODAudioTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_RF7W[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  FMODAudioSections;                                         // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.TLFMODAudioTrack");
		return ptr;
	}



};

// Class FMODStudio.VolumetricSound
// 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
class AVolumetricSound : public AActor
{
public:
	struct FFMODEventReference                         Event;                                                     // 0x0220(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MaxDistanceOverride;                                       // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NearFieldDistance;                                         // 0x023C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R80J[0x40];                                    // 0x0240(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FMODStudio.VolumetricSound");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
