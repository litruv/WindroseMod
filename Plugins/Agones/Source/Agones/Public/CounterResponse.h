#pragma once
#include "CoreMinimal.h"
#include "CounterResponse.generated.h"

USTRUCT(BlueprintType)
struct FCounterResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Count;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Capacity;
    
    AGONES_API FCounterResponse();
};

