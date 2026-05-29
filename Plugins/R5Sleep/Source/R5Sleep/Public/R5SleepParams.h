#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Nature -ObjectName=R5NamedDayCycleTime -FallbackName=R5NamedDayCycleTime
#include "R5NamedDayCycleTime.h"
#include "R5SleepParams.generated.h"

UCLASS(Blueprintable)
class R5SLEEP_API UR5SleepParams : public UDataAsset {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DayCycleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FR5NamedDayCycleTime> DayCycleTimesToStopSleep;
    
public:
    UR5SleepParams();

};

