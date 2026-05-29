#pragma once
#include "CoreMinimal.h"
#include "ER5TGPreviewLayer.generated.h"

UENUM(BlueprintType)
enum class ER5TGPreviewLayer : uint8 {
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

