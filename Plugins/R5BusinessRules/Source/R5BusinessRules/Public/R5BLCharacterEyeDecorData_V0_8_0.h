#pragma once
#include "CoreMinimal.h"
#include "R5BLCharacterEyeDecorData_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCharacterEyeDecorData_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EyeColorPaletteIndex;
    
    FR5BLCharacterEyeDecorData_V0_8_0();
};

