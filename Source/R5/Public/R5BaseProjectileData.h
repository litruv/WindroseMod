#pragma once
#include "CoreMinimal.h"
#include "R5BaseProjectileData.generated.h"

class UR5StaticAction;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FR5BaseProjectileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<UR5StaticAction*> HitStaticActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<UR5StaticAction*> StopStaticActions;
    
    R5_API FR5BaseProjectileData();
};

