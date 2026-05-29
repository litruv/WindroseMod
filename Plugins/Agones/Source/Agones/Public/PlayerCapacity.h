#pragma once
#include "CoreMinimal.h"
#include "PlayerCapacity.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCapacity {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Count;
    
    AGONES_API FPlayerCapacity();
};

