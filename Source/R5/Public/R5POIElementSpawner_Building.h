#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5POI -ObjectName=R5POIElementSpawner -FallbackName=R5POIElementSpawner
#include "R5POIElementSpawner.h"
#include "R5POIElementSpawner_Building.generated.h"

class UObject;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5POIElementSpawner_Building : public UR5POIElementSpawner {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Building;
    
public:
    UR5POIElementSpawner_Building();

};

