#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5ShipDamageVisualizer.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipDamageVisualizer : public UActorComponent {
    GENERATED_BODY()
public:
    UR5ShipDamageVisualizer(const FObjectInitializer& ObjectInitializer);

};

