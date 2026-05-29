#pragma once
#include "CoreMinimal.h"
#include "R5BLAttributeRequirements.h"
#include "R5BLItemAttributeModifierData.h"
#include "R5BLRecipeAttributeModifier.generated.h"

class UR5BLInventoryItem;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLRecipeAttributeModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLInventoryItem> ItemToWithAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLItemAttributeModifierData AttributeModifierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BLAttributeRequirements AttributeRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InheritAttributeOnSwapItems;
    
    FR5BLRecipeAttributeModifier();
};

