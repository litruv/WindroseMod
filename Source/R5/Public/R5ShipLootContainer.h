#pragma once
#include "CoreMinimal.h"
#include "R5ChestActor.h"
#include "R5ShipLootContainer.generated.h"

class UR5NPhysComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5ShipLootContainer : public AR5ChestActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5NPhysComponent* NPhysComponent;
    
public:
    AR5ShipLootContainer(const FObjectInitializer& ObjectInitializer);

};

