#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ShipAnchoringData.h"
#include "R5ShipAnchoringParams.generated.h"

UCLASS(Blueprintable)
class R5BUOYANCY_API UR5ShipAnchoringParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipAnchoringData Data;
    
    UR5ShipAnchoringParams();

};

