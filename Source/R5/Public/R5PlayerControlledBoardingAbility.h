#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5PlayerControlledBoardingAbility.generated.h"

class AController;
class APawn;

UCLASS(Blueprintable)
class R5_API UR5PlayerControlledBoardingAbility : public UR5Ability {
    GENERATED_BODY()
public:
    UR5PlayerControlledBoardingAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAvatarControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
};

