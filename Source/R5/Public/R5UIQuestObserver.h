#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "ER5ScenarioQuestState.h"
#include "R5UIQuestObserver.generated.h"

class UR5BLQuestParams;
class UR5UIQuestObserver;
class UR5UIScenarioBlackboardIntObserver;

UCLASS(Blueprintable)
class R5_API UR5UIQuestObserver : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FR5OnQuestStateChanged, ER5ScenarioQuestState, NewState, UR5UIQuestObserver*, QuestObserver);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FR5OnQuestScoreChanged, UR5UIQuestObserver*, QuestObserver);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnQuestStateChanged OnQuestStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnQuestScoreChanged OnQuestScoreChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5UIScenarioBlackboardIntObserver* QuestStateObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5UIScenarioBlackboardIntObserver* QuestScoreObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5UIScenarioBlackboardIntObserver* QuestMaxScoreObserver;
    
public:
    UR5UIQuestObserver();

protected:
    UFUNCTION(BlueprintCallable)
    void OnQuestStateValueChanged(UR5UIScenarioBlackboardIntObserver* SourceObserver);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestScoreValueChanged(UR5UIScenarioBlackboardIntObserver* SourceObserver);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestMaxScoreValueChanged(UR5UIScenarioBlackboardIntObserver* SourceObserver);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasQuestScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5ScenarioQuestState GetQuestState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BLQuestParams* GetQuestParamsInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLQuestParams> GetQuestParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxQuestScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentQuestScore() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5UIQuestObserver* CreateQuestObserver(UObject* WorldContextObject, const TSoftObjectPtr<UR5BLQuestParams>& QuestToObserve);
    
};

