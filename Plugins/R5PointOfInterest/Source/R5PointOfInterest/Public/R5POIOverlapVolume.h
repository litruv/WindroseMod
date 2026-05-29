#pragma once
#include "CoreMinimal.h"
#include "R5POIVolume.h"
#include "R5POIOverlapVolume.generated.h"

UCLASS(Blueprintable, NoExport)
class R5POINTOFINTEREST_API AR5POIOverlapVolume : public AR5POIVolume {
    GENERATED_BODY()
public:
    AR5POIOverlapVolume(const FObjectInitializer& ObjectInitializer);

};

