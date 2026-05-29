#pragma once
#include "CoreMinimal.h"
#include "R5POIElementSpawner.h"
#include "Templates/SubclassOf.h"
#include "R5POIElementSpawner_Actor.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5POI_API UR5POIElementSpawner_Actor : public UR5POIElementSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Class;
    
    UR5POIElementSpawner_Actor();

};

