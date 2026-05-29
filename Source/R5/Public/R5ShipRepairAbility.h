#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "Templates/SubclassOf.h"
#include "R5ShipRepairAbility.generated.h"

class APawn;
class UGameplayEffect;
class UInputAction;

UCLASS(Blueprintable)
class R5_API UR5ShipRepairAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ActivationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OngoingEffect;
    
public:
    UR5ShipRepairAbility();

private:
    UFUNCTION(BlueprintCallable)
    void PawnRestarted(APawn* AvatarPawn);
    
};

