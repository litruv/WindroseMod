#pragma once
#include "CoreMinimal.h"
#include "R5BLAccountCloudSettings_V0_9_0.h"
#include "R5BLAccountInputSettings_V0_9_0.h"
#include "R5BLAccountGameSettings_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLAccountGameSettings_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLAccountInputSettings_V0_9_0 InputSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLAccountCloudSettings_V0_9_0 CloudSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInitialized;
    
    FR5BLAccountGameSettings_V0_9_0();
};

