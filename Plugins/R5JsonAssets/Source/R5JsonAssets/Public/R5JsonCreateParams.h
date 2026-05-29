#pragma once
#include "CoreMinimal.h"
#include "R5JsonCreateParams.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FR5JsonCreateParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Outer;
    
    R5JSONASSETS_API FR5JsonCreateParams();
};

