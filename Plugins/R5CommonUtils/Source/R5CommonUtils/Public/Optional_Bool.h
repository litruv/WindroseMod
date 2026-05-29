#pragma once
#include "CoreMinimal.h"
#include "Optional_Bool.generated.h"

USTRUCT(BlueprintType)
struct FOptional_Bool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    R5COMMONUTILS_API FOptional_Bool();
};

