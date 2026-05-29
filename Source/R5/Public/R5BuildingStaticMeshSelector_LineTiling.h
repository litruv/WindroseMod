#pragma once
#include "CoreMinimal.h"
#include "R5BuildingStaticMeshSelectorBase.h"
#include "R5BuildingTiledAxis.h"
#include "R5BuildingStaticMeshSelector_LineTiling.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UR5BuildingStaticMeshSelector_LineTiling : public UR5BuildingStaticMeshSelectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BuildingTiledAxis Axis;
    
    UR5BuildingStaticMeshSelector_LineTiling();

};

