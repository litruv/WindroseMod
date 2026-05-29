#pragma once
#include "CoreMinimal.h"
#include "R5RangeWeaponItemLogicData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5RangeWeaponItemLogicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxClipSize;
    
    FR5RangeWeaponItemLogicData();
};

