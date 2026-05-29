#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "R5Ability_HandleGameplayEventWithRandom.generated.h"

class UR5HandleGameplayEventWithRandomParams;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_HandleGameplayEventWithRandom : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5HandleGameplayEventWithRandomParams* Params;
    
public:
    UR5Ability_HandleGameplayEventWithRandom();

};

