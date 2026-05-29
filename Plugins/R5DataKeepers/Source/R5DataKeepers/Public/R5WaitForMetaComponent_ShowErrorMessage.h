#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5WaitForMetaComponent_ShowErrorMessage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5WaitForMetaComponent_ShowErrorMessage : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5WaitForMetaComponent_ShowErrorMessage();

    UFUNCTION(BlueprintCallable)
    void DisconnectBL();
    
};

