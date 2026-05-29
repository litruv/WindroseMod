#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5EquipmentItemLogicData.h"
#include "R5ShipItemParams.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5ShipItemParams : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5EquipmentItemLogicData R5EquipmentItemLogicData;
    
    UR5ShipItemParams();

};

