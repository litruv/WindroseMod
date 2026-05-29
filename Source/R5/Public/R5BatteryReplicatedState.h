#pragma once
#include "CoreMinimal.h"
#include "ER5BatteryEnhancementStatus.h"
#include "ER5BatteryState.h"
#include "R5BatteryReplicatedState.generated.h"

USTRUCT(BlueprintType)
struct FR5BatteryReplicatedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BatteryEnhancementStatus EnhancementStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AmmoIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LoadedCannonCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BatteryState BatteryState;
    
    R5_API FR5BatteryReplicatedState();
};

