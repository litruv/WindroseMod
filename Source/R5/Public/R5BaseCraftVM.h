#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5BaseCraftVM.generated.h"

class AActor;
class UR5CraftQueueVM;
class UR5CraftReputationVM;
class UR5DefaultInventoryVM;
class USoundBase;

UCLASS(Blueprintable)
class R5_API UR5BaseCraftVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CraftReputationVM* CraftReputationVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CraftQueueVM* CraftQueueVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DefaultInventoryVM* OutputInventoryVN;
    
public:
    UR5BaseCraftVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5DefaultInventoryVM* GetOutputInventoryVM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetNPCVoice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<AActor> GetLocalNPCClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5CraftReputationVM* GetCraftReputationVM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5CraftQueueVM* GetCraftQueueVM();
    
};

