#pragma once
#include "CoreMinimal.h"
#include "DeathBreakConstraintData.generated.h"

USTRUCT(BlueprintType)
struct FDeathBreakConstraintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectorBonesPushPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PossibleJointNames;
    
    R5_API FDeathBreakConstraintData();
};

