#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ConsumeEffectEventHandlerData.generated.h"

USTRUCT(BlueprintType)
struct R5INVENTORY_API FConsumeEffectEventHandlerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DisableMeshEventTag;
    
    FConsumeEffectEventHandlerData();
};

