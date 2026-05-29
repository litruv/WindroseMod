#pragma once
#include "CoreMinimal.h"
#include "R5N_WaterSubsystemInterface.h"
#include "R5N_WaterSurfaceSystem.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5NWATER_API UR5N_WaterSurfaceSystem : public UR5N_WaterSubsystemInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* WaterDepthTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* WaterAreaDataTexture;
    
public:
    UR5N_WaterSurfaceSystem(const FObjectInitializer& ObjectInitializer);

};

