#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5NoInventoryEquipmentData.h"
#include "R5NoInventoryEquipmentParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5NoInventoryEquipmentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NoInventoryEquipmentData Data;
    
    UR5NoInventoryEquipmentParams();

};

