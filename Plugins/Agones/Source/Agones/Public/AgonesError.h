#pragma once
#include "CoreMinimal.h"
#include "AgonesError.generated.h"

USTRUCT(BlueprintType)
struct FAgonesError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorMessage;
    
    AGONES_API FAgonesError();
};

