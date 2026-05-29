#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "R5BpAccountTracker.generated.h"

class AController;
class AR5Character;
class AR5PlayerCharacter;
class AR5PlayerStateBase;
class UR5BpAccountTracker;

UCLASS(Blueprintable)
class R5_API UR5BpAccountTracker : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInitialized, const AR5Character*, R5Character, const AController*, OutController, const AR5PlayerStateBase*, R5PlayerState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitialized OnInitialized;
    
    UR5BpAccountTracker();

    UFUNCTION(BlueprintCallable)
    static UR5BpAccountTracker* R5CallWhenCharacterAndASCInitialized(AR5PlayerCharacter* Character);
    
};

