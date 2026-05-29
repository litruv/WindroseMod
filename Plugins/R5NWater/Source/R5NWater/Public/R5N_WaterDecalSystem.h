#pragma once
#include "CoreMinimal.h"
#include "R5N_WaterSubsystemInterface.h"
#include "R5N_WaterDecalSystem.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5NWATER_API UR5N_WaterDecalSystem : public UR5N_WaterSubsystemInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* DecalsDeformRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* DecalsFoamRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* DecalsColorRT;
    
public:
    UR5N_WaterDecalSystem(const FObjectInitializer& ObjectInitializer);

};

