#pragma once
#include "CoreMinimal.h"
#include "R5SavedColorControllerData.generated.h"

USTRUCT(BlueprintType)
struct FR5SavedColorControllerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultColor;
    
    R5_API FR5SavedColorControllerData();
};

