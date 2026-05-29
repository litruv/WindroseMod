#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5HidingWidgetPresetData.h"
#include "R5HUDVisibilityPresets.generated.h"

UCLASS(Blueprintable)
class UR5HUDVisibilityPresets : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FR5HidingWidgetPresetData> Presets;
    
    UR5HUDVisibilityPresets();

};

