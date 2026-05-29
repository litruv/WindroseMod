#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5DataKeeperUi_WaitForReadyToPlay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5DataKeeperUi_WaitForReadyToPlay : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5DataKeeperUi_WaitForReadyToPlay();

};

