#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "BiomeFlora.h"
#include "R5N_FloraParticlesPreset.generated.h"

UCLASS(Blueprintable)
class R5NENVIRONMENTPARTICLES_API UR5N_FloraParticlesPreset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBiomeFlora> BiomeFloraParticles;
    
    UR5N_FloraParticlesPreset();

};

