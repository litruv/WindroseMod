#pragma once
#include "CoreMinimal.h"
#include "Optional_Int32.generated.h"

USTRUCT(BlueprintType)
struct FOptional_Int32 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    R5COMMONUTILS_API FOptional_Int32();
};

