#pragma once
#include "CoreMinimal.h"
#include "R5BuildingBlock_Door.h"
#include "R5BuildingBlock_DoubleDoor.generated.h"

class UR5DoorHinge;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5BuildingBlock_DoubleDoor : public AR5BuildingBlock_Door {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> DoorStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5DoorHinge*> DoorHinges;
    
public:
    AR5BuildingBlock_DoubleDoor(const FObjectInitializer& ObjectInitializer);

};

