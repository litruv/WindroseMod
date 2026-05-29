#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=ER5ScenarioBlackboardType -FallbackName=ER5ScenarioBlackboardType
#include "ER5ScenarioBlackboardType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioTracker -FallbackName=R5ScenarioTracker
#include "R5ScenarioTracker.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioTracker_EnemiesKilledCount_ManyClass.generated.h"

class APawn;
class UR5ScenarioNode;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTracker_EnemiesKilledCount_ManyClass : public UR5ScenarioTracker {
    GENERATED_BODY()
public:
    UR5ScenarioTracker_EnemiesKilledCount_ManyClass();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnEnemyDead(APawn* Pawn, const FGameplayEffectSpec& GameplayEffectSpec, float IncomingDamage, float DealtDamage);
    
public:
    UFUNCTION(BlueprintCallable)
    static UR5ScenarioTracker* CreateTracker(ER5ScenarioBlackboardType Blackboard, bool SaveToPersistent, UR5ScenarioNode* Owner, TArray<TSubclassOf<APawn>> EnemyClasses, FGameplayTag KillCounterTag, bool AllowRegisterChildClasses);
    
};

