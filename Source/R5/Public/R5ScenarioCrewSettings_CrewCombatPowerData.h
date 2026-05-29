#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioCrewSettings_CrewCombatPowerData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct R5_API FR5ScenarioCrewSettings_CrewCombatPowerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> CrewCombatPowerEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CrewCombatPowerMagnitudeTag;
    
    FR5ScenarioCrewSettings_CrewCombatPowerData();
};

