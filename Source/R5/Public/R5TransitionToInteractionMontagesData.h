#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5TransitionToInteractionMontagesData.generated.h"

USTRUCT(BlueprintType)
struct FR5TransitionToInteractionMontagesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TransitionMontage;
    
    R5_API FR5TransitionToInteractionMontagesData();
};

