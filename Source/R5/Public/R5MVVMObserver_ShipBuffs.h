#pragma once
#include "CoreMinimal.h"
#include "R5MVVMObserver_GameplayEffects.h"
#include "R5MVVMObserver_ShipBuffs.generated.h"

class UR5BLShipView;

UCLASS(Blueprintable)
class R5_API UR5MVVMObserver_ShipBuffs : public UR5MVVMObserver_GameplayEffects {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipView* ShipView;
    
public:
    UR5MVVMObserver_ShipBuffs();

};

