#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5ConstellationSectorData.h"
#include "R5VoyageConstellationMapData.generated.h"

UCLASS(Blueprintable)
class R5_API UR5VoyageConstellationMapData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5ConstellationSectorData> Sectors;
    
    UR5VoyageConstellationMapData();

};

