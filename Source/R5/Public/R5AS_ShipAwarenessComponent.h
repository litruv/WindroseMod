#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_AwarenessComponent -FallbackName=R5AS_AwarenessComponent
#include "R5AS_AwarenessComponent.h"
#include "R5AS_ShipAwarenessComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5AS_ShipAwarenessComponent : public UR5AS_AwarenessComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> AggressiveActors;
    
public:
    UR5AS_ShipAwarenessComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnAggressiveRemoved(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnAggressiveAdded(AActor* Actor);
    
};

