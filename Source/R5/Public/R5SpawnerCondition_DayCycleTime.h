#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Nature -ObjectName=R5NamedDayCycleTime -FallbackName=R5NamedDayCycleTime
#include "R5NamedDayCycleTime.h"
#include "R5SpawnerCondition.h"
#include "R5SpawnerCondition_DayCycleTime.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SpawnerCondition_DayCycleTime : public UR5SpawnerCondition {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5NamedDayCycleTime> DayCycleTimes;
    
public:
    UR5SpawnerCondition_DayCycleTime();

};

