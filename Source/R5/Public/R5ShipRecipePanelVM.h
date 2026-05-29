#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5ShipRecipePanelVM.generated.h"

class UR5ShipRecipeVM;

UCLASS(Blueprintable)
class R5_API UR5ShipRecipePanelVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipRecipeVM* SelectedShipRecipe;
    
public:
    UR5ShipRecipePanelVM();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedRecipeUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSelectedShipRecipe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipRecipeVM* GetSelectedShipRecipeVM() const;
    
    UFUNCTION(BlueprintCallable)
    bool BuildShip();
    
};

