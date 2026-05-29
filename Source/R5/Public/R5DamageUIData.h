#pragma once
#include "CoreMinimal.h"
#include "R5DamageUIData.generated.h"

USTRUCT(BlueprintType)
struct FR5DamageUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeToSendUIMessage;
    
    R5_API FR5DamageUIData();
};

