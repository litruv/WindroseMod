#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCraftShipAvailability -FallbackName=ER5BLCraftShipAvailability
#include "ER5BLCraftShipAvailability.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLShipUIData -FallbackName=R5BLShipUIData
#include "R5BLShipUIData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMListEntityVM -FallbackName=R5MVVMListEntityVM
#include "R5MVVMListEntityVM.h"
#include "R5UIRecipeItemData.h"
#include "R5ShipRecipeVM.generated.h"

class UR5BLRecipeData;
class UR5BLShipParams;
class UR5BLShipsListView;
class UR5MVVMObserver_InventoriesAuto;

UCLASS(Blueprintable)
class R5_API UR5ShipRecipeVM : public UR5MVVMListEntityVM {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_InventoriesAuto* InventoriesObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipsListView* ShipsListView;
    
public:
    UR5ShipRecipeVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FR5BLShipUIData GetShipUIData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLShipParams> GetShipParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShipName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FR5UIRecipeItemData> GetRecipeCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UR5BLRecipeData> GetRecipe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ER5BLCraftShipAvailability CanBuildShip() const;
    
};

