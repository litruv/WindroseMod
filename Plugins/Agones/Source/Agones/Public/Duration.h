#pragma once
#include "CoreMinimal.h"
#include "Duration.generated.h"

USTRUCT(BlueprintType)
struct FDuration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Seconds;
    
    AGONES_API FDuration();
};

