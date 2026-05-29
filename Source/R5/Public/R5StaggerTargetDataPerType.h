#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5StaggerActionType.h"
#include "R5StaggerTargetDataPerType.generated.h"

USTRUCT(BlueprintType)
struct FR5StaggerTargetDataPerType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5StaggerActionType StaggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CueTag;
    
    R5_API FR5StaggerTargetDataPerType();
};

