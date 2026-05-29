#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5JumpAbility.generated.h"

class UR5JumpParams;

UCLASS(Blueprintable)
class R5_API UR5JumpAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5JumpParams* Params;
    
public:
    UR5JumpAbility();

};

