#pragma once
#include "CoreMinimal.h"
#include "R5BuildingStaticMeshSelector_LineTiling.h"
#include "R5BuildingStaticMeshSelector_ClusteredLineTiling.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UR5BuildingStaticMeshSelector_ClusteredLineTiling : public UR5BuildingStaticMeshSelector_LineTiling {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfClusters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngleBetweenClusters;
    
    UR5BuildingStaticMeshSelector_ClusteredLineTiling();

};

