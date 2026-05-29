#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5BLModifyItemAttributePolicy.h"
#include "R5BLItemAttributeModifierData.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLItemAttributeModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttributeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttributesModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5BLModifyItemAttributePolicy ModifyItemAttributePolicy;
    
    FR5BLItemAttributeModifierData();
};

