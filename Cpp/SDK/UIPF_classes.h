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

// Class UIPF.UIPFActor
// 0x0100 (FullSize[0x0320] - InheritedSize[0x0220])
class AUIPFActor : public AActor
{
public:
	unsigned char                                      UnknownData_7ZMV[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DynamicInstance;                                           // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    DynamicInstanceStatic;                                     // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                          // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TL3R[0xE0];                                    // 0x0240(0x00E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIPF.UIPFActor");
		return ptr;
	}



	void UpdateTransition();
	void TrySleep();
	void SkeletonSleep(class UPrimitiveComponent* Comp, const struct FName& Bone);
	void Init();
	void DelayPhysEnabled();
};

// Class UIPF.UIPFImpulse
// 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
class AUIPFImpulse : public AActor
{
public:
	unsigned char                                      UnknownData_HGWM[0x30];                                    // 0x0220(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIPF.UIPFImpulse");
		return ptr;
	}



	void InitializeImpulse(float ImpulseRadius, bool UsingTruePhys, bool UsingShaderInt, float ImpulseStrength);
};

// Class UIPF.IPFTypes
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UIPFTypes : public UDataTable
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIPF.IPFTypes");
		return ptr;
	}



};

// Class UIPF.UIPFInteractor
// 0x0088 (FullSize[0x0280] - InheritedSize[0x01F8])
class UUIPFInteractor : public USceneComponent
{
public:
	unsigned char                                      UnknownData_QEK7[0x4];                                     // 0x01F8(0x0004) Fix Super Size
	float                                              TickRate;                                                  // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PhysFoliageSwapTickRate;                                   // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInteractWithGrass;                                        // 0x0204(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D5KF[0x3];                                     // 0x0205(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              fGrassInteractionDiameter;                                 // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanInteractUsingTruePhysics;                              // 0x020C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KD7T[0x73];                                    // 0x020D(0x0073) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIPF.UIPFInteractor");
		return ptr;
	}



	void PhysCheck();
	void OnDeactivationEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ManuallyActivateFoliage(bool WithImpulse, float ImpulseStrength, const struct FHitResult& Hit);
};

// Class UIPF.UIPFManager
// 0x00F0 (FullSize[0x0310] - InheritedSize[0x0220])
class AUIPFManager : public AActor
{
public:
	unsigned char                                      UnknownData_CCWF[0x12];                                    // 0x0220(0x0012) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               UseShaderInteraction;                                      // 0x0232(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseTruePhysics;                                            // 0x0233(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseShaderIntSwitch;                                        // 0x0234(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseShaderIntPS4;                                           // 0x0235(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseShaderIntXbox;                                          // 0x0236(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseShaderIntIOS;                                           // 0x0237(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseShaderIntAndroid;                                       // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseTruePhysicsSwitch;                                      // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseTruePhysicsPS4;                                         // 0x023A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseTruePhysicsXbox;                                        // 0x023B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseTruePhysicsIOS;                                         // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseTruePhysicsAndroid;                                     // 0x023D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ActivateOnImpulse;                                         // 0x023E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q3KS[0x1];                                     // 0x023F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bLimitTickRate;                                            // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8D05[0x3];                                     // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TickRate;                                                  // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerPhysActivationRadius;                                // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerPhysDeactivationRadius;                              // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxManualActivationDistance;                               // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AQ7C[0x4];                                     // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  FoliageDataTable;                                          // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialParameterCollection*                MPC_UIPF;                                                  // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      UIPFActorClass;                                            // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4088[0x10];                                    // 0x0270(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTextureRenderTarget2D*                      rtvel;                                                     // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextureRenderTarget2D*                      rtpos;                                                     // 0x0288(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextureRenderTarget2D*                      rtobj;                                                     // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          ForceSplatMat;                                             // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EV9A[0x18];                                    // 0x02A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    AccumulatorInst;                                           // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    ManualSplatInst;                                           // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    VelocitySplatInst;                                         // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvas*                                     Canvas;                                                    // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   Size;                                                      // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDrawToRenderTargetContext                  Context;                                                   // 0x02E0(0x0010) (NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCanvas*                                     CanvasInteract;                                            // 0x02F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   SizeInteract;                                              // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDrawToRenderTargetContext                  ContextInteract;                                           // 0x0300(0x0010) (NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UIPF.UIPFManager");
		return ptr;
	}



	void ImpulseAtLocation(const struct FVector& Location, float ImpulseDiameter, float ImpulseStrength);
	void ForceAppliedAtLocation(const struct FVector& Loc, float Strength);
	void FoliageForceAtLocation(float fStrength, float fSizePercent, const struct FVector& HitLocation, bool bIsImpulse);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
