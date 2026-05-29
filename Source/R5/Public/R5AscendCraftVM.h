#pragma once
#include "CoreMinimal.h"
#include "R5BaseCraftVM.h"
#include "R5AscendCraftVM.generated.h"

class UR5AscendRecipeListVM;
class UR5BaseSelectedRecipePanelVM;

UCLASS(Blueprintable)
class R5_API UR5AscendCraftVM : public UR5BaseCraftVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BaseSelectedRecipePanelVM* SelectedRecipePanelVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AscendRecipeListVM* RecipesListVM;
    
public:
    UR5AscendCraftVM();

    UFUNCTION(BlueprintCallable)
    bool UpgradeSelectedItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRecipeSelected();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BaseSelectedRecipePanelVM* GetSelectedRecipePanelVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5AscendRecipeListVM* GetAscendRecipeListVM() const;
    
};

