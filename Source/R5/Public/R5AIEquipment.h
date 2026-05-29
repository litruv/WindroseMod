#pragma once
#include "CoreMinimal.h"
#include "R5NoInventoryEquipment.h"
#include "R5AIEquipment.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5AIEquipment : public UR5NoInventoryEquipment {
    GENERATED_BODY()
public:
    UR5AIEquipment(const FObjectInitializer& ObjectInitializer);

};

