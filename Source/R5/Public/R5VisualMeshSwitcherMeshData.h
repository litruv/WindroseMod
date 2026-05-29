#pragma once
#include "CoreMinimal.h"
#include "R5SkeletalMeshOptimizationData.h"
#include "R5VisualMeshSwitcherMeshData.generated.h"

class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FR5VisualMeshSwitcherMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SkeletalMeshOptimizationData SkeletalMeshOptimizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UMaterialInterface*> IndexToMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnOnInit;
    
    R5_API FR5VisualMeshSwitcherMeshData();
};

