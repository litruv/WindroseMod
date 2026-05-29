#pragma once
#include "CoreMinimal.h"
#include "R5BLItemAttributeModifierData.h"
#include "R5BLItemsStackData.h"
#include "R5BLItemsStackWithAttributeModifier.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLItemsStackWithAttributeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItemsStackData ItemsStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemAttributeModifierData> ItemAttributeModifiers;
    
    FR5BLItemsStackWithAttributeModifier();
};

