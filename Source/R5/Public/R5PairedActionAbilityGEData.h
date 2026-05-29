#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "R5PairedActionAbilityGEData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5PairedActionAbilityGEData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSubclassOf<UGameplayEffect>> ReceiveTagToApplyGEToTarget;
    
    R5_API FR5PairedActionAbilityGEData();
};

