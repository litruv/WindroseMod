#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
#include "ER5AIMobLocationType.h"
#include "R5AIMobSpawnPoint.generated.h"

USTRUCT(BlueprintType)
struct R5_API FR5AIMobSpawnPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TRS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AIMobLocationType LocationType;
    
    FR5AIMobSpawnPoint();
};

