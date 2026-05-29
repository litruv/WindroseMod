#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentComponent.h"
#include "R5PlayerEquipment.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5PlayerEquipment : public UR5EquipmentComponent {
    GENERATED_BODY()
public:
    UR5PlayerEquipment(const FObjectInitializer& ObjectInitializer);

};

