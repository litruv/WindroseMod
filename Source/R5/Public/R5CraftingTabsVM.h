#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLRecipeComfortRequirement -FallbackName=R5BLRecipeComfortRequirement
#include "R5BLRecipeComfortRequirement.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5CraftingTabsVM.generated.h"

class UR5MVVMObserver_BuildingCenter;
class UTexture2D;

UCLASS(Blueprintable)
class R5_API UR5CraftingTabsVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_BuildingCenter* BuildingCenterObserver;
    
public:
    UR5CraftingTabsVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuildingBlock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecipeListWithTag(FGameplayTag RecipeListTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNPCSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBuildingCenter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetComfortInfo(bool& bHasRequirements, FR5BLRecipeComfortRequirement& CurrentComfort, TSoftObjectPtr<UTexture2D>& ComfortIcon) const;
    
};

