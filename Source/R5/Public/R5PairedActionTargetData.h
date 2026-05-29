#pragma once
#include "CoreMinimal.h"
#include "R5PairedActionTargetAnimData.h"
#include "R5PairedActionTargetCollisionData.h"
#include "R5PairedActionTargetGEData.h"
#include "R5PairedActionTargetMoveData.h"
#include "R5PairedActionTargetPhysData.h"
#include "R5PairedActionTargetData.generated.h"

USTRUCT(BlueprintType)
struct FR5PairedActionTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PairedActionTargetGEData GEData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PairedActionTargetAnimData AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PairedActionTargetCollisionData CollisionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PairedActionTargetMoveData MoveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PairedActionTargetPhysData PhysData;
    
    R5_API FR5PairedActionTargetData();
};

