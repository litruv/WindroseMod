#pragma once
#include "CoreMinimal.h"
#include "R5BallisticProjectileMovementData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FR5BallisticProjectileMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RicochetSpeedLose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float DecreasePowerPerPenetration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bCanPenetrateNotArmoredTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> PenetrateTargetsClassFilter;
    
    R5_API FR5BallisticProjectileMovementData();
};

