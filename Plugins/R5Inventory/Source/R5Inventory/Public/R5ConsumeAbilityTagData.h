#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ConsumeAbilityTagData.generated.h"

USTRUCT(BlueprintType)
struct R5INVENTORY_API FR5ConsumeAbilityTagData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SoundInterruptTag;
    
    FR5ConsumeAbilityTagData();
};

