#pragma once
#include "CoreMinimal.h"
#include "R5AdditionalActionData.h"
#include "R5AdditionalInputData.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FR5AdditionalInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputAction*, FR5AdditionalActionData> InputActions;
    
    R5_API FR5AdditionalInputData();
};

