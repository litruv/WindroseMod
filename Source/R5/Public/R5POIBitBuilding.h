#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5PointOfInterest -ObjectName=R5POIBit -FallbackName=R5POIBit
#include "R5POIBit.h"
#include "R5POIBitBuilding.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5POIBitBuilding : public UR5POIBit {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Building;
    
public:
    UR5POIBitBuilding();

};

