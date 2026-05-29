#pragma once
#include "CoreMinimal.h"
#include "R5BLPerkUIData.h"
#include "R5BLPerkInfo.generated.h"

class UR5BLPerkParams;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLPerkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLPerkParams> PerkParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLPerkUIData PerkUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    FR5BLPerkInfo();
};

