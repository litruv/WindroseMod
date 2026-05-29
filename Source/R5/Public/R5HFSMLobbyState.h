#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMState -FallbackName=HFSMState
#include "HFSMState.h"
#include "R5HFSMLobbyState.generated.h"

UCLASS(Blueprintable)
class R5_API UR5HFSMLobbyState : public UHFSMState {
    GENERATED_BODY()
public:
    UR5HFSMLobbyState();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterCustomizationSavedOnServer() const;
    
};

