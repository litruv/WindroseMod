#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5InstantiableActor -FallbackName=R5InstantiableActor
#include "R5InstantiableActor.h"
#include "R5DialogueActor.generated.h"

class UR5CommonInteractionTargetComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5DialogueActor : public AR5InstantiableActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CommonInteractionTargetComponent* InteractionTargetComponent;
    
public:
    AR5DialogueActor(const FObjectInitializer& ObjectInitializer);

};

