#pragma once
#include "CoreMinimal.h"
#include "R5POISchemeNodePreviewActor.h"
#include "R5POISpawnerActor.generated.h"

class UR5PointOfInterest;

UCLASS(Blueprintable, HideDropdown, MinimalAPI, NoExport, NotPlaceable)
class AR5POISpawnerActor : public AR5POISchemeNodePreviewActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PointOfInterest* POIAsset;
    
public:
    AR5POISpawnerActor(const FObjectInitializer& ObjectInitializer);

};

