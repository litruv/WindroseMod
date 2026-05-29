#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5EquipmentItemSoundParams.generated.h"

class UR5SoundCosmeticData;

UCLASS(Blueprintable)
class R5_API UR5EquipmentItemSoundParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SoundCosmeticData* SoundCosmeticData;
    
    UR5EquipmentItemSoundParams();

};

