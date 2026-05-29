#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Interface_PostProcessVolume -FallbackName=Interface_PostProcessVolume
#include "Interfaces/Interface_PostProcessVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "Engine/PostProcessVolume.h"
#include "R5POIVolume.h"
#include "R5POIPostProcessVolume.generated.h"

UCLASS(Blueprintable, NoExport)
class R5POINTOFINTEREST_API AR5POIPostProcessVolume : public AR5POIVolume, public IInterface_PostProcessVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    AR5POIPostProcessVolume(const FObjectInitializer& ObjectInitializer);

    virtual bool EncompassesPoint(FVector Point, float SphereRadius, float* OutDistanceToPoint) override;
    virtual FPostProcessVolumeProperties GetProperties() const override;
#if DEBUG_POST_PROCESS_VOLUME_ENABLE
    virtual FString GetDebugName() const override;
#endif
};

