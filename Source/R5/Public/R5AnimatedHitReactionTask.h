#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AnimatedHitReactionTask.generated.h"

class UCurveFloat;
class UGameplayAbility;
class UR5AnimatedHitReactionTask;

UCLASS(Blueprintable)
class R5_API UR5AnimatedHitReactionTask : public UAbilityTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector ImpactDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ImpactPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
public:
    UR5AnimatedHitReactionTask();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    static UR5AnimatedHitReactionTask* CreateAnimatedHitReactionTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, const FVector& InImpactDirection, float InImpactPower, float InDuration, UCurveFloat* InCurve);
    
};

