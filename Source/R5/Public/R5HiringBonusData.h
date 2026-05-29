#pragma once
#include "CoreMinimal.h"
#include "R5HiringBonusData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FR5HiringBonusData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    R5_API FR5HiringBonusData();
};

