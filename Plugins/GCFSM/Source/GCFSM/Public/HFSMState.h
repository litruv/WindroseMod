#pragma once
#include "CoreMinimal.h"
#include "GCFSMState.h"
#include "Templates/SubclassOf.h"
#include "HFSMState.generated.h"

class UHFSMStateComponent;

UCLASS(Blueprintable)
class GCFSM_API UHFSMState : public UGCFSMState {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowUseEnhancedInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMultiTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHFSMStateComponent*> Components;
    
public:
    UHFSMState();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LaunchChildFSMs();
    
    UFUNCTION(BlueprintCallable)
    bool GetClosestComponentInHierarchyUp(TSubclassOf<UHFSMStateComponent> ComponentClass, UHFSMStateComponent*& OutComponent);
    
};

