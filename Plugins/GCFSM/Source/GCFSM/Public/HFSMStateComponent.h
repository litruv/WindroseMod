#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "EHFSMStateExitReason.h"
#include "HFSMStateComponent.generated.h"

class UHFSMState;

UCLASS(Blueprintable, EditInlineNew)
class GCFSM_API UHFSMStateComponent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHFSMState* State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowUseEnhancedInput;
    
    UHFSMStateComponent();

    UFUNCTION(BlueprintCallable)
    void SetComponentTickEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExit(FName Event, EHFSMStateExitReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHFSMState* GetState() const;
    
};

