#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioWorldProxy -FallbackName=R5ScenarioWorldProxy
#include "R5ScenarioWorldProxy.h"
#include "R5ScenarioTagRegistryProvider.h"
#include "R5ScenarioWorldProxy_ForPoi.generated.h"

class AActor;
class UR5BLIslandView;

UCLASS(Blueprintable)
class R5_API UR5ScenarioWorldProxy_ForPoi : public UR5ScenarioWorldProxy, public IR5ScenarioTagRegistryProvider {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLIslandView* IslandView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
public:
    UR5ScenarioWorldProxy_ForPoi();


    // Fix for true pure virtual functions not being implemented
};

