#pragma once
#include "CoreMinimal.h"
#include "Optional_String.generated.h"

USTRUCT(BlueprintType)
struct FOptional_String {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    R5COMMONUTILS_API FOptional_String();
};

