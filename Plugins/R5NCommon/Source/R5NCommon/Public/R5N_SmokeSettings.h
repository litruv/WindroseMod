#pragma once
#include "CoreMinimal.h"
#include "R5N_SmokeSettingsDebug.h"
#include "R5N_SmokeSettingsRender.h"
#include "R5N_SmokeSettingsSolver.h"
#include "R5N_SmokeSettings.generated.h"

USTRUCT(BlueprintType)
struct R5NCOMMON_API FR5N_SmokeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_SmokeSettingsSolver SmokeSettingsSolver;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_SmokeSettingsRender SmokeSettingsRender;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_SmokeSettingsDebug SmokeSettingsDebug;
    
    FR5N_SmokeSettings();
};

