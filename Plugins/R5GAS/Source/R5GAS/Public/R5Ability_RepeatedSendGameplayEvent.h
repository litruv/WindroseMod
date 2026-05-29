#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "R5Ability_RepeatedSendGameplayEvent.generated.h"

class UR5RepeatedSendGameplayEventParams;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_RepeatedSendGameplayEvent : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RepeatedSendGameplayEventParams* Params;
    
public:
    UR5Ability_RepeatedSendGameplayEvent();

};

