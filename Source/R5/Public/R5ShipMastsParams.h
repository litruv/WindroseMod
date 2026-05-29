#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ShipMastData.h"
#include "R5ShipMastsParams.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class R5_API UR5ShipMastsParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipMastData MastRotationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* MergedYardsStaticMesh;
    
    UR5ShipMastsParams();

};

