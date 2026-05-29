#pragma once
#include "CoreMinimal.h"
#include "R5ActionTargetData.h"
#include "R5ActinsLinksData.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FR5ActinsLinksData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputAction*, FR5ActionTargetData> InputActionLinks;
    
    R5_API FR5ActinsLinksData();
};

