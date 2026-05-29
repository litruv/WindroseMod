#pragma once
#include "CoreMinimal.h"
#include "R5BaseSelectedRecipePanelVM.h"
#include "R5SelectedItemGroupRecipePanelVM.generated.h"

class UR5ItemGroupRecipeVM;
class UR5MVVMObserver_ViewModels;
class UR5SelectedItemGroupRecipeList;

UCLASS(Blueprintable)
class R5_API UR5SelectedItemGroupRecipePanelVM : public UR5BaseSelectedRecipePanelVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ItemGroupRecipeVM* SelectedItemGroupRecipeVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_ViewModels* SelectedItemGroupObserver;
    
public:
    UR5SelectedItemGroupRecipePanelVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ItemGroupRecipeVM* GetSelectedItemGroupRecipeVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5SelectedItemGroupRecipeList* GetSelectedItemGroupRecipeListVM() const;
    
};

