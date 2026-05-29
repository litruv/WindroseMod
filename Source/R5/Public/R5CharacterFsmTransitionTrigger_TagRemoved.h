#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5CharacterFsmTransitionTrigger.h"
#include "R5CharacterFsmTransitionTrigger_TagRemoved.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5CharacterFsmTransitionTrigger_TagRemoved : public UR5CharacterFsmTransitionTrigger {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
public:
    UR5CharacterFsmTransitionTrigger_TagRemoved();

};

