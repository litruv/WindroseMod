#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5AS_GameplayTagContainerValueSelector.h"
#include "R5AS_MemoryValueSetterBySelectorCommon.h"
#include "R5AS_GameplayTagContainerMemoryValueSetterBySelector.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_GameplayTagContainerMemoryValueSetterBySelector : public FR5AS_MemoryValueSetterBySelectorCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_GameplayTagContainerValueSelector Selector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Value;
    
    FR5AS_GameplayTagContainerMemoryValueSetterBySelector();
};

