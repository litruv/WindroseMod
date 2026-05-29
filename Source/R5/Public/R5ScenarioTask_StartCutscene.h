#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Cinematic -ObjectName=R5LevelSequenceInterface -FallbackName=R5LevelSequenceInterface
#include "R5LevelSequenceInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeTask -FallbackName=R5ScenarioGraphNodeTask
#include "R5ScenarioGraphNodeTask.h"
#include "ER5SequenceFinishReason.h"
#include "Templates/SubclassOf.h"
#include "R5ScenarioTask_StartCutscene.generated.h"

class AActor;
class UGameplayEffect;
class ULevelSequence;

UCLASS(Blueprintable)
class R5_API UR5ScenarioTask_StartCutscene : public UR5ScenarioGraphNodeTask, public IR5LevelSequenceInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSequenceEventTriggered, const FString&, EventName);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SequenceBlackBoardTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OriginActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBindPlayerCharacterToSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EscapePointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SequenceFinishReason FinishReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequenceEventTriggered OnSequenceEventTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AppliedGEClass;
    
    UR5ScenarioTask_StartCutscene();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSequenceSkipped();
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished();
    

    // Fix for true pure virtual functions not being implemented
};

