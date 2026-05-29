#pragma once
#include "CoreMinimal.h"
#include "R5CommonInteractableBuildingBlock.h"
#include "R5BuildingBlock_FastTravel.generated.h"

class UR5FastTravelComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlock_FastTravel : public AR5CommonInteractableBuildingBlock {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5FastTravelComponent* FastTravelComponent;
    
public:
    AR5BuildingBlock_FastTravel(const FObjectInitializer& ObjectInitializer);

};

