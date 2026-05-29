#pragma once
#include "CoreMinimal.h"
#include "R5STC_ShipReloadTimeInstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STC_ShipReloadTimeInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsoluteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelative;
    
    FR5STC_ShipReloadTimeInstanceData();
};

