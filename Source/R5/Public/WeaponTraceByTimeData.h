#pragma once
#include "CoreMinimal.h"
#include "WeaponTraceData.h"
#include "WeaponTraceByTimeData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponTraceByTimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponTraceData> WeaponTraceData;
    
    R5_API FWeaponTraceByTimeData();
};

