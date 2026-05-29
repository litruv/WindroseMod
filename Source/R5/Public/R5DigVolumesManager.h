#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5DigVolumesManager.generated.h"

class AR5DigVolume;
class AR5DigVolumeFXManager;
class UR5DigVolumesInvokerComponent;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5_API UR5DigVolumesManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvokerRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridStep;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxDigVolumeDeactivationTime;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxToggleTime;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxRestoreTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateLastTouchedTimeForRestore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5DigVolumesInvokerComponent*> Invokers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5DigVolumeFXManager* FXManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AR5DigVolume*> FillingVolumes;
    
public:
    UR5DigVolumesManager();

};

