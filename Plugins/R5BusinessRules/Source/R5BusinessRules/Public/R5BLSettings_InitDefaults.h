#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordPath -FallbackName=R5BLRecordPath
#include "R5BLRecordPath.h"
#include "R5BLDefaultAccountGameSettings.h"
#include "R5BLSettings_InitDefaults.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLSettings_InitDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLRecordPath AccountGameSettingsPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLDefaultAccountGameSettings DefaultAccountGameSettings;
    
    FR5BLSettings_InitDefaults();
};

