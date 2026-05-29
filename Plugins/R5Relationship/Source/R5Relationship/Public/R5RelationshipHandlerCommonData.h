#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ER5RelationshipHandlerType.h"
#include "R5RelationshipHandlerCommonData.generated.h"

USTRUCT(BlueprintType)
struct FR5RelationshipHandlerCommonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5RelationshipHandlerType RelationshipHandlerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockerTags;
    
    R5RELATIONSHIP_API FR5RelationshipHandlerCommonData();
};

