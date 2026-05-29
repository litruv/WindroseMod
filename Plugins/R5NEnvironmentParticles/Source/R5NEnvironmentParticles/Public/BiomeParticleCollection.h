#pragma once
#include "CoreMinimal.h"
#include "BiomeParticle.h"
#include "BiomeParticleCollection.generated.h"

USTRUCT(BlueprintType)
struct FBiomeParticleCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBiomeParticle> ParticleCollection;
    
    R5NENVIRONMENTPARTICLES_API FBiomeParticleCollection();
};

