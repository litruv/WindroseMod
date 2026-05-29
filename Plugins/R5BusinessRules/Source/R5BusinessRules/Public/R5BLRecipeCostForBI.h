#pragma once
#include "CoreMinimal.h"
#include "R5BLRecipeCostForBI.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipeCostForBI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FR5BLRecipeCostForBI();
};

