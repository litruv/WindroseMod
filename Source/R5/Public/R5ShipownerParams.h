#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ShipownerParams.generated.h"

class AR5ShipPawnBase;

UCLASS(Blueprintable)
class R5_API UR5ShipownerParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AR5ShipPawnBase> DefaultNonEquipmentShipClass;
    
    UR5ShipownerParams();

};

