#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "R5BpAiActorTracker.generated.h"

class AR5AICharacter;
class AR5AIController;
class AR5PlayerStateBase;
class UR5BpAiActorTracker;

UCLASS(Blueprintable)
class R5_API UR5BpAiActorTracker : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInitialized, const AR5AICharacter*, R5AICharacter, const AR5AIController*, R5AIController, const AR5PlayerStateBase*, R5PlayerState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitialized OnInitialized;
    
    UR5BpAiActorTracker();

    UFUNCTION(BlueprintCallable)
    static UR5BpAiActorTracker* R5CallWhenPlayerStateInitialized(AR5PlayerStateBase* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static UR5BpAiActorTracker* R5CallWhenControllerInitialized(AR5AIController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static UR5BpAiActorTracker* R5CallWhenCharacterInitialized(AR5AICharacter* Character);
    
};

