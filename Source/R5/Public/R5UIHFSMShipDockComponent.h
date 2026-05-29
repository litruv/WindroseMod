#pragma once
#include "CoreMinimal.h"
#include "R5SC_Base.h"
#include "R5UIHFSMShipDockComponent.generated.h"

class UR5UIShipDockParams;
class UR5UIShipDockViewModel;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5UIHFSMShipDockComponent : public UR5SC_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5UIShipDockParams* ShipDockParams;
    
public:
    UR5UIHFSMShipDockComponent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5UIShipDockViewModel* GetShipDockVM() const;
    
};

