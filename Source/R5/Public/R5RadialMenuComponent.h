#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5RadialMenuComponent.generated.h"

class UR5RadialMenuAction;
class UR5RadialMenuAsset;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class R5_API UR5RadialMenuComponent : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5RadialMenuComponent();

protected:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    TArray<UR5RadialMenuAction*> GetRadialSlots(UR5RadialMenuAsset* MenuAsset, bool bCheckAvailability, const FGameplayTag& CharFSMState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ActivateSlot(UR5RadialMenuAction* Action);
    
};

