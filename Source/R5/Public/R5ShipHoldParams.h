#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ShipHoldLevelParameters.h"
#include "R5ShipHoldParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5ShipHoldParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ShipHoldLevelParameters> Levels;
    
    UR5ShipHoldParams();

};

