#pragma once
#include "CoreMinimal.h"
#include "R5CommonInteractableBuildingBlock.h"
#include "R5DoorInterface.h"
#include "R5BuildingBlock_Door.generated.h"

class UR5DoorComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlock_Door : public AR5CommonInteractableBuildingBlock, public IR5DoorInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DoorComponent* DoorComponent;
    
public:
    AR5BuildingBlock_Door(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

