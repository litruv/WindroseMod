#pragma once
#include "CoreMinimal.h"
#include "ER5AICharacterSpeed.h"
#include "R5SetCharacterMovementSpeedStateTreeTaskInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FR5SetCharacterMovementSpeedStateTreeTaskInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AICharacterSpeed SpeedKey;
    
    R5_API FR5SetCharacterMovementSpeedStateTreeTaskInstanceData();
};

