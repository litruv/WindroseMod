#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "R5VictimLootModifierData.h"
#include "R5ScenarioTask_GetVictimLootWithOverrides.generated.h"

class UR5BLLootParams;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_GetVictimLootWithOverrides : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLLootParams> DefaultLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5VictimLootModifierData> LootModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLLootParams> ResultLoot;
    
public:
    UR5ScenarioTask_GetVictimLootWithOverrides();

};

