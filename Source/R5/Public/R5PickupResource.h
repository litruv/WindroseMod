#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5InstantiableActor -FallbackName=R5InstantiableActor
#include "R5InstantiableActor.h"
#include "R5PickupResource.generated.h"

class UR5ExplosionReactionComponent;
class UR5FoliageMeshComponent;
class UR5PickupResourceParams;
class UR5PrimitiveInteractionTargetComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5PickupResource : public AR5InstantiableActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FoliageMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5PrimitiveInteractionTargetComponent* InteractionTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PickupResourceParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5ExplosionReactionComponent* ExplosionReactionComponent;
    
public:
    AR5PickupResource(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticastPlayPickupFX();
    
};

