#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentGameplayEffectCosmeticData.h"
#include "Templates/SubclassOf.h"
#include "R5EquipmentGameplayEffectData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct R5INVENTORY_API FR5EquipmentGameplayEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EquipmentSlotTypeBitmask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> AdditionalEquipmentEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5EquipmentGameplayEffectCosmeticData CosmeticData;
    
    FR5EquipmentGameplayEffectData();
};

