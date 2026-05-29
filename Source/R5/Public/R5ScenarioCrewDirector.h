#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5SignificanceInterface.h"
#include "R5ScenarioCrewDirector.generated.h"

class UR5ScenarioCrewBLManager;
class UR5ScenarioCrewCombatPowerManager;
class UR5ScenarioCrewJobManager;
class UR5ScenarioCrewSettings;
class UR5ScenarioCrewSettings_Characters;
class UR5ScenarioCrewSettings_CombatPower;
class UR5ScenarioCrewSettings_Jobs;
class UR5ScenarioCrewSettings_SpawnRules;
class UR5ScenarioCrewSpawnManager;
class UR5ScenarioCrewStateManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UR5ScenarioCrewDirector : public UActorComponent, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ScenarioCrewSettings> CrewSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ScenarioCrewSettings_Characters> CharacterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ScenarioCrewSettings_SpawnRules> SpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ScenarioCrewSettings_CombatPower> CrewCombatPowerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ScenarioCrewSettings_Jobs> JobSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioCrewStateManager* StateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioCrewSpawnManager* SpawnManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioCrewBLManager* BLManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioCrewJobManager* JobManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioCrewCombatPowerManager* CombatPowerManager;
    
public:
    UR5ScenarioCrewDirector(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

