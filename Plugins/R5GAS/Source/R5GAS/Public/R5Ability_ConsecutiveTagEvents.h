#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "R5Ability_ConsecutiveTagEvents.generated.h"

class UR5ConsecutiveTagEventsParams;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_ConsecutiveTagEvents : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ConsecutiveTagEventsParams* Params;
    
public:
    UR5Ability_ConsecutiveTagEvents();

};

