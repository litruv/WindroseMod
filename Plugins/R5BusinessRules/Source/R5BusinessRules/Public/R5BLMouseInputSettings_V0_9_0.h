#pragma once
#include "CoreMinimal.h"
#include "R5BLMouseInputSettings_V0_9_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLMouseInputSettings_V0_9_0 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MouseSensitivityX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MouseSensitivityY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseInvertVerticalAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMouseInvertHorizontalAxis;
    
    FR5BLMouseInputSettings_V0_9_0();
};

