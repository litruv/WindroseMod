#pragma once
#include "CoreMinimal.h"
#include "Optional_FName.generated.h"

USTRUCT(BlueprintType)
struct FOptional_FName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Value;
    
    R5COMMONUTILS_API FOptional_FName();
};

