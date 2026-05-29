#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ConsecutiveTagData.h"
#include "R5ConsecutiveTagEventsData.generated.h"

USTRUCT(BlueprintType)
struct FR5ConsecutiveTagEventsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MainEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ConsecutiveTagData> ConsecutiveData;
    
    R5GAS_API FR5ConsecutiveTagEventsData();
};

