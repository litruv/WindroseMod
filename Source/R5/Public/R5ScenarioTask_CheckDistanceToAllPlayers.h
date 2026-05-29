#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "PlayerWithDistanceStruct.h"
#include "R5ScenarioTask_CheckDistanceToAllPlayers.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_CheckDistanceToAllPlayers : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ChildPointTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerWithDistanceStruct> SortedPlayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxDistance;
    
    UR5ScenarioTask_CheckDistanceToAllPlayers();

};

