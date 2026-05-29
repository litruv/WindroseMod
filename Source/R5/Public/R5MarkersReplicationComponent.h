#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5MarkersHandlerInterface.h"
#include "R5MarkersReplicationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5MarkersReplicationComponent : public UActorComponent, public IR5MarkersHandlerInterface {
    GENERATED_BODY()
public:
    UR5MarkersReplicationComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

