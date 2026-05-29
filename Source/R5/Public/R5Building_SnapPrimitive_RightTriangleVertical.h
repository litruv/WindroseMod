#pragma once
#include "CoreMinimal.h"
#include "R5Building_SnapPrimitiveBase.h"
#include "R5Building_SnapPrimitive_RightTriangleVertical.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5Building_SnapPrimitive_RightTriangleVertical : public UR5Building_SnapPrimitiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverted;
    
    UR5Building_SnapPrimitive_RightTriangleVertical();

};

