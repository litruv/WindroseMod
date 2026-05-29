#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIRequestID -FallbackName=AIRequestID
#include "AITypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AITask -FallbackName=AITask
#include "Tasks/AITask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTask -FallbackName=GameplayTask
#include "EMercunaMoveResult.h"
#include "MercunaMoveTaskCompletedSignatureDelegate.h"
#include "MercunaGroundTask_MoveTo.generated.h"

class AAIController;
class AActor;
class UMercunaGroundTask_MoveTo;

UCLASS(Blueprintable)
class MERCUNA_API UMercunaGroundTask_MoveTo : public UAITask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask::FGenericGameplayTaskDelegate OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaMoveTaskCompletedSignature OnMoveFinished;
    
public:
    UMercunaGroundTask_MoveTo();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveComplete(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UMercunaGroundTask_MoveTo* MoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float EndDistance, bool AcceptPartialPath, bool bLockAILogic);
    
};

