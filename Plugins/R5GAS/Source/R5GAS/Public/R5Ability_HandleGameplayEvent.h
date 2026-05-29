#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5Ability.h"
#include "R5Ability_HandleGameplayEvent.generated.h"

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_HandleGameplayEvent : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> EventTags;
    
public:
    UR5Ability_HandleGameplayEvent();

};

