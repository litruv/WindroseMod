#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItem.h"
#include "R5GearItem.generated.h"

class UR5GearItemParams;
class UR5GearItemVisual;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5GearItem : public UR5EquipmentItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5GearItemVisual* Visual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5GearItemParams* ItemParams;
    
    UR5GearItem(const FObjectInitializer& ObjectInitializer);

};

