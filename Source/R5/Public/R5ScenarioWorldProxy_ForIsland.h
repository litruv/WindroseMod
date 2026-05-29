#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioWorldProxy -FallbackName=R5ScenarioWorldProxy
#include "R5ScenarioWorldProxy.h"
#include "R5ScenarioWorldProxy_ForIsland.generated.h"

class AActor;
class UR5BLIslandView;
class UR5BLScenarioSaveView;

UCLASS(Blueprintable)
class R5_API UR5ScenarioWorldProxy_ForIsland : public UR5ScenarioWorldProxy {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLIslandView* IslandView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSaveView* ScenarioSaveView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
public:
    UR5ScenarioWorldProxy_ForIsland();

};

