#pragma once
#include "CoreMinimal.h"
#include "R5MaterialParameterInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FR5MaterialParameterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    R5_API FR5MaterialParameterInfo();
};

