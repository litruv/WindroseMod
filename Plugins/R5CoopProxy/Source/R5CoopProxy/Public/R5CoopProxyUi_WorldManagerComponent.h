#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5CoopProxyUi_DevMapEntry.h"
#include "R5CoopProxyUi_WorldDescription.h"
#include "R5CoopProxyUi_WorldManagerComponent.generated.h"

class UR5WDSCategoryParams;
class UR5WDSPresetParams;

UCLASS(Blueprintable, EditInlineNew)
class UR5CoopProxyUi_WorldManagerComponent : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5CoopProxyUi_WorldManagerComponent();

    UFUNCTION(BlueprintCallable)
    void SetCurrentWorldId(const FString& WorldId);
    
    UFUNCTION(BlueprintCallable)
    void SaveWorldDescription(const FR5CoopProxyUi_WorldDescription& WorldDescription);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldsListUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FR5CoopProxyUi_WorldDescription> GetWorldDescriptions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UR5WDSPresetParams*> GetWDSPresets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UR5WDSCategoryParams*> GetWDSCategories() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FR5CoopProxyUi_DevMapEntry> GetDevMaps();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FR5BLRecordId GetCurrentWorldId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FR5CoopProxyUi_WorldDescription GetCurrentWorldDescription() const;
    
    UFUNCTION(BlueprintCallable)
    void DeleteWorldDescription(const FString& WorldId);
    
};

