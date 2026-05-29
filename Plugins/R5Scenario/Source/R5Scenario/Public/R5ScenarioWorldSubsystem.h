#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5ScenarioWorldSubsystem.generated.h"

class UR5ScenarioExecutor;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioExecutor* WorldExecutor;
    
public:
    UR5ScenarioWorldSubsystem();

};

