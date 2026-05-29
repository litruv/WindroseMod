#pragma once
#include "CoreMinimal.h"
#include "R5BuildingBlock_Door.h"
#include "R5BuildingBlock_SingleDoor.generated.h"

class UR5DoorHinge;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlock_SingleDoor : public AR5BuildingBlock_Door {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DoorStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5DoorHinge* DoorHinge;
    
public:
    AR5BuildingBlock_SingleDoor(const FObjectInitializer& ObjectInitializer);

};

