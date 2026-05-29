#pragma once
#include "CoreMinimal.h"
#include "R5BLRecipeResultItemForBI.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipeResultItemForBI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FR5BLRecipeResultItemForBI();
};

