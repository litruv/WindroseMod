#pragma once
#include "CoreMinimal.h"
#include "R5BaseCraftVM.h"
#include "R5CraftVM.generated.h"

class UR5RecipeListVM;
class UR5SelectedRecipeNumberStepperVM;
class UR5SelectedRecipePanelVM;

UCLASS(Blueprintable)
class R5_API UR5CraftVM : public UR5BaseCraftVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SelectedRecipePanelVM* SelectedRecipePanelVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RecipeListVM* RecipesListVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SelectedRecipeNumberStepperVM* SelectedRecipeNumberStepperVM;
    
public:
    UR5CraftVM();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRecipeSelected();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SelectedRecipePanelVM* GetSelectedRecipePanelVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SelectedRecipeNumberStepperVM* GetSelectedRecipeNumberStepperVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5RecipeListVM* GetRecipeListVM() const;
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteSelectedRecipe();
    
};

