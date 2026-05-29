#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "R5BpLocallyControlledActorTracker.generated.h"

class AR5PlayerCharacter;
class AR5PlayerController;
class AR5PlayerStateBase;
class UObject;
class UR5BpLocallyControlledActorTracker;

UCLASS(Blueprintable)
class R5_API UR5BpLocallyControlledActorTracker : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLocallyControlledPlayerInitialized, const AR5PlayerCharacter*, R5Character, const AR5PlayerController*, Controller, const AR5PlayerStateBase*, R5PlayerState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocallyControlledPlayerInitialized OnLocallyControlledPlayerInitialized;
    
    UR5BpLocallyControlledActorTracker();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool R5IsInSimulateMode(const UObject* Wco);
    
    UFUNCTION(BlueprintCallable)
    static UR5BpLocallyControlledActorTracker* R5CallWhenLocallyControlledPlayerInitialized(UObject* Wco);
    
};

