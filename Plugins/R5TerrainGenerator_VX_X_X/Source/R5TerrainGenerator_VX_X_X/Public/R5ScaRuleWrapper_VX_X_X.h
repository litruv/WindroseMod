#pragma once
#include "CoreMinimal.h"
#include "R5ScaRuleWrapper_VX_X_X.generated.h"

USTRUCT(BlueprintType)
struct FR5ScaRuleWrapper_VX_X_X {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmooth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BiomeIdA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BiomeIdB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InjectId;
    
    R5TERRAINGENERATOR_VX_X_X_API FR5ScaRuleWrapper_VX_X_X();
};

