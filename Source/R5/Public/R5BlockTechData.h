#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ER5InputType.h"
#include "ER5RemoveDecreasePerfectBlockType.h"
#include "R5BlockTechData.generated.h"

USTRUCT(BlueprintType)
struct FR5BlockTechData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5InputType, FGameplayTagContainer> OngoingBlockTagsPerInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5RemoveDecreasePerfectBlockType RemoveDecreasePerfectBlockType;
    
    R5_API FR5BlockTechData();
};

