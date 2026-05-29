#pragma once
#include "CoreMinimal.h"
#include "Optional_Double.generated.h"

USTRUCT(BlueprintType)
struct FOptional_Double {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSet;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    R5COMMONUTILS_API FOptional_Double();
};

