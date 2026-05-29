#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5BoardingLinkTargetAbility.generated.h"

class AController;
class APawn;

UCLASS(Blueprintable)
class R5_API UR5BoardingLinkTargetAbility : public UR5Ability {
    GENERATED_BODY()
public:
    UR5BoardingLinkTargetAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAvatarPawnRestarted(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnAvatarControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
};

