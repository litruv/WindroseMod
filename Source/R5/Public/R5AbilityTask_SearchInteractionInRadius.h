#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_SearchInteractionInRadius.generated.h"

class UR5SearchInteractionInRadiusParams;
class UR5TransitionToInteractionTransitionParams;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_SearchInteractionInRadius : public UAbilityTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5SearchInteractionInRadiusParams* SearchParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5TransitionToInteractionTransitionParams* TransitionParams;
    
public:
    UR5AbilityTask_SearchInteractionInRadius();

};

