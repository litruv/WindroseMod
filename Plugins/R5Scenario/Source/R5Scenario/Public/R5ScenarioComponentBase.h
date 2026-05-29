#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5ScenarioComponentBase.generated.h"

class UR5ScenarioExecutor;
class UR5ScenarioSettings;
class UR5ScenarioWorldProxy;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5SCENARIO_API UR5ScenarioComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ScenarioSettings> ScenarioSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioExecutor* Executor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioWorldProxy* WorldProxy;
    
public:
    UR5ScenarioComponentBase(const FObjectInitializer& ObjectInitializer);

};

