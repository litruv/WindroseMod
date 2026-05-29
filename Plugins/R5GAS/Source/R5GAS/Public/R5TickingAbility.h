#pragma once
#include "CoreMinimal.h"
#include "R5Ability.h"
#include "R5TickingAbility.generated.h"

UCLASS(Abstract, Blueprintable)
class R5GAS_API UR5TickingAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickAuthority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTickAutonomous;
    
public:
    UR5TickingAbility();

};

