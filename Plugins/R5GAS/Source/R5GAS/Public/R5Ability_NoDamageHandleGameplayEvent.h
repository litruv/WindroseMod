#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "R5Ability_NoDamageHandleGameplayEvent.generated.h"

class UR5NoDamageHandleGameplayEventParams;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_NoDamageHandleGameplayEvent : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NoDamageHandleGameplayEventParams* Params;
    
public:
    UR5Ability_NoDamageHandleGameplayEvent();

};

