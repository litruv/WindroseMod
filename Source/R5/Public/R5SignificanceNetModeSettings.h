#pragma once
#include "CoreMinimal.h"
#include "ER5SignificancePlayerInfoType.h"
#include "R5SignificanceNetModeSettings.generated.h"

USTRUCT(BlueprintType)
struct FR5SignificanceNetModeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBudgetEnabled;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificancePlayerInfoType PlayerInfoType;
    
    R5_API FR5SignificanceNetModeSettings();
};

