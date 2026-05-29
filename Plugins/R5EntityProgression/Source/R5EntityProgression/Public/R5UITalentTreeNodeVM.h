#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLPerkInfo -FallbackName=R5BLPerkInfo
#include "R5BLPerkInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5UITalentTreeNodeVM.generated.h"

class UR5BLPerkParams;
class UR5ProgressionTreeNodeModel;

UCLASS(Blueprintable)
class R5ENTITYPROGRESSION_API UR5UITalentTreeNodeVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ProgressionTreeNodeModel* NodeModel;
    
public:
    UR5UITalentTreeNodeVM();

    UFUNCTION(BlueprintCallable)
    void UpNodeLevel(int32 LevelsToUp);
    
    UFUNCTION(BlueprintCallable)
    void UnselectNodeLevel(int32 LevelsToUnlock);
    
    UFUNCTION(BlueprintCallable)
    void SelectNodeLevel(int32 LevelsToLock, const TSoftObjectPtr<UR5BLPerkParams>& TalentParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NotEnoughPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkippedTalent(const TSoftObjectPtr<UR5BLPerkParams>& TalentParams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNodeAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveLevels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetUISlotTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalRequiredPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTalentsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLPerkInfo> GetTalents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLPerkInfo GetTalentInfo(const TSoftObjectPtr<UR5BLPerkParams>& TalentParams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedTalentIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetNodeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNodeMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNodeLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNodeCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRequiredPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveNodeLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUpNodeLevel() const;
    
};

