#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=ELayoutLayer -FallbackName=ELayoutLayer
#include "ELayoutLayer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5HFSMHUDVisibility.generated.h"

class UInputMappingContext;
class UR5HUDVisibilityPresets;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5HFSMHUDVisibility : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5HUDVisibilityPresets* PresetsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* MappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ELayoutLayer> LayersToHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
public:
    UR5HFSMHUDVisibility();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateVisibilities();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleLayers(const bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHUD();
    
};

