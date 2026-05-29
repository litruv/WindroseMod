#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "R5AttributeTracker.h"
#include "R5AttributeTrackerAbility.generated.h"

class UR5AttributeTrackerAbilityParams;

UCLASS(Blueprintable)
class R5GAS_API UR5AttributeTrackerAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AttributeTrackerAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5AttributeTracker> Trackers;
    
public:
    UR5AttributeTrackerAbility();

};

