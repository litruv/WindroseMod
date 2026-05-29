#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "Templates/SubclassOf.h"
#include "R5ShipBoostAbility.generated.h"

class AActor;
class APawn;
class UGameplayEffect;
class UInputAction;

UCLASS(Blueprintable)
class R5_API UR5ShipBoostAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ActivationInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OngoingGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> OnManuallyCanceledEffect;
    
public:
    UR5ShipBoostAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void PawnRestarted(APawn* Pawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCaptainChanged(AActor* NewCaptain, AActor* OldCaptain);
    
};

