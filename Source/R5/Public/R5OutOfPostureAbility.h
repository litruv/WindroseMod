#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5OutOfPostureAbility.generated.h"

class UAbilityTask_NetworkSyncPoint;
class UAbilityTask_PlayMontageAndWait;
class UR5OutOfPostureAbilityParams;

UCLASS(Blueprintable)
class R5_API UR5OutOfPostureAbility : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5OutOfPostureAbilityParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_NetworkSyncPoint* NetSyncTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAbilityTask_PlayMontageAndWait* OutOfPostureMontageTask;
    
public:
    UR5OutOfPostureAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void FinishAbility();
    
    UFUNCTION(BlueprintCallable)
    void ApplyBlockClientIntentions();
    
};

