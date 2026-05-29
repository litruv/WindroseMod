#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "ER5AnimBlockState.h"
#include "R5AbilityTask_AnimBlockState.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_AnimBlockState : public UAbilityTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AnimBlockState, meta=(AllowPrivateAccess=true))
    ER5AnimBlockState AnimBlockState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* CachedAnimInstance;
    
public:
    UR5AbilityTask_AnimBlockState();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AnimBlockState();
    
};

