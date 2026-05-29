#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=MercunaObstacleComponent -FallbackName=MercunaObstacleComponent
#include "MercunaObstacleComponent.h"
#include "R5MercunaObstacleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5MERCUNA_API UR5MercunaObstacleComponent : public UMercunaObstacleComponent {
    GENERATED_BODY()
public:
    UR5MercunaObstacleComponent(const FObjectInitializer& ObjectInitializer);

};

