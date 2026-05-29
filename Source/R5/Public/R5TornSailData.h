#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameplayTagContainer.h"
#include "R5SailTornStateParameters.h"
#include "R5TornSailData.generated.h"

USTRUCT(BlueprintType)
struct FR5TornSailData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery GameplayTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SailTornStateParameters TargetValues;
    
    R5_API FR5TornSailData();
};

