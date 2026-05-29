#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "EStoveInitState.h"
#include "StoveConfig.h"
#include "StoveTokenResult.h"
#include "StoveSDKObject.generated.h"

UCLASS(Blueprintable)
class STOVESDKPLUGIN_API UStoveSDKObject : public UObject {
    GENERATED_BODY()
public:
    UStoveSDKObject();

    UFUNCTION(BlueprintCallable)
    void StoveSDKUnInit();
    
    UFUNCTION(BlueprintCallable)
    bool StoveSDKInit(const FStoveConfig& Config);
    
    UFUNCTION(BlueprintCallable)
    FString StoveSDKGetUserId();
    
    UFUNCTION(BlueprintCallable)
    FStoveTokenResult StoveSDKGetToken();
    
    UFUNCTION(BlueprintCallable)
    EStoveInitState StoveSDKGetInitState();
    
    UFUNCTION(BlueprintCallable)
    static bool RestartAppIfNecessary(const FStoveConfig& Config);
    
};

