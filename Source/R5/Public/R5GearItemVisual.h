#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItemVisual.h"
#include "R5GearItemVisual.generated.h"

class UR5GearItemVisualParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5GearItemVisual : public UR5EquipmentItemVisual {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5GearItemVisualParams* Params;
    
public:
    UR5GearItemVisual(const FObjectInitializer& ObjectInitializer);

};

