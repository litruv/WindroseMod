#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemAttribute -FallbackName=R5BLItemAttribute
#include "R5BLItemAttribute.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLRecipeAttributeModifier -FallbackName=R5BLRecipeAttributeModifier
#include "R5BLRecipeAttributeModifier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLRecipeBBData -FallbackName=R5BLRecipeBBData
#include "R5BLRecipeBBData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLRecipeBBRequirementData -FallbackName=R5BLRecipeBBRequirementData
#include "R5BLRecipeBBRequirementData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLRecipeComfortRequirement -FallbackName=R5BLRecipeComfortRequirement
#include "R5BLRecipeComfortRequirement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLRecipeItem -FallbackName=R5BLRecipeItem
#include "R5BLRecipeItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLRecipeUIData -FallbackName=R5BLRecipeUIData
#include "R5BLRecipeUIData.h"
#include "R5BaseRecipeVM.h"
#include "R5UIRecipeItemData.h"
#include "R5RecipeVM.generated.h"

class UR5BLCraftRequirement;
class UR5BLLootParams;
class UR5BLProductionReputationParams;
class UR5BLRecipeDataView;
class UR5MVVMObserver_BlackboardIntObserver;
class UTexture2D;

UCLASS(Blueprintable)
class R5_API UR5RecipeVM : public UR5BaseRecipeVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLRecipeDataView* RecipeView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_BlackboardIntObserver* ReputationObserver;
    
public:
    UR5RecipeVM();

    UFUNCTION(BlueprintCallable)
    void TouchRecipe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecipeNew() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverridden() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidRecipe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRequiredFactionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecipeRequiredItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFactionRequirements() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLLootParams> GetResultLootTable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5UIRecipeItemData> GetResultItemsInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLItemsStackData GetResultFirstItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLRecipeBBData GetResultBlackboardValuesToAdd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLRecipeAttributeModifier GetResultAttributeModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredFactionLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLRecipeUIData GetRecipeUIData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLRecipeItem> GetRecipeResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5UIRecipeItemData> GetRecipeRequiredItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLRecipeBBRequirementData GetRecipeRequiredDataForFaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLRecipeItem> GetRecipeCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLProductionReputationParams> GetProductionReputationParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetModifyAttributeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLItemAttribute GetFirstResultItemModifyAttribute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFactionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetFactionIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFactionDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDeltaAttribute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLCraftRequirement> GetCraftRequirement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCountAvailableRecipesToExecute() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5UIRecipeItemData> GetCostItemsInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCookingProcessDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5BLRecipeComfortRequirement> GetComfortRequirement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetComfortInfo(bool& bHasRequirements, FR5BLRecipeComfortRequirement& RecipeComfortRequirement, FR5BLRecipeComfortRequirement& CurrentComfort, TSoftObjectPtr<UTexture2D>& ComfortIcon) const;
    
    UFUNCTION(BlueprintCallable)
    void CraftRecipe(int32 CountToCraft);
    
};

