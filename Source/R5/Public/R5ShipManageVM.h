#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5ShipManageVM.generated.h"

class UR5AbilitySystemAttributeVM;
class UR5MVVMObserver_Ship;
class UR5ShipCustomizationVM;
class UR5ShipInfoVM;
class UR5ShipInventoryVM;
class UR5ShipServiceVM;
class UR5ShipTitleVM;

UCLASS(Blueprintable)
class R5_API UR5ShipManageVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipInventoryVM* ShipInventoryVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipInfoVM* ShipInfoVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipServiceVM* ShipServiceVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipTitleVM* ShipTitleVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipCustomizationVM* ShipCustomizationVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_Ship* ShipObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemAttributeVM* AbilitySystemAttributeVM;
    
public:
    UR5ShipManageVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasManagedShip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipTitleVM* GetShipTitleVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipServiceVM* GetShipServiceVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipInventoryVM* GetShipInventoryVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipInfoVM* GetShipInfoVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipCustomizationVM* GetShipCustomizationVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5AbilitySystemAttributeVM* GetAbilitySystemAttributeVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanManageShip() const;
    
};

