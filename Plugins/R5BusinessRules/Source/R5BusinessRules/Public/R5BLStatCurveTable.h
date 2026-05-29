#pragma once
#include "CoreMinimal.h"
#include "ER5BLInventoryItemStat.h"
#include "R5BLStatCurveTable.generated.h"

class UCurveTable;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLStatCurveTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveTable> CurveTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLInventoryItemStat Stat;
    
    FR5BLStatCurveTable();
};

