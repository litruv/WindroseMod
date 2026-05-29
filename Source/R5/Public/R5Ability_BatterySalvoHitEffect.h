#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "Templates/SubclassOf.h"
#include "R5Ability_BatterySalvoHitEffect.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class R5_API UR5Ability_BatterySalvoHitEffect : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> TargetEffectsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> SelfEffectsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SalvoHitPercentage;
    
public:
    UR5Ability_BatterySalvoHitEffect();

};

