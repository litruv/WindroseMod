#pragma once
#include "CoreMinimal.h"
#include "FloraParticle.h"
#include "BiomeFlora.generated.h"

USTRUCT(BlueprintType)
struct FBiomeFlora {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FFloraParticle> FloraParticles;
    
    R5NENVIRONMENTPARTICLES_API FBiomeFlora();
};

