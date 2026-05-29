#pragma once
#include "CoreMinimal.h"
#include "R5BLCharacterCustomizationData.h"
#include "R5BLCharacterCustomization.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLCharacterCustomization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLCharacterCustomizationData CustomizationData;
    
    FR5BLCharacterCustomization();
};

