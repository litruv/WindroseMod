#pragma once
#include "CoreMinimal.h"
#include "ER5AngleDamageBaseVectorType.h"
#include "R5AngleDamageData.generated.h"

USTRUCT(BlueprintType)
struct FR5AngleDamageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeDamageRestrictedByAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngleToDamager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5AngleDamageBaseVectorType BaseVectorType;
    
    R5_API FR5AngleDamageData();
};

