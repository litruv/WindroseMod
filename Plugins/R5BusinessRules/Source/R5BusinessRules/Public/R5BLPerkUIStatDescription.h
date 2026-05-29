#pragma once
#include "CoreMinimal.h"
#include "ER5BLPerkUIStatType.h"
#include "R5BLPerkUIStatDescription.generated.h"

class UCurveTable;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLPerkUIStatDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveTable> CurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLPerkUIStatType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverseValue;
    
    FR5BLPerkUIStatDescription();
};

