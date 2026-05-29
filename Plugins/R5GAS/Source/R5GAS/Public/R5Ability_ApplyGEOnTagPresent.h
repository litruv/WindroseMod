#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagQuery -FallbackName=GameplayTagQuery
#include "GameplayTagContainer.h"
#include "R5Ability.h"
#include "Templates/SubclassOf.h"
#include "R5Ability_ApplyGEOnTagPresent.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class R5GAS_API UR5Ability_ApplyGEOnTagPresent : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ShouldPresentGEQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> TargetGEClass;
    
public:
    UR5Ability_ApplyGEOnTagPresent();

};

