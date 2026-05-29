#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5DataKeeperUi_PlayCoopOfflineGame.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5DATAKEEPERS_API UR5DataKeeperUi_PlayCoopOfflineGame : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5DataKeeperUi_PlayCoopOfflineGame();

    UFUNCTION(BlueprintCallable)
    void StartOnboardingGame();
    
    UFUNCTION(BlueprintCallable)
    void StartGameWithSelectedWorld();
    
};

