#pragma once
#include "CoreMinimal.h"
#include "R5BuildingStaticMeshSelector_PlaneTiling.h"
#include "R5BuildingStaticMeshSelector_ClusteredPlaneTiling.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UR5BuildingStaticMeshSelector_ClusteredPlaneTiling : public UR5BuildingStaticMeshSelector_PlaneTiling {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfClusters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngleBetweenClusters;
    
    UR5BuildingStaticMeshSelector_ClusteredPlaneTiling();

};

