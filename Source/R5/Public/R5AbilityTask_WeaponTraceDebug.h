#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_WeaponTraceDebug.generated.h"

class UGameplayAbility;
class UR5AbilityTask_WeaponTraceDebug;
class UR5WeaponTraceParams;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_WeaponTraceDebug : public UAbilityTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5WeaponTraceParams* TraceParams;
    
public:
    UR5AbilityTask_WeaponTraceDebug();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_WeaponTraceDebug* R5WeaponTraceDebug(UGameplayAbility* OwningAbility, UR5WeaponTraceParams* NewTraceParams, float TraceScaleMultiplier);
    
};

