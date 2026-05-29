#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionProfileName -FallbackName=CollisionProfileName
#include "R5AbilityTask_FindConstructTarget.h"
#include "R5AbilityTask_FindConstructTarget_Single.generated.h"

class AR5BuildingConstructTargetPreview;
class UGameplayAbility;
class UR5AbilityTask_FindConstructTarget_Single;
class UR5BuildingConstructionContext;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_FindConstructTarget_Single : public UR5AbilityTask_FindConstructTarget {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AR5BuildingConstructTargetPreview* PreviewActor;
    
public:
    UR5AbilityTask_FindConstructTarget_Single();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_FindConstructTarget_Single* NewTask(UGameplayAbility* OwningAbility, FName TaskInstanceName, UR5BuildingConstructionContext* InContext, float TraceDistance, FCollisionProfileName TraceProfile);
    
};

