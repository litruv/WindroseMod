#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5RecallAbility.generated.h"

class AR5EQSActor;
class UR5RecallAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5RecallAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RecallAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5EQSActor* EQSActor;
    
public:
    UR5RecallAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void PerformTeleportation();
    
};

