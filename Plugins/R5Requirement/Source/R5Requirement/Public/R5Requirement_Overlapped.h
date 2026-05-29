#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5Requirement_CommonBase.h"
#include "R5Requirement_Overlapped.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5REQUIREMENT_API UR5Requirement_Overlapped : public UR5Requirement_CommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRequiredGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredGameplayTags;
    
    UR5Requirement_Overlapped();

};

