#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5ShipCraftVM.generated.h"

class UR5ShipRecipePanelVM;
class UR5ShipRecipesListVM;

UCLASS(Blueprintable)
class R5_API UR5ShipCraftVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipRecipesListVM* ShipRecipesListVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipRecipePanelVM* ShipRecipePanelVM;
    
public:
    UR5ShipCraftVM();

    UFUNCTION(BlueprintCallable)
    void OnRecipeSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipRecipesListVM* GetShipRecipesListVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipRecipePanelVM* GetShipRecipePanelVM() const;
    
    UFUNCTION(BlueprintCallable)
    bool CraftSelectedRecipe();
    
};

