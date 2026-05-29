#pragma once
#include "CoreMinimal.h"
#include "ConsumeCustomPrimitiveData.h"
#include "ConsumeParticleData.h"
#include "ConsumeEquipmentEffectParams.generated.h"

USTRUCT(BlueprintType)
struct R5INVENTORY_API FConsumeEquipmentEffectParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetEquipmentSlotTypeBitmask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsumeParticleData Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConsumeCustomPrimitiveData> MaterialsData;
    
    FConsumeEquipmentEffectParams();
};

