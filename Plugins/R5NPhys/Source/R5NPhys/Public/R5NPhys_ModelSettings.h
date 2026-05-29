#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5NPhysArchimedesForceParameters.h"
#include "R5NPhysDriftPreventData.h"
#include "R5NPhysFrictionForceParameters.h"
#include "R5NPhysKeelForceParameters.h"
#include "R5NPhysMotorForceParameters.h"
#include "R5NPhysRudderForceParameters.h"
#include "R5NPhysSailForceParameters.h"
#include "R5NPhysServiceMotorForceParameters.h"
#include "R5NPhysWettingForceParameters.h"
#include "R5NPhys_ModelSettings_Debug.h"
#include "R5NPhys_ModelSettings_Units.h"
#include "R5NPhys_SensorSettingsPack.h"
#include "R5NPhys_ModelSettings.generated.h"

UCLASS(Blueprintable)
class R5NPHYS_API UR5NPhys_ModelSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepRotationIntegrationError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhys_ModelSettings_Units Units;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhys_ModelSettings_Debug Debug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NPhysArchimedesForceParameters> ArchimedesForcePack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NPhysFrictionForceParameters> FrictionForcePack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NPhysSailForceParameters> SailForcePack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NPhysKeelForceParameters> KeelForcePack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NPhysRudderForceParameters> RudderForcePack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NPhysMotorForceParameters> MotorForcePack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NPhysServiceMotorForceParameters> ServiceMotorForcePack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NPhysWettingForceParameters> WettingForcePack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ForceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NPhys_SensorSettingsPack> SensorPacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhysDriftPreventData DriftPreventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventDrift;
    
    UR5NPhys_ModelSettings();

};

