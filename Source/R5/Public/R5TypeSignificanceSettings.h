#pragma once
#include "CoreMinimal.h"
#include "R5SignificanceNetModeSettings.h"
#include "R5TypeSignificanceBudgetSettings.h"
#include "R5TypeSignificanceSettings.generated.h"

USTRUCT(BlueprintType)
struct FR5TypeSignificanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SignificanceNetModeSettings ClientSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SignificanceNetModeSettings ServerSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyUnnecessaryComponents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SignificanceNetModeSettings StandaloneSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5TypeSignificanceBudgetSettings BudgetSettings;
    
    R5_API FR5TypeSignificanceSettings();
};

