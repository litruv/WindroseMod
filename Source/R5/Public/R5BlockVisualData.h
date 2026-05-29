#pragma once
#include "CoreMinimal.h"
#include "R5BlockVisualData.generated.h"

USTRUCT(BlueprintType)
struct FR5BlockVisualData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponTag;
    
    R5_API FR5BlockVisualData();
};

