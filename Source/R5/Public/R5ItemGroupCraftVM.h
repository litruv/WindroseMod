#pragma once
#include "CoreMinimal.h"
#include "R5BaseCraftVM.h"
#include "R5ItemGroupCraftVM.generated.h"

class UR5ItemGroupRecipeListVM;
class UR5SelectedItemGroupRecipePanelVM;

UCLASS(Blueprintable)
class R5_API UR5ItemGroupCraftVM : public UR5BaseCraftVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SelectedItemGroupRecipePanelVM* SelectedRecipePanelVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ItemGroupRecipeListVM* ItemGroupRecipeListVM;
    
public:
    UR5ItemGroupCraftVM();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedItemGroupRecipeChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SelectedItemGroupRecipePanelVM* GetSelectedRecipePanelVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ItemGroupRecipeListVM* GetItemGroupRecipeListVM() const;
    
};

