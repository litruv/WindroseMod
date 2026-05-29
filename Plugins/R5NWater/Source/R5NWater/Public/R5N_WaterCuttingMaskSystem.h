#pragma once
#include "CoreMinimal.h"
#include "R5N_WaterSubsystemInterface.h"
#include "R5N_WaterCuttingMaskSystem.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5NWATER_API UR5N_WaterCuttingMaskSystem : public UR5N_WaterSubsystemInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* CuttingMask;
    
public:
    UR5N_WaterCuttingMaskSystem(const FObjectInitializer& ObjectInitializer);

};

