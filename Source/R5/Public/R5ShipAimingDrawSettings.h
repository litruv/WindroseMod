#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5ShipAimingDrawSettings.generated.h"

class UMaterialInterface;
class UR5ShipAimingDrawSettings;
class UStaticMesh;

UCLASS(Blueprintable, DefaultConfig, Config=R5ShipAimingDrawSettings)
class R5_API UR5ShipAimingDrawSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> TrajectoryMesh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> TrajectoryDebugMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomPrimitiveDataReadyShootDuration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomPrimitiveDataReadyShootTick;
    
    UR5ShipAimingDrawSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5ShipAimingDrawSettings* Get();
    
};

