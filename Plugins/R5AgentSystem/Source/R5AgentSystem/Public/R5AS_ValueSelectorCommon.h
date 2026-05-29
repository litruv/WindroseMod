#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AS_ValueSelectorCommon.generated.h"

class UR5AS_MemoryPackageParams;

USTRUCT(BlueprintType)
struct R5AGENTSYSTEM_API FR5AS_ValueSelectorCommon {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MemoryKeyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AS_MemoryPackageParams* MemoryPackage;
    
public:
    FR5AS_ValueSelectorCommon();
};

