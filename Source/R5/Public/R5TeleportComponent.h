#pragma once
#include "CoreMinimal.h"
#include "R5PrimitiveInteractionTargetComponent.h"
#include "R5TeleportEntityInterface.h"
#include "R5TeleportComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5TeleportComponent : public UR5PrimitiveInteractionTargetComponent, public IR5TeleportEntityInterface {
    GENERATED_BODY()
public:
    UR5TeleportComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

