#pragma once
#include "CoreMinimal.h"
#include "R5BLAttributeRequirements.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLAttributeRequirements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRequiredAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRequiredAttribute;
    
    FR5BLAttributeRequirements();
};

