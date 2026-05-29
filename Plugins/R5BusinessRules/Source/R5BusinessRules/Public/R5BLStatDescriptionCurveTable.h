#pragma once
#include "CoreMinimal.h"
#include "ER5BLInventoryItemDisplayStatType.h"
#include "R5BLStatDescriptionCurveTable.generated.h"

class UCurveTable;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLStatDescriptionCurveTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveTable> CurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLInventoryItemDisplayStatType DisplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverseValue;
    
    FR5BLStatDescriptionCurveTable();
};

