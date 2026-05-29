#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMState -FallbackName=HFSMState
#include "HFSMState.h"
#include "R5HDEServiceHandleUI.generated.h"

UCLASS(Blueprintable)
class R5EXTERNALSERVICESINTEGRATIONS_API UR5HDEServiceHandleUI : public UHFSMState {
    GENERATED_BODY()
public:
    UR5HDEServiceHandleUI();

    UFUNCTION(BlueprintCallable)
    void SendFeedbackRequest(const FString& MessageString, const TArray<FString>& FilesList, const bool& bIsBug);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostFeedbackRequest(bool IsFailed);
    
};

