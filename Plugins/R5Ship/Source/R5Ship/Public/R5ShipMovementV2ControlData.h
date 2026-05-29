#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "ShipMovementInputData.h"
#include "Templates/SubclassOf.h"
#include "R5ShipMovementV2ControlData.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class R5SHIP_API UR5ShipMovementV2ControlData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShipMovementInputData ControlInputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> DebugWidget;
    
    UR5ShipMovementV2ControlData();

};

