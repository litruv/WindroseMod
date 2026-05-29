#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectSpec -FallbackName=GameplayEffectSpec
#include "GameplayEffectTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeListener -FallbackName=R5ScenarioGraphNodeListener
#include "R5ScenarioGraphNodeListener.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioListener_EnemyKilled.generated.h"

class APawn;

UCLASS(Blueprintable)
class R5_API UR5ScenarioListener_EnemyKilled : public UR5ScenarioGraphNodeListener {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> ListenEnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRegisterChildClasses;
    
public:
    UR5ScenarioListener_EnemyKilled();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnEnemyDead(APawn* Pawn, const FGameplayEffectSpec& GameplayEffectSpec, float IncomingDamage, float DealtDamage);
    
};

