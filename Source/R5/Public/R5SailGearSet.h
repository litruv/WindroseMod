#pragma once
#include "CoreMinimal.h"
#include "R5SailGearSet.generated.h"

USTRUCT(BlueprintType)
struct FR5SailGearSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Gears;
    
    R5_API FR5SailGearSet();
};

