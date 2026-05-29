#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "EUIEventPropagation.h"
#include "HFSMStateComponent.h"
#include "UIEvent.h"
#include "UIEventPropagator.generated.h"

class UHFSMState;

UCLASS(Blueprintable, EditInlineNew)
class GCFSM_API UUIEventPropagator : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UUIEventPropagator();

    UFUNCTION(BlueprintCallable)
    void SimpleTransition(UHFSMState* Instigator, FGameplayTag Event);
    
    UFUNCTION(BlueprintCallable)
    void PropagateEvent(UHFSMState* Instigator, FUIEvent Event, EUIEventPropagation Propagation);
    
    UFUNCTION(BlueprintCallable)
    void MultiTransition(UHFSMState* Instigator, const TArray<FGameplayTag>& Events);
    
};

