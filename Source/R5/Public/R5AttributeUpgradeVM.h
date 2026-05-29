#pragma once
#include "CoreMinimal.h"
#include "R5BaseCraftVM.h"
#include "R5AttributeUpgradeVM.generated.h"

class UR5AttributeRecipeListVM;
class UR5BaseSelectedRecipePanelVM;

UCLASS(Blueprintable)
class R5_API UR5AttributeUpgradeVM : public UR5BaseCraftVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BaseSelectedRecipePanelVM* SelectedRecipePanelVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AttributeRecipeListVM* RecipesListVM;
    
public:
    UR5AttributeUpgradeVM();

    UFUNCTION(BlueprintCallable)
    bool UpgradeSelectedItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRecipeSelected();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BaseSelectedRecipePanelVM* GetSelectedAttributeRecipePanelVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5AttributeRecipeListVM* GetAttributeRecipeListVM() const;
    
};

