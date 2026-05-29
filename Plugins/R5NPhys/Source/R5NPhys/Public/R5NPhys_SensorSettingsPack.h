#pragma once
#include "CoreMinimal.h"
#include "R5NPhys_SensorSettingsPack.generated.h"

class UR5NPhys_SensorSettings;

USTRUCT(BlueprintType)
struct FR5NPhys_SensorSettingsPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5NPhys_SensorSettings*> SensorSettings;
    
    R5NPHYS_API FR5NPhys_SensorSettingsPack();
};

