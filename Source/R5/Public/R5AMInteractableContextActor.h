#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ActionManager -ObjectName=R5AMActivatedContextActor -FallbackName=R5AMActivatedContextActor
#include "R5AMActivatedContextActor.h"
#include "R5AMInteractableContextActor.generated.h"

class UR5CommonInteractionTargetComponent;
class USceneComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5AMInteractableContextActor : public AR5AMActivatedContextActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTriggeredSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriggeredSignature OnTriggered;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CommonInteractionTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* VisualInteractionRootComponent;
    
public:
    AR5AMInteractableContextActor(const FObjectInitializer& ObjectInitializer);

};

