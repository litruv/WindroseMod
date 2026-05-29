#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5ApplyGameplayEffectOnCrewStateChanged_Effects.h"
#include "R5Ability_ApplyGameplayEffectOnCrewStateChanged.generated.h"

UCLASS(Blueprintable)
class R5_API UR5Ability_ApplyGameplayEffectOnCrewStateChanged : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5ApplyGameplayEffectOnCrewStateChanged_Effects> StateToGEs;
    
public:
    UR5Ability_ApplyGameplayEffectOnCrewStateChanged();

};

