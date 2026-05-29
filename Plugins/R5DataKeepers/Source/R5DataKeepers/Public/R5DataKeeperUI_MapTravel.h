#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5DataKeeperUI_MapTravel.generated.h"

class UR5BLCommonIsland;

UCLASS(Blueprintable, EditInlineNew)
class R5DATAKEEPERS_API UR5DataKeeperUI_MapTravel : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5DataKeeperUI_MapTravel();

    UFUNCTION(BlueprintCallable)
    void TravelTo(const TSoftObjectPtr<UR5BLCommonIsland>& CommonIsland);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseShipCameraForSelection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLCommonIsland> GetCurrentLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UR5BLCommonIsland>> GetAvailableTravelLocations();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckIsAvailableToTravel(const TSoftObjectPtr<UR5BLCommonIsland>& CommonIsland);
    
};

