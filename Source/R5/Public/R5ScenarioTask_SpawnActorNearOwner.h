#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioTask_SpawnActorNearOwner.generated.h"

class AActor;
class UEnvQuery;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_SpawnActorNearOwner : public UR5ScenarioGraphNodeTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EQS;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AdditionalYawRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
    UR5ScenarioTask_SpawnActorNearOwner();

};

