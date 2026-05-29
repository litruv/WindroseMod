#pragma once
#include "CoreMinimal.h"
#include "R5InputMappingContextWithPriority.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct R5_API FR5InputMappingContextWithPriority {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* IMC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FR5InputMappingContextWithPriority();
};

