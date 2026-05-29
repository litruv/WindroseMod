#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5ShipNameEditorVM.generated.h"

class UR5BLShipView;

UCLASS(Blueprintable)
class R5_API UR5ShipNameEditorVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipView* ShipView;
    
public:
    UR5ShipNameEditorVM();

    UFUNCTION(BlueprintCallable)
    void SetShipName(const FString& NewShipName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShipNameAvailable(const FString& NewShipName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveShip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShipName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSetShipName(const FString& NewShipName) const;
    
};

