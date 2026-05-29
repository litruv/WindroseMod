#pragma once
#include "CoreMinimal.h"
#include "ConsumeEffectEventHandlerData.h"
#include "ConsumeEquipmentEffectParams.h"
#include "ConsumeMeshData.h"
#include "ConsumeParticleData.h"
#include "ConsumeSoundEffectData.h"
#include "ConsumeEffect.generated.h"

USTRUCT(BlueprintType)
struct R5INVENTORY_API FConsumeEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConsumeParticleData> Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConsumeMeshData> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConsumeEquipmentEffectParams> EquipmentEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsumeEffectEventHandlerData EventHandlerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConsumeSoundEffectData SoundEffectData;
    
    FConsumeEffect();
};

