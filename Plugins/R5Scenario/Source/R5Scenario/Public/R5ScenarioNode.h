#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "ER5ScenarioBlackboardType.h"
#include "R5ScenarioNodeHandle.h"
#include "R5ScenarioNode.generated.h"

class AActor;
class UR5ScenarioBlackboard;
class UR5ScenarioGraph;
class UR5ScenarioNode;

UCLASS(Blueprintable)
class R5SCENARIO_API UR5ScenarioNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldHideNodePin;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UR5ScenarioNode*> ChildrenNodes;
    
public:
    UR5ScenarioNode();

    UFUNCTION(BlueprintCallable)
    void RemoveScenarioDestructionProtection();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExec();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndClient();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLRecordId GetRootExecutorId() const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetRootActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwnerActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5ScenarioNodeHandle GetNodeHandle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UR5ScenarioBlackboard* GetBlackboard(ER5ScenarioBlackboardType BlackboardType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UR5ScenarioGraph* GetBaseGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAvatarActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UR5ScenarioBlackboard* GetActorBlackboard(AActor* Actor, ER5ScenarioBlackboardType BlackboardType) const;
    
    UFUNCTION(BlueprintCallable)
    void AddScenarioDestructionProtection();
    
};

