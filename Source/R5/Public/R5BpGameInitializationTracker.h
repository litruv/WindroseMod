#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "R5BpGameInitializationTracker.generated.h"

class AR5GameMode;
class AR5GameState;
class UObject;
class UR5BpGameInitializationTracker;

UCLASS(Blueprintable)
class R5_API UR5BpGameInitializationTracker : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameInitialized, const AR5GameState*, GameState, const AR5GameMode*, GameMode);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameInitialized OnGameInitialized;
    
    UR5BpGameInitializationTracker();

    UFUNCTION(BlueprintCallable)
    static UR5BpGameInitializationTracker* CmCallWhenGameInitialized(UObject* Wco);
    
};

