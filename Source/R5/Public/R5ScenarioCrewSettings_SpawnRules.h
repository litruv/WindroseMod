#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5ScenarioCrewSettings_SpawnState.h"
#include "R5ScenarioCrewSettings_SpawnRules.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ScenarioCrewSettings_SpawnRules : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UrgentSpawnCrewPartOnStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinDelayBetweenUrgentSpawnsS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CrewSpawnRuleDefaultState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5ScenarioCrewSettings_SpawnState> CrewSpawnRules;
    
    UR5ScenarioCrewSettings_SpawnRules();

};

