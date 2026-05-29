#pragma once
#include "CoreMinimal.h"
#include "R5N_WaterSubsystemInterface.h"
#include "R5N_WaterInteractionSystem.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5NWATER_API UR5N_WaterInteractionSystem : public UR5N_WaterSubsystemInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* InteractionRT;
    
public:
    UR5N_WaterInteractionSystem(const FObjectInitializer& ObjectInitializer);

};

