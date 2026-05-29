#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5AS_GameplayTagContainerMemoryKey.h"
#include "R5AS_MemoryValueSetterByKeyCommon.h"
#include "R5AS_GameplayTagContainerMemoryValueSetterByKey.generated.h"

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_GameplayTagContainerMemoryValueSetterByKey : public FR5AS_MemoryValueSetterByKeyCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_GameplayTagContainerMemoryKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Value;
    
    FR5AS_GameplayTagContainerMemoryValueSetterByKey();
};

