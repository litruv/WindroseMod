#pragma once
#include "CoreMinimal.h"
#include "R5BLEffectWithCostUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLEffectWithCostUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EffectDescription;
    
    FR5BLEffectWithCostUIData();
};

