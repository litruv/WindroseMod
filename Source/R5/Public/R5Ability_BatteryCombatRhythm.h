#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_BatteryCombatRhythm.generated.h"

UCLASS(Blueprintable)
class R5_API UR5Ability_BatteryCombatRhythm : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BatteryCooldownReduction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SalvoHitPercentage;
    
public:
    UR5Ability_BatteryCombatRhythm();

};

