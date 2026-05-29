#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5EncounterRequirement.h"
#include "R5EncounterRequirement_BlackboardHasTags.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5EncounterRequirement_BlackboardHasTags : public UR5EncounterRequirement {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> RequiredTagsWithValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumOfMatchingTags;
    
public:
    UR5EncounterRequirement_BlackboardHasTags();

};

