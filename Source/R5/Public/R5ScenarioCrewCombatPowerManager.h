#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5ScenarioCrewManagerBase.h"
#include "R5ScenarioCrewCombatPowerManager.generated.h"

class AR5AICharacter;

UCLASS(Blueprintable)
class R5_API UR5ScenarioCrewCombatPowerManager : public UR5ScenarioCrewManagerBase {
    GENERATED_BODY()
public:
    UR5ScenarioCrewCombatPowerManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnCrewMemberSpawned(const FGameplayTag& CrewTag, AR5AICharacter* CrewMember);
    
};

