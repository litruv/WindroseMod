#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5POIElementSpawner.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class R5POI_API UR5POIElementSpawner : public UObject {
    GENERATED_BODY()
public:
    UR5POIElementSpawner();

};

