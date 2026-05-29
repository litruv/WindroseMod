#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "R5PredefinedNamedDayCycleTime.generated.h"

USTRUCT(BlueprintType)
struct FR5PredefinedNamedDayCycleTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInt32Interval> HourIntervals;
    
    R5NATURE_API FR5PredefinedNamedDayCycleTime();
};

