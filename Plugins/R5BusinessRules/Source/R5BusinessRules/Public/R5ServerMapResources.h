#pragma once
#include "CoreMinimal.h"
#include "R5ServerMapResources.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5ServerMapResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourcesRequestsMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourcesRequestsCpu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourcesLimitsMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourcesLimitsCpu;
    
    FR5ServerMapResources();
};

