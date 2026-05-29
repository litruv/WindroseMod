#pragma once
#include "CoreMinimal.h"
#include "R5STC_LocatedOnNavmesh_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5STC_LocatedOnNavmesh_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalRadius;
    
    FR5STC_LocatedOnNavmesh_InstanceData();
};

