#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioTask_PoiSpawnAICharacterWithPointsInPool.generated.h"

class AActor;
class AR5AICharacter;
class UR5AS_AgentParams;

UCLASS(Blueprintable, Deprecated, MinimalAPI, NotPlaceable)
class UDEPRECATED_R5ScenarioTask_PoiSpawnAICharacterWithPointsInPool : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AR5AICharacter> AICharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AdditionalActorTrackerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpawnPointsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Party;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AS_AgentParams* AgentParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLRecordId> SpawnedCharacters;
    
    UDEPRECATED_R5ScenarioTask_PoiSpawnAICharacterWithPointsInPool();

};

