#pragma once
#include "CoreMinimal.h"
#include "R5AmmoComponentData.generated.h"

class UR5BLAmmoBaseParams;

USTRUCT(BlueprintType)
struct FR5AmmoComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePredefineAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5BLAmmoBaseParams>> AmmoBaseParams;
    
    R5_API FR5AmmoComponentData();
};

