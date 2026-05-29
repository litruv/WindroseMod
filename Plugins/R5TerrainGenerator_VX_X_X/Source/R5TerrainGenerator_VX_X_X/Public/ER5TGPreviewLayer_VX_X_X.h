#pragma once
#include "CoreMinimal.h"
#include "ER5TGPreviewLayer_VX_X_X.generated.h"

UENUM(BlueprintType)
enum class ER5TGPreviewLayer_VX_X_X : uint8 {
    EPL_Heatmap,
    EPL_Height,
    EPL_Biomes,
    EPL_SubBiomes,
    EPL_IslandDF,
    EPL_BiomeDF,
    EPL_ShapeMask,
    EPL_Temperature,
    EPL_Sediment,
    EPL_Weights,
    EPL_Erosion,
};

