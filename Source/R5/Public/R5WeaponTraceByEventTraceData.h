#pragma once
#include "CoreMinimal.h"
#include "WeaponTraceData.h"
#include "R5WeaponTraceByEventTraceData.generated.h"

USTRUCT(BlueprintType)
struct FR5WeaponTraceByEventTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponTraceData> WeaponTraceData;
    
    R5_API FR5WeaponTraceByEventTraceData();
};

