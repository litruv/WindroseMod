#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Math/Rotator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "WeaponTraceDelegateDelegate.h"
#include "R5AbilityTask_WeaponTrace.generated.h"

class AActor;
class UGameplayAbility;
class UR5AbilityTask_WeaponTrace;
class UR5WeaponTraceParams;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_WeaponTrace : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponTraceDelegate OnHit;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5WeaponTraceParams* TraceParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HitActors;
    
public:
    UR5AbilityTask_WeaponTrace();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_WeaponTrace* R5WeaponTrace(UGameplayAbility* OwningAbility, UR5WeaponTraceParams* NewTraceParams, float TraceScaleMultiplier, const FRotator& RotationOffset);
    
};

