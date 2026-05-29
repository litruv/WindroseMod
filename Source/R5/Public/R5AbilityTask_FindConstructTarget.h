#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAbilityTargetDataHandle -FallbackName=GameplayAbilityTargetDataHandle
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "R5AbilityTask_FindConstructTarget.generated.h"

class UR5BuildingBlockContainer;
class UR5BuildingBrush;
class UR5BuildingConstructionContext;

UCLASS(Abstract, Blueprintable)
class R5_API UR5AbilityTask_FindConstructTarget : public UAbilityTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConstructTargetFoundDelegate, const FGameplayAbilityTargetDataHandle&, TargetDataHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstructTargetFoundDelegate OnConstructTargetFound;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BuildingConstructionContext* Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BuildingBrush* TargetBuildingBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BuildingBlockContainer* BuildingBlockContainer;
    
public:
    UR5AbilityTask_FindConstructTarget();

protected:
    UFUNCTION(BlueprintCallable)
    void NotifyConstructTargetFound(const UR5BuildingBrush* BuildingBrush, const FTransform& Transform, const UR5BuildingBlockContainer* BuildingContainer);
    
};

