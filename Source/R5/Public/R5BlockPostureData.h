#pragma once
#include "CoreMinimal.h"
#include "R5BlockPostureData.generated.h"

USTRUCT(BlueprintType)
struct FR5BlockPostureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostureDamageToTargetWithBlockModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostureDamageToTargetWithPerfectBlockModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostureDamageReturnedIfPerfectBlockModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostureDamageReturnedIfPerfectBlockAdd;
    
    R5_API FR5BlockPostureData();
};

