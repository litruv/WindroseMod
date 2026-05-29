#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5CrewSlotActor.generated.h"

class UR5CrewSlotComponent;
class UR5PrimitiveInteractionTargetComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5CrewSlotActor : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PrimitiveInteractionTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CrewSlotComponent* CrewSlotComponent;
    
public:
    AR5CrewSlotActor(const FObjectInitializer& ObjectInitializer);

};

