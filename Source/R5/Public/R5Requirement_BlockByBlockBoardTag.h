#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Requirement -ObjectName=R5Requirement_CommonBase -FallbackName=R5Requirement_CommonBase
#include "R5Requirement_CommonBase.h"
#include "R5Requirement_BlockByBlockBoardTag.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5Requirement_BlockByBlockBoardTag : public UR5Requirement_CommonBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockByOwnerTags;
    
public:
    UR5Requirement_BlockByBlockBoardTag();

};

