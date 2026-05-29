#pragma once
#include "CoreMinimal.h"
#include "R5Building_SnapPrimitiveBase.h"
#include "R5Building_SnapPrimitive_TriangleVertical.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5Building_SnapPrimitive_TriangleVertical : public UR5Building_SnapPrimitiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UR5Building_SnapPrimitive_TriangleVertical();

};

