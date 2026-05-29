#pragma once
#include "CoreMinimal.h"
#include "R5BLCharacterCustomizationData_V0_8_0.h"
#include "R5BLCharacterCustomization_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCharacterCustomization_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLCharacterCustomizationData_V0_8_0 CustomizationData;
    
    FR5BLCharacterCustomization_V0_8_0();
};

