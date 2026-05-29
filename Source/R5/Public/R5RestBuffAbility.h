#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "ER5RestBuffState.h"
#include "R5RestBuffAbility.generated.h"

class UAbilityTask;

UCLASS(Blueprintable)
class R5_API UR5RestBuffAbility : public UR5Ability {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateChanged, ER5RestBuffState, State);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateChanged OnStateChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAbilityTask* DetectEnemyTask;
    
public:
    UR5RestBuffAbility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5RestBuffState GetRestState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRestingRemainingTimeAndDuration(float& Remaining, float& Duration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRestBuffRemainingTimeAndDuration(float& Remaining, float& Duration) const;
    
};

