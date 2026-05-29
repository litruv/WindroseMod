#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Engine/DataAsset.h"
#include "R5ConsumableActivationParams.h"
#include "R5ConsumableAnimParams.h"
#include "R5ConsumableEffectParams.h"
#include "R5EquipmentGameplayEffectData.h"
#include "R5ConsumeAbilityData.generated.h"

UCLASS(Blueprintable)
class R5INVENTORY_API UR5ConsumeAbilityData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ConsumableActivationParams ConsumableActivationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ConsumableAnimParams ConsumableAnimParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ConsumableEffectParams ConsumableEffectParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5EquipmentGameplayEffectData EquipmentGameplayEffect;
    
    UR5ConsumeAbilityData();

};

