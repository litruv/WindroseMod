#pragma once
#include "CoreMinimal.h"
#include "R5POIVolume.h"
#include "R5POIBlockingVolume.generated.h"

UCLASS(Blueprintable, NoExport)
class R5POINTOFINTEREST_API AR5POIBlockingVolume : public AR5POIVolume {
    GENERATED_BODY()
public:
    AR5POIBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

