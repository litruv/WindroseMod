#pragma once
#include "CoreMinimal.h"
#include "R5PivotPainterPassTextures.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct R5PIVOTPAINTER_API FR5PivotPainterPassTextures {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SrcPosAndIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SrcXAxisAndExtent;
    
    FR5PivotPainterPassTextures();
};

