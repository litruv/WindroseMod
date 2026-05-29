#pragma once
#include "CoreMinimal.h"
#include "R5BuildingStaticMeshSelectorBase.h"
#include "R5BuildingTiledAxis.h"
#include "R5BuildingStaticMeshSelector_PlaneTiling.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UR5BuildingStaticMeshSelector_PlaneTiling : public UR5BuildingStaticMeshSelectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BuildingTiledAxis Axis1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BuildingTiledAxis Axis2;
    
    UR5BuildingStaticMeshSelector_PlaneTiling();

};

