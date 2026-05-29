#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5HFSMPlayerReportsComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5HFSMPlayerReportsComponent : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5HFSMPlayerReportsComponent();

    UFUNCTION(BlueprintCallable)
    bool SendReport(const FString& Feedback);
    
};

