#pragma once
#include "CoreMinimal.h"
#include "R5SC_Base.h"
#include "R5HFSMShipManageComponent.generated.h"

class UR5ShipManageVM;
class UR5UIShipManageParams;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5HFSMShipManageComponent : public UR5SC_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5UIShipManageParams* ShipManageParams;
    
public:
    UR5HFSMShipManageComponent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5ShipManageVM* GetShipManage() const;
    
};

