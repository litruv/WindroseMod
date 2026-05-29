#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5HFSM_ComicsObserver.generated.h"

class UR5UIScenarioBlackboardIntObserver;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5HFSM_ComicsObserver : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ComicsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ReturnEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5UIScenarioBlackboardIntObserver*> Observers;
    
public:
    UR5HFSM_ComicsObserver();

private:
    UFUNCTION(BlueprintCallable)
    void OnComicsChangeState(UR5UIScenarioBlackboardIntObserver* SourceObserver);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReadyToPlay() const;
    
};

