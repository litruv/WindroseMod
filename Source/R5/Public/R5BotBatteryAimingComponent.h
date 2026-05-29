#pragma once
#include "CoreMinimal.h"
#include "R5BatteryAimingComponentBase.h"
#include "R5BotBatteryAimingComponent.generated.h"

class UR5BotBatteryAimingParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BotBatteryAimingComponent : public UR5BatteryAimingComponentBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BotBatteryAimingParams> Params;
    
public:
    UR5BotBatteryAimingComponent(const FObjectInitializer& ObjectInitializer);

};

