#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5BaseCarryActor.generated.h"

class UR5CarryComponent;
class UR5PrimitiveInteractionTargetComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BaseCarryActor : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CarryMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5PrimitiveInteractionTargetComponent* InteractionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CarryComponent* CarryComponent;
    
public:
    AR5BaseCarryActor(const FObjectInitializer& ObjectInitializer);

};

