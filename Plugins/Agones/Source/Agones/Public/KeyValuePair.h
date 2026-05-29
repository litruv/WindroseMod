#pragma once
#include "CoreMinimal.h"
#include "KeyValuePair.generated.h"

USTRUCT(BlueprintType)
struct FKeyValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    AGONES_API FKeyValuePair();
};

