#pragma once
#include "CoreMinimal.h"
#include "R5CannonParamsArray.generated.h"

class UR5CannonParams;

USTRUCT(BlueprintType)
struct FR5CannonParamsArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5CannonParams>> ParamsArray;
    
    R5_API FR5CannonParamsArray();
};

