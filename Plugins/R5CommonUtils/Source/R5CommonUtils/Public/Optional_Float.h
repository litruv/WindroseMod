#pragma once
#include "CoreMinimal.h"
#include "Optional_Float.generated.h"

USTRUCT(BlueprintType)
struct FOptional_Float {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    R5COMMONUTILS_API FOptional_Float();
};

