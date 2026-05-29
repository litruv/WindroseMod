#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5TickingAbility -FallbackName=R5TickingAbility
#include "R5TickingAbility.h"
#include "R5UseActionPerDistanceAbility.generated.h"

class UR5UseActionPerDistanceAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5UseActionPerDistanceAbility : public UR5TickingAbility {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5UseActionPerDistanceAbilityParams* Params;
    
public:
    UR5UseActionPerDistanceAbility();

};

