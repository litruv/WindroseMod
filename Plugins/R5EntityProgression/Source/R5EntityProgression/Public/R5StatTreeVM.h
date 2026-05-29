#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5StatTreeVM.generated.h"

class UR5EntityProgressionVM;
class UR5StatTreeNodeVM;

UCLASS(Blueprintable)
class R5ENTITYPROGRESSION_API UR5StatTreeVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5StatTreeNodeVM*> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5EntityProgressionVM* EntityProgressionVM;
    
public:
    UR5StatTreeVM();

    UFUNCTION(BlueprintCallable)
    void ResetStats();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLItemsStackData> GetResetProgressionCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5StatTreeNodeVM*> GetNodes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreeStatPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5EntityProgressionVM* GetEntityProgressionVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableStatPoints() const;
    
    UFUNCTION(BlueprintCallable)
    void Confirm(const TMap<FGameplayTag, int32>& StatPointsByNodeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanResetProgression() const;
    
};

