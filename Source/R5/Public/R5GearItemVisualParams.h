#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItemVisualParams.h"
#include "R5GearItemVisualParams.generated.h"

class UR5CompositeMeshParams;

UCLASS(Blueprintable)
class R5_API UR5GearItemVisualParams : public UR5EquipmentItemVisualParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5CompositeMeshParams*> MeshParams;
    
    UR5GearItemVisualParams();

};

