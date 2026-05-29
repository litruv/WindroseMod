#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "R5BpActorTracker.generated.h"

class AController;
class AR5Character;
class AR5PlayerStateBase;
class UR5BpActorTracker;

UCLASS(Blueprintable)
class R5_API UR5BpActorTracker : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInitialized, const AR5Character*, R5Character, const AController*, OutController, const AR5PlayerStateBase*, R5PlayerState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitialized OnInitialized;
    
    UR5BpActorTracker();

    UFUNCTION(BlueprintCallable)
    static UR5BpActorTracker* R5CallWhenPlayerStateInitialized(AR5PlayerStateBase* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static UR5BpActorTracker* R5CallWhenControllerInitialized(AController* InController);
    
    UFUNCTION(BlueprintCallable)
    static UR5BpActorTracker* R5CallWhenCharacterInitialized(AR5Character* Character);
    
};

