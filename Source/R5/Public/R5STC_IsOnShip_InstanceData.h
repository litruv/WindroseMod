#pragma once
#include "CoreMinimal.h"
#include "R5STC_IsOnShip_InstanceData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct R5_API FR5STC_IsOnShip_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyInstigatorShip;
    
    FR5STC_IsOnShip_InstanceData();
};

