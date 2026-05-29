#pragma once
#include "CoreMinimal.h"
#include "R5BaseCraftVM.h"
#include "R5ItemConversionVM.generated.h"

class UR5BaseSelectedRecipePanelVM;
class UR5ConvertedItemRecipeList;

UCLASS(Blueprintable)
class R5_API UR5ItemConversionVM : public UR5BaseCraftVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BaseSelectedRecipePanelVM* SelectedRecipePanelVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ConvertedItemRecipeList* RecipesListVM;
    
public:
    UR5ItemConversionVM();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRecipeSelected();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BaseSelectedRecipePanelVM* GetSelectedRecipePanelVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ConvertedItemRecipeList* GetConvertedItemRecipeList() const;
    
    UFUNCTION(BlueprintCallable)
    bool ConvertSelectedItem();
    
};

