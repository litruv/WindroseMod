#pragma once
#include "CoreMinimal.h"
#include "R5BiomeUIData.generated.h"

USTRUCT(BlueprintType)
struct FR5BiomeUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    R5_API FR5BiomeUIData();
};

