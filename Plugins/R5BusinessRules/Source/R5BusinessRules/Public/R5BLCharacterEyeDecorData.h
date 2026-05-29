#pragma once
#include "CoreMinimal.h"
#include "R5BLCharacterEyeDecorData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCharacterEyeDecorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EyeColorPaletteIndex;
    
    FR5BLCharacterEyeDecorData();
};

