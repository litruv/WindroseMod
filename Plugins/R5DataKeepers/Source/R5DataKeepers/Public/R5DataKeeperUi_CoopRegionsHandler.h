#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CaProxy -ObjectName=R5ConnectionRegionData -FallbackName=R5ConnectionRegionData
#include "R5ConnectionRegionData.h"
#include "R5DataKeeperUi_CoopRegionsHandler.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5DATAKEEPERS_API UR5DataKeeperUi_CoopRegionsHandler : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5DataKeeperUi_CoopRegionsHandler();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateConnectionRegions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConnectionRegionsUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TMap<FString, FR5ConnectionRegionData> GetConnectionRegions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FString GetBestRegion() const;
    
};

