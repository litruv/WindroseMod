#pragma once
#include "CoreMinimal.h"
#include "R5AS_MemoryPackageData.h"
#include "R5AS_MemoryData.generated.h"

class UR5AS_MemoryPackageParams;

USTRUCT(BlueprintType)
struct FR5AS_MemoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TMap<UR5AS_MemoryPackageParams*, FR5AS_MemoryPackageData> PackagesData;
    
    R5AGENTSYSTEM_API FR5AS_MemoryData();
};

