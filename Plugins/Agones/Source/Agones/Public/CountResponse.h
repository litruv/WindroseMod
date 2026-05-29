#pragma once
#include "CoreMinimal.h"
#include "CountResponse.generated.h"

USTRUCT(BlueprintType)
struct FCountResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Count;
    
    AGONES_API FCountResponse();
};

