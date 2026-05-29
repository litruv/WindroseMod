#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5WaterActor.generated.h"

class UR5N_WaterContactSystem;
class UR5N_WaterCuttingMaskSystem;
class UR5N_WaterDebugSettings;
class UR5N_WaterDecalSystem;
class UR5N_WaterInteractionSystem;
class UR5N_WaterLocalBodySystem;
class UR5N_WaterSettings;
class UR5N_WaterSurfaceMaterialComponent;
class UR5N_WaterSurfaceSystem;

UCLASS(Blueprintable, NoExport)
class R5NWATER_API AR5WaterActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5N_WaterSettings* WaterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WaterDebugSettings* DebugSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WaterSettings* DefaultWaterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WaterDebugSettings* DefaultDebugWaterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WaterSurfaceMaterialComponent* SurfaceMaterialComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WaterLocalBodySystem* WaterLocalBodySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WaterCuttingMaskSystem* WaterCuttingMaskSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WaterDecalSystem* WaterDecalSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WaterInteractionSystem* WaterInteractionSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WaterSurfaceSystem* WaterSurfaceSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5N_WaterContactSystem* WaterContactSystem;
    
public:
    AR5WaterActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegenerateLandscapeData();
    
};

