#pragma once
#include "CoreMinimal.h"
#include "R5BLItemsStackWithAttributeModifier.h"
#include "R5BLRewardWithAttributeModifier.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRewardWithAttributeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackWithAttributeModifier> ItemsStacksWithAttributeModifier;
    
    FR5BLRewardWithAttributeModifier();
};

