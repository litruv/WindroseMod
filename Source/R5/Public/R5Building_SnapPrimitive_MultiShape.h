#pragma once
#include "CoreMinimal.h"
#include "R5Building_SnapPrimitiveBase.h"
#include "R5Building_SnapPrimitive_MultiShape.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5Building_SnapPrimitive_MultiShape : public UR5Building_SnapPrimitiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5Building_SnapPrimitiveBase*> SubShapes;
    
    UR5Building_SnapPrimitive_MultiShape();

};

