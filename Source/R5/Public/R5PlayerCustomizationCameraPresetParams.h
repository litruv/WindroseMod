#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Engine/DataAsset.h"
#include "R5PlayerCustomizationCameraPresetData.h"
#include "R5PlayerCustomizationCameraPresetParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5PlayerCustomizationCameraPresetParams : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5PlayerCustomizationCameraPresetData> Presets;
    
    UR5PlayerCustomizationCameraPresetParams();

};

