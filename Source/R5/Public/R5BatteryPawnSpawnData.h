#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimeDA -FallbackName=R5JsonRuntimeDA
#include "R5JsonRuntimeDA.h"
#include "R5BatteryPawnSpawnParams.h"
#include "R5BatteryPawnSpawnData.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5BatteryPawnSpawnData : public UR5JsonRuntimeDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BatteryPawnSpawnParams> BatteryPawnSpawnParams;
    
    UR5BatteryPawnSpawnData();

};

