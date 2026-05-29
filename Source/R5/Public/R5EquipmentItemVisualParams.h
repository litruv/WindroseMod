#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5EquipmentItemVisualParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5EquipmentItemVisualParams : public UDataAsset {
    GENERATED_BODY()
public:
    UR5EquipmentItemVisualParams();

};

