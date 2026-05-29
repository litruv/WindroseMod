#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5UILayerProgressionInfo.h"
#include "R5UITalentTreeVM.generated.h"

class UR5BLPerkParams;
class UR5EntityProgressionVM;
class UR5TalentTreeProgressionParams;
class UR5UITalentTreeNodeVM;

UCLASS(Blueprintable)
class R5ENTITYPROGRESSION_API UR5UITalentTreeVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5UITalentTreeNodeVM*> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5EntityProgressionVM* EntityProgressionVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5TalentTreeProgressionParams* TalentTreeProgressionParams;
    
public:
    UR5UITalentTreeVM();

    UFUNCTION(BlueprintCallable)
    void UpNodeLevel(FGameplayTag NodeTag, int32 LevelsToUp);
    
    UFUNCTION(BlueprintCallable)
    void UnselectNodeLevel(FGameplayTag NodeTag, int32 LevelsToUnlock);
    
    UFUNCTION(BlueprintCallable)
    void UnselectAllNodes();
    
    UFUNCTION(BlueprintCallable)
    void SelectNodeLevel(FGameplayTag NodeTag, int32 LevelsToLock, const TSoftObjectPtr<UR5BLPerkParams>& SelectedPerk);
    
    UFUNCTION(BlueprintCallable)
    void ResetTalentTree();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLayerInProgress(FGameplayTag BranchTag, int32 LayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLayerFinished(FGameplayTag BranchTag, int32 LayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSelectedLevels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLItemsStackData> GetResetProgressionCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointsInBranch(int32 BranchId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5UITalentTreeNodeVM* GetNodeByUISlotTag(FGameplayTag SotTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5UITalentTreeNodeVM* GetNodeByTag(FGameplayTag NodeTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5UILayerProgressionInfo GetLayerProgress(FGameplayTag BranchTag, int32 LayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFreeTalentPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5EntityProgressionVM* GetEntityProgressionVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRequiredPointsForNodesTag(FGameplayTag NodesTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableTalentPoints() const;
    
    UFUNCTION(BlueprintCallable)
    void Confirm();
    
    UFUNCTION(BlueprintCallable)
    bool CanUpNodeLevel(FGameplayTag NodeTag, int32 LevelsToUp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanResetProgression() const;
    
};

