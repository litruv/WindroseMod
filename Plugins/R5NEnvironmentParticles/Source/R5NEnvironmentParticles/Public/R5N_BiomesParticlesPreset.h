#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "BiomeParticleCollection.h"
#include "R5N_BiomesParticlesPreset.generated.h"

UCLASS(Blueprintable)
class R5NENVIRONMENTPARTICLES_API UR5N_BiomesParticlesPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBiomeParticleCollection> BiomeParticles;
    
    UR5N_BiomesParticlesPreset();

};

