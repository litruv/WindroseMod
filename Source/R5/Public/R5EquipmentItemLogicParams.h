#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5EquipmentItemLogicData.h"
#include "R5EquipmentItemLogicParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5EquipmentItemLogicParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5EquipmentItemLogicData R5EquipmentItemLogicData;
    
    UR5EquipmentItemLogicParams();

};

