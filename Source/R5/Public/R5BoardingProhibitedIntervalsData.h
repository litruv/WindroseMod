#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Interval -FallbackName=Int32Interval
#include "R5BoardingProhibitedIntervalsData.generated.h"

USTRUCT(BlueprintType)
struct FR5BoardingProhibitedIntervalsData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInt32Interval> ProhibitedIntervals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseProhibitedIntervals;
    
    R5_API FR5BoardingProhibitedIntervalsData();
};

