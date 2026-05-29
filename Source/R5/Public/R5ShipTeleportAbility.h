#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
#include "R5ShipTeleportAbility.generated.h"

class APawn;

UCLASS(Blueprintable)
class R5_API UR5ShipTeleportAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord Input;
    
public:
    UR5ShipTeleportAbility();

private:
    UFUNCTION(BlueprintCallable)
    void OnPawnRestarted(APawn* AvatarPawn);
    
};

