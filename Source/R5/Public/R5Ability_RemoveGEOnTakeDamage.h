#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectQuery -FallbackName=GameplayEffectQuery
#include "GameplayEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_RemoveGEOnTakeDamage.generated.h"

UCLASS(Blueprintable)
class R5_API UR5Ability_RemoveGEOnTakeDamage : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectQuery RemoveGEQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackToRemove;
    
public:
    UR5Ability_RemoveGEOnTakeDamage();

};

