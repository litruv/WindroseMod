#pragma once
#include "CoreMinimal.h"
#include "R5BLAccountCloudSettings.h"
#include "R5BLAccountInputSettings.h"
#include "R5BLAccountGameSettings.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLAccountGameSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLAccountInputSettings InputSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLAccountCloudSettings CloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
    FR5BLAccountGameSettings();
};

