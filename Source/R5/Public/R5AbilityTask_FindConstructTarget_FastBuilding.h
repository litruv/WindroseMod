#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionProfileName -FallbackName=CollisionProfileName
#include "R5AbilityTask_FindConstructTarget.h"
#include "R5AbilityTask_FindConstructTarget_FastBuilding.generated.h"

class AR5BuildingBlock;
class AR5BuildingConstructTargetSimplifiedPreview;
class UGameplayAbility;
class UR5AbilityTask_FindConstructTarget_FastBuilding;
class UR5BuildingConstructionContext;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_FindConstructTarget_FastBuilding : public UR5AbilityTask_FindConstructTarget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFastBuildingInterruptedDelegate);
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IdleTimeAfterActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AR5BuildingConstructTargetSimplifiedPreview*> Previews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AR5BuildingBlock* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AR5BuildingBlock* PendingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AR5BuildingBlock*> PossibleTargets;
    
public:
    UR5AbilityTask_FindConstructTarget_FastBuilding();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_FindConstructTarget_FastBuilding* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, UR5BuildingConstructionContext* InContext, float NewIdleTimeAfterActivation, float TraceDistance, FCollisionProfileName TraceProfile);
    
};

