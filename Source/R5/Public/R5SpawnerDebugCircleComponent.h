#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "R5SpawnerDebugCircleComponent.generated.h"

UCLASS(Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UDEPRECATED_R5SpawnerDebugCircleComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDEPRECATED_R5SpawnerDebugCircleComponent(const FObjectInitializer& ObjectInitializer);

};

