#pragma once
#include "CoreMinimal.h"
#include "R5BLItemAttributeModifierData.h"
#include "R5BLItemAttributeModifiersData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLItemAttributeModifiersData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemAttributeModifierData> ItemAttributeModifiers;
    
    FR5BLItemAttributeModifiersData();
};

