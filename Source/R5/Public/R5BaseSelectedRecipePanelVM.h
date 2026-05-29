#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCraftAvailability -FallbackName=ER5BLCraftAvailability
#include "ER5BLCraftAvailability.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5BaseSelectedRecipePanelVM.generated.h"

class UR5BaseRecipeVM;
class UR5MVVMObserver_ViewModels;

UCLASS(Blueprintable)
class R5_API UR5BaseSelectedRecipePanelVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_ViewModels* SelectedRecipeUpdateObserver;
    
public:
    UR5BaseSelectedRecipePanelVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSelectedRecipe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5BaseRecipeVM* GetSelectedRecipeVM() const;
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteRecipe();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5BLCraftAvailability CanExecuteRecipe() const;
    
};

