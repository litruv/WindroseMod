#pragma once
#include "CoreMinimal.h"
#include "R5BuildingStaticMeshSelectorBase.h"
#include "R5BuildingStaticMeshSelector_ClusteredTiling.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UR5BuildingStaticMeshSelector_ClusteredTiling : public UR5BuildingStaticMeshSelectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfClusters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngleBetweenClusters;
    
    UR5BuildingStaticMeshSelector_ClusteredTiling();

};

