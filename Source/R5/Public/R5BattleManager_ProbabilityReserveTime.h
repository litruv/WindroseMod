#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "R5BattleManager_ProbabilityReserveTime.generated.h"

USTRUCT(BlueprintType)
struct FR5BattleManager_ProbabilityReserveTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReserveDuringActionWithAfterEffect;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ReserveTime;
    
    R5_API FR5BattleManager_ProbabilityReserveTime();
};

