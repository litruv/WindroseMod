#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5InstantiableActor -FallbackName=R5InstantiableActor
#include "R5InstantiableActor.h"
#include "R5GameplayEffectProxyInterface.h"
#include "R5Requirement_ResourceTool.h"
#include "R5ResourceNode.generated.h"

class AR5ResourceNode;
class UR5CommonInteractionTargetComponent;
class UR5ExplosionReactionComponent;
class UR5SimpleFoliageGameplayEffectProxyComponent;

UCLASS(Abstract, Blueprintable, NoExport)
class R5_API AR5ResourceNode : public AR5InstantiableActor, public IR5GameplayEffectProxyInterface, public IR5Requirement_ResourceTool {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegateSignature, const AR5ResourceNode*, ResourceNode);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CommonInteractionTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ExplosionReactionComponent* ExplosionReactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5SimpleFoliageGameplayEffectProxyComponent* GEProxy;
    
public:
    AR5ResourceNode(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

