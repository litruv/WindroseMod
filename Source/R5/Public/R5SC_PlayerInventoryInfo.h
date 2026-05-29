#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5SC_PlayerInventoryInfo.generated.h"

class UR5BLInventoryView;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5SC_PlayerInventoryInfo : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5OnPlayerInventoryUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5OnPlayerInventoryUpdated OnPlayerInventoryUpdated;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLInventoryView* PlayerInventoryView;
    
public:
    UR5SC_PlayerInventoryInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInventoryFull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllModulesSlotsFilled(const FGameplayTagContainer& TargetModules) const;
    
};

