#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5Ability_InteractOption_Base.h"
#include "R5Ability_InteractOption_BatteryControl.generated.h"

class AR5BatteryPawn;
class AR5PlayerCharacter;

UCLASS(Blueprintable)
class R5_API UR5Ability_InteractOption_BatteryControl : public UR5Ability_InteractOption_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FsmState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5PlayerCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5BatteryPawn* BatteryPawn;
    
public:
    UR5Ability_InteractOption_BatteryControl();

};

