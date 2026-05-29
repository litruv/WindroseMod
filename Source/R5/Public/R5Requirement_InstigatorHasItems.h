#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Requirement -ObjectName=R5Requirement_CommonBase -FallbackName=R5Requirement_CommonBase
#include "R5Requirement_CommonBase.h"
#include "R5Requirement_InstigatorHasItemsData.h"
#include "R5Requirement_InstigatorHasItems.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5Requirement_InstigatorHasItems : public UR5Requirement_CommonBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5Requirement_InstigatorHasItemsData> RequiredItems;
    
public:
    UR5Requirement_InstigatorHasItems();

};

