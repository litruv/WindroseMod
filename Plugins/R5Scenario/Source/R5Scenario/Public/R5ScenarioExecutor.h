#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5ScenarioExecutor.generated.h"

class AActor;
class UR5BLScenarioSaveView;
class UR5ScenarioBlackboard;
class UR5ScenarioGraph;
class UR5ScenarioSettings;
class UR5ScenarioWorldProxy;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioExecutor : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScenarioEnd, FR5BLRecordId, ScenarioID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteracted, FGameplayTag, Tag, AActor*, Instigator);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteracted OnInteracted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScenarioEnd OnScenarioEnd;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioSettings* ScenarioSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioWorldProxy* WorldProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSaveView* ScenarioSaveView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ScenarioBlackboard* ExecutorBlackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5ScenarioBlackboard*> AdditionalBlackboards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5ScenarioGraph*> ExecutedScenarios;
    
public:
    UR5ScenarioExecutor();

};

