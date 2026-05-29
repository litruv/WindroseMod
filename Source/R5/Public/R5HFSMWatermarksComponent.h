#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5HFSMWatermarksComponent.generated.h"

class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5HFSMWatermarksComponent : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5HFSMWatermarksComponent();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialized(const FString& AccountId, const FString& BLSessionId, const FString& Region);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetRegion(UObject* WorldContextObject);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAccountData(FString& AccountId, FString& BLSessionId, FString& Region);
    
};

