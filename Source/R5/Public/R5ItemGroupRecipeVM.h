#pragma once
#include "CoreMinimal.h"
#include "R5BaseRecipeVM.h"
#include "R5ItemGroupRecipeVM.generated.h"

class UR5BLInventoryItem;
class UR5BLRecipeData;
class UR5RecipeVM;
class UR5SelectedItemGroupRecipeList;

UCLASS(Blueprintable)
class R5_API UR5ItemGroupRecipeVM : public UR5BaseRecipeVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SelectedItemGroupRecipeList* SelectedItemGroupRecipeListVM;
    
public:
    UR5ItemGroupRecipeVM();

    UFUNCTION(BlueprintCallable)
    void TouchGroupRecipes();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedRecipeChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNewRecipe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyOverrides() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5RecipeVM* GetSelectedRecipeVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SelectedItemGroupRecipeList* GetSelectedItemGroupRecipeListVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UR5BLRecipeData>> GetItemGroupRecipes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLInventoryItem> GetCommonItemForGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanExecuteAnyRecipe() const;
    
};

