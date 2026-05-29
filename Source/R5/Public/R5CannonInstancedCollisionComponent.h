#pragma once
#include "CoreMinimal.h"
#include "R5InstancedCollisionComponent.h"
#include "R5InteractionTargetBaseImpl.h"
#include "R5CannonInstancedCollisionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5CannonInstancedCollisionComponent : public UR5InstancedCollisionComponent, public IR5InteractionTargetBaseImpl {
    GENERATED_BODY()
public:
    UR5CannonInstancedCollisionComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void SetInteractionTargetTitle(const FText& NewTitle) override PURE_VIRTUAL(SetInteractionTargetTitle,);
    
};

