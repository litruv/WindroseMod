#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItemParams.h"
#include "R5GearItemParams.generated.h"

class UR5EquipmentItemLogicParams;
class UR5GearItemSoundParams;
class UR5GearItemVisualParams;

UCLASS(Blueprintable)
class R5_API UR5GearItemParams : public UR5EquipmentItemParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5EquipmentItemLogicParams* LogicParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5GearItemVisualParams* VisualParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5GearItemSoundParams* SoundParams;
    
    UR5GearItemParams();

};

