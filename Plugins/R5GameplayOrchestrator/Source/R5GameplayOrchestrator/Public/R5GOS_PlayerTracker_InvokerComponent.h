#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
#include "R5GOS_PlayerTracker_InvokerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5GAMEPLAYORCHESTRATOR_API UR5GOS_PlayerTracker_InvokerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UR5GOS_PlayerTracker_InvokerComponent(const FObjectInitializer& ObjectInitializer);

};

