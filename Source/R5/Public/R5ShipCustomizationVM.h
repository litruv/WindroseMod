#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5ShipCustomizationVM.generated.h"

class UR5ShipCustomizationItemsListVM;
class UR5ShipNameEditorVM;

UCLASS(Blueprintable)
class R5_API UR5ShipCustomizationVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipNameEditorVM* ShipNameEditorVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5ShipCustomizationItemsListVM*> CustomizationGroups;
    
public:
    UR5ShipCustomizationVM();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipNameEditorVM* GetShipNameEditorVM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UR5ShipCustomizationItemsListVM*> GetCustomizationGroups() const;
    
};

