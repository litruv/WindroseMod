#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioTask_PoiCollectAllOverlappedActors.generated.h"

class AActor;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_PoiCollectAllOverlappedActors : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PoiOverlapZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> OverlapActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlapActors;
    
    UR5ScenarioTask_PoiCollectAllOverlappedActors();

};

