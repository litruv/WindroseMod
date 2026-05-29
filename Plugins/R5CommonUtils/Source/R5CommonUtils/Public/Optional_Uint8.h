#pragma once
#include "CoreMinimal.h"
#include "Optional_Uint8.generated.h"

USTRUCT(BlueprintType)
struct FOptional_Uint8 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value;
    
    R5COMMONUTILS_API FOptional_Uint8();
};

