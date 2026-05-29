#pragma once
#include "CoreMinimal.h"
#include "R5CompositeMeshEyeColorController.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FR5CompositeMeshEyeColorController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* UIPreviewMaterial;
    
    R5_API FR5CompositeMeshEyeColorController();
};

